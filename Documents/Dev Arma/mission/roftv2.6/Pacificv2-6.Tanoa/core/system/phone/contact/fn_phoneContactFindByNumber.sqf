/*
	File: fn_phoneContactFindByNumber.sqf

	Autor: Iron
*/
private ["_number", "_var", "_contacts", "_idPhone", "_found", "_contact", "_cNumber"];
_number = [_this, 0, "", [""]] call BIS_fnc_param;

if (count life_phone == 0) exitWith {[]};

_idPhone = life_phone select 0;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];

_found = [];

{
	_contact = _x;
	_cNumber = _x select 2;

	if (_number == _cNumber) exitWith {_found = _contact;};
} forEach _contacts;

_found;