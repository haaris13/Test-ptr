/*
	File: fn_depanServiceReceive.sqf

	Autor: Iron
	Date: 12 Mar 2020 00:09:13
	Version: 0.1
*/
_balises = [_this, 0, [], [[]]] call BIS_fnc_param;

life_depan_balises = [];
life_depan_balises_acc = [];

{
	_var = _x select 0;
	_vehData = _x select 1;
	_uidTake = _x select 2;

	_posVeh = _vehData select 0;
	_classVeh = _vehData select 1;

	[_var, _posVeh, _classVeh, _uidTake] call life_fnc_depanBaliseReceive;
} forEach _balises;