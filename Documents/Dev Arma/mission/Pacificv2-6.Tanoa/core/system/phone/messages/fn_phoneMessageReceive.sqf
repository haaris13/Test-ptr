/*
	File: fn_phoneMessageReceive.sqf

	Autor: Iron
*/
_phone = [_this, 0, 0, [0]] call BIS_fnc_param;
_message = [_this, 1, [], [[]]] call BIS_fnc_param;

_var = format["life_phone_%1_messages", _phone];
_messages = missionNamespace getVariable [_var, []];

_rwMessages =+ _messages;

reverse _rwMessages;
_rwMessages pushBack _message;
reverse _rwMessages;

missionNamespace setVariable [_var, _rwMessages];

_number = _message select 4;

_contact = [_number] call life_fnc_phoneContactFindByNumber;

_contactName = _number;
if (count _contact > 0) then {
	_contactName = _contact select 1;
};

_sound = "Orange_PhoneCall_Ringtone";
_color = [0.11,0.663,0.2,1];

_displayname = format["<t size='0.9' font='PuristaBold'>Nouveau message</t><br/><t size='0.8' font='PuristaLight'>%1</t>", _contactName];

_description = _message select 3;
_description = [_description, 0, 20] call BIS_fnc_trimString;

[_displayname, _description, _color, _sound] spawn life_fnc_showNotification;

disableSerialization;
_display = findDisplay 24300;

if (!isNull _display && life_phone_conv_selected == _number) then {
	[life_phone_conv_selected] spawn life_fnc_phoneMessageLbChange;
};