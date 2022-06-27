/*
	File: fn_depanCheckRepairVehicle.sqf

	Autor: Iron
	Date: 12 Mar 2020 20:42:22
	Version: 0.1
*/
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNil "life_depan_balises") exitWith {};

_toRemove = [];

_dbInfo = _veh getVariable["dbInfo", []];

_uidProp = _dbInfo select 0;
_plate = _dbInfo select 1;

_varVeh = format["dep_b_%1_%2", _uidProp, _plate];

{
	_var = _x select 0;

	if (_varVeh == _var) exitWith {
		_toRemove pushBack _x;
		deleteMarkerLocal _var;
		
		[_var] remoteExec ["TON_fnc_depanEndBalise", 2];
	};
} forEach life_depan_balises;

{
	life_depan_balises = life_depan_balises - [_x];
} forEach _toRemove;