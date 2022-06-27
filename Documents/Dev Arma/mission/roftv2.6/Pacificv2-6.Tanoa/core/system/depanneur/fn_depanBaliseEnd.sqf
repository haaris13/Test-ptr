/*
	File: fn_depanBaliseEnd.sqf

	Autor: Iron
	Date: 12 Mar 2020 00:12:15
	Version: 0.1
*/
_var = [_this, 0, "", [""]] call BIS_fnc_param;

//[] call life_fnc_depanClear;

_found = [];

{
	_varD = _x select 0;

	if (_varD == _var) exitWith {
		_found = _x;
		deleteMarkerLocal _var;
	};
} forEach life_depan_balises;

if (count _found > 0) then {
	life_depan_balises = life_depan_balises - [_found];
};


