/*
	File: fn_hasAtouts.sqf

	Autor: Iron
	Date: 10 Mar 2020 18:57:47
	Version: 0.1
*/
_varFind = [_this,0,"",[""]] call BIS_fnc_param;

_find = false;

{
	_conf = _x select 0;

	if (_conf == _varFind) exitWith {_find = true;};

} forEach life_atouts_actif;

_find;