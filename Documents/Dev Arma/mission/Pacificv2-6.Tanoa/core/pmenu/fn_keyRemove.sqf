/*
	File: fn_keyRemove.sqf

	Autor: Iron
	Date: 29 Feb 2020 13:56:07
	Version: 0.1
*/

_param1 = [_this, 0, "", [""]] call BIS_fnc_param;
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _veh) exitWith {};

life_vehicles = life_vehicles - [_veh];