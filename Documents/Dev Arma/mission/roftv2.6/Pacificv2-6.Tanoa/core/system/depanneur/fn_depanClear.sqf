/*
	File: fn_depanClear.sqf

	Autor: Iron
	Date: 12 Mar 2020 00:26:57
	Version: 0.1
*/
private ["_toRemove", "_vehB", "_uidB"];

_toRemove = [];

{
	_var = _x select 0;
	_vehB = _x select 1;
	_uidTake = _x select 2;

	if (isNull _vehB) then {
		_toRemove pushBack _x;
		deleteMarkerLocal _var;
	};
} forEach life_depan_balises;

{
	life_depan_balises = life_depan_balises - [_x];
} forEach _toRemove;