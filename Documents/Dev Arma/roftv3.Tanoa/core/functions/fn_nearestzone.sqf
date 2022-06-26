#include "..\..\script_macros.hpp"
/*
	File: fn_nearestzone.sqf
		
	Author: IronBlade
*/
private ["_config","_zoneMarkers","_zoneSize","_zoneType","_yourZoneMarker"];

{	
	_config = (configName _x);
	_zoneMarkers = getArray (_x >> "zone");
	_zoneSize = getNumber (_x >> "zoneSize");
	_zoneType = getText (_x >> "zoneType");
	_yourZoneMarker = "";
	
	{
		if (player distance2D (getMarkerPos _x) < _zoneSize) exitWith {_yourZoneMarker = _x}; 
	}forEach _zoneMarkers;

	if !(_yourZoneMarker isEqualTo "") exitWith {};

} forEach ("true" configClasses (missionConfigFile >> "CfgResourceZones"));


if !(_yourZoneMarker isEqualTo "") then {
	[_config,_zoneType];
} else {
	["",""];
};

