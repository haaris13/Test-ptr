#include "..\..\script_macros.hpp"
/*
	File: fn_nearestzone.sqf
		
	Author: IronBlade
*/
private ["_config","_zoneMarkers","_zoneSize","_zoneType","_yourZoneMarker", "_found", "_markerCfg", "_mrk"];


// Init
if (count life_markers_zone_no_cond == 0) then {
	{
		_config = (configName _x);
		_zoneMarkers = getArray (_x >> "zone");
		
		{
			_mrk = _x;
			_found = false;

			{
				_markerCfg = getText( _x >> "marker" );
				
				if (_markerCfg == _mrk) exitWith {_found = true;};

			} forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));

			if (!_found) then {
				life_markers_zone_no_cond pushBack _mrk;
			};
		} forEach _zoneMarkers;

	} forEach ("true" configClasses (missionConfigFile >> "CfgResourceZones"));
};




{	
	_config = (configName _x);
	_zoneMarkers = getArray (_x >> "zone");
	_zoneSize = getNumber (_x >> "zoneSize");
	_zoneType = getText (_x >> "zoneType");
	_yourZoneMarker = "";
	
	{
		if ((_x in life_markers_zone_visible || _x in life_markers_zone_no_cond) && player distance2D (getMarkerPos _x) < _zoneSize) exitWith {_yourZoneMarker = _x}; 
	} forEach _zoneMarkers;

	if !(_yourZoneMarker isEqualTo "") exitWith {};

} forEach ("true" configClasses (missionConfigFile >> "CfgResourceZones"));


if !(_yourZoneMarker isEqualTo "") then {
	[_config,_zoneType];
} else {
	["",""];
};

