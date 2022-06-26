/*
	File: fn_fuelGetSationNear.sqf

	Autor:IronBlade
*/
_pos = position player;
_stationObj = objNull;
_distance = 99999999;

{
	if ((_pos distance _x) < _distance) then {
		_distance = (_pos distance _x);
		_stationObj = _x;
	};
} forEach life_stations_list;

_stationObj;