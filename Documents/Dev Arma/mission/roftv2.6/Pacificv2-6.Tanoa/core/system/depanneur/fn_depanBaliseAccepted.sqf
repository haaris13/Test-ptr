/*
	File: fn_depanBaliseAccepted.sqf

	Autor: Iron
	Date: 12 Mar 2020 23:25:55
	Version: 0.1
*/
_var = [_this, 0, "", [""]] call BIS_fnc_param;
_uid = [_this, 1, "", [""]] call BIS_fnc_param;

{
	_varb = _x select 0;

	if (_varb == _var) exitWith {
		_x set [3, _uid];
	};
} forEach life_depan_balises;

