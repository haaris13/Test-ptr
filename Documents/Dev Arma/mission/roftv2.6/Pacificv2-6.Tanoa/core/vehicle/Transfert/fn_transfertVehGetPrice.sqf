/*
	File: fn_transfertVehGetPrice.sqf

	Autor: Iron
	Date: 15 Mar 2020 13:39:50
	Version: 0.1
*/
private ["_classVeh", "_price"];
_classVeh = [_this, 0, "", [""]] call BIS_fnc_param;

_price = getNumber(missionConfigFile >> "LifeCfgVehicles" >> _classVeh >> "insurance");

if ((player distance (getMarkerPos "ocas_spawn") <= 100)) then {
	_price = round(_price / 3);
};

_price;