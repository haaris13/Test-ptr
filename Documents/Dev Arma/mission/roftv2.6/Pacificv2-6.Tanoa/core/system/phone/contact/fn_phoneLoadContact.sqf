/*
	File: fn_phoneLoadContact.sqf

	Autor: Iron
*/
_phone = [_this, 0, 0, [0]] call BIS_fnc_param;
_contacts = [_this, 1, [], [[]]] call BIS_fnc_param;

_var = format["life_phone_%1_contacts", _phone];
missionNamespace setVariable [_var, _contacts];