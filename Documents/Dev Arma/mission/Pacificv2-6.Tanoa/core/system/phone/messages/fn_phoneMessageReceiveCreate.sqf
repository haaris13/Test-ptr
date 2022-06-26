/*
	File: fn_phoneMessageReceiveCreate.sqf

	Autor: Iron
*/
diag_log "fn_phoneMessageReceiveCreate";
_phone = [_this, 0, 0, [0]] call BIS_fnc_param;
_message = [_this, 1, [], [[]]] call BIS_fnc_param;

_var = format["life_phone_%1_messages", _phone];
_messages = missionNamespace getVariable [_var, []];

_rwMessages =+ _messages;

reverse _rwMessages;
_rwMessages pushBack _message;
reverse _rwMessages;

missionNamespace setVariable [_var, _rwMessages];

["Phone", "Message envoyé !"] spawn life_fnc_showPredefinedNotification;

_number = _message select 4;

disableSerialization;
_display = findDisplay 24300;

if (!isNull _display && life_phone_conv_selected == _number) then {
	[life_phone_conv_selected] spawn life_fnc_phoneMessageLbChange;
};