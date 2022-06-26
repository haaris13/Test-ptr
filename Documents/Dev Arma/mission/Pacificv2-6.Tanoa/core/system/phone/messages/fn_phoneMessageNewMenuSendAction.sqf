/*
	File: fn_phoneMessageNewMenuSendAction.sqf

	Autor: Iron
*/

_curRadio = "";
{
	if ((_x find "tf_radio") != -1) exitWith {
		_curRadio = _x;
	};
} forEach (assignedItems player);
if (_curRadio == "") exitWith {["Error", "Aucune Radio Assigné !"] spawn life_fnc_showPredefinedNotification;};

_display = findDisplay 24400;
_selectionContact = _display displayCtrl 24401;

_index = lbCurSel _selectionContact;
_lbData = _selectionContact lbData _index;

_numberEdit = _display displayCtrl 24402;
_messageEdit = _display displayCtrl 24406;

_number = "";

if (_lbData == "Number") then {
	_number = ctrlText _numberEdit;
} else {
	_number = _lbData;
};

_txtMessage = ctrlText _messageEdit;

_length = count (toArray(_txtMessage));
_chrByte = toArray (_txtMessage);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789àéè$ù%çêâ()-<>;:.,/\?'! ");

if (_length == 0) exitWith {["Error", "Aucun message."] spawn life_fnc_showPredefinedNotification;};
if(_length > 200) exitWith {["Error", "Le nom du contact est trop grand, 200 maximum."] spawn life_fnc_showPredefinedNotification;};
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

[player, _idPhone, _number, _txtMessage] remoteExec ["TON_fnc_phoneSendMessage", 2];
closeDialog 0;