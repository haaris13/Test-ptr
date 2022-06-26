/*
	File: fn_phoneMessageReplySend.sqf

	Autor: Iron
*/
diag_log "fn_phoneMessageReplySend";
if (life_phone_conv_selected == "") exitWith {};

_curRadio = "";
{
	if ((_x find "tf_radio") != -1) exitWith {
		_curRadio = _x;
	};
} forEach (assignedItems player);
if (_curRadio == "") exitWith {["Error", "Aucune Radio Assigné !"] spawn life_fnc_showPredefinedNotification;};

_display = findDisplay 24300;
_group = _display displayCtrl 24301;

_messageEdit = (_display displayCtrl 24304);

_txtMessage = ctrlText _messageEdit;

_length = count (toArray(_txtMessage));
_chrByte = toArray (_txtMessage);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789àéè$ù%çêâ()-<>;:.,/\?' ");

if (_length == 0) exitWith {["Error", "Aucun message."] spawn life_fnc_showPredefinedNotification;};
if(_length > 200) exitWith {["Error", "Le message est trop grand, 200 maximum."] spawn life_fnc_showPredefinedNotification;};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {["Error", "Le message contient des caracères interdit."] spawn life_fnc_showPredefinedNotification;};

_filter = "';*@#<>/\";

_string = toArray _txtMessage; //Blow it up to an array
_filter = toArray _filter; //Blow it up to an array

{
	if(_x in _filter) then {
		_string set[_forEachIndex, 32];
	};
} foreach _string;

_string = toString _string;

_txtMessage = _string;

_idPhone = life_phone select 0;

[player, _idPhone, life_phone_conv_selected, _txtMessage] remoteExec ["TON_fnc_phoneSendMessage", 2];

_messageEdit ctrlSetText "";