/*
	File fn_phoneContactCreateReceive.sqf

	Autor: Iron
*/
_idPhone = [_this, 0, 0, [0]] call BIS_fnc_param;
_contact = [_this, 1, [], [[]]] call BIS_fnc_param;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];
_contacts pushBack _contact;

disableSerialization;

_display = (findDisplay 24200);

if (isNull _display) exitWith {};

_contactList = (_display displayCtrl 24202);

_index = (_contactList lbAdd (_contact select 1));
_contactList lbSetValue [_index, (_contacts find _contact)];