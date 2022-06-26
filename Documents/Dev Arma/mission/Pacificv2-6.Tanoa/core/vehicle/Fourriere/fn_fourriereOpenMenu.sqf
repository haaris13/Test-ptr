/*
	File: fn_fourriereOpenMenu.sqf

	Autor: Iron
*/

if ((call life_depanLevel) <= 0) exitWith {};

[player] remoteExec ["TON_fnc_fourriereListVehicle", 2];