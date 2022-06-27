#include "..\..\script_macros.hpp"
/*
	File: fn_updatemarkers.sqf 
		
	Author: IronBlade
*/
private ["_markerCfg","_displayName","_requirement","_profRequired","_profRequiredLevel","_profCurrentLevel","_markerPos","_markerColour","_markerType","_systemMarkerCfg"];

if !(playerSide isEqualTo civilian) exitWith {};

waitUntil {smart_marker_ready};

{		
	_name = configName(_x);
	_markerCfg = getText( _x >> "marker" );
	_requirement = getArray( _x >> "requirement" ); 
	_displayName = getText( _x >> "displayName" ); 
	_settings = getArray( _x >> "settings" ); 

	_profRequired = _requirement select 0;
	_profRequiredLevel = _requirement select 1;

	_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

	_markerProf = _settings select 0;
	_markerColour = _settings select 1;
	_markerType = _settings select 2;

	if !(_markerCfg in life_markers_zone_share) then {

		//--Create new markers if high enough level
		if (_profCurrentLevel >= _profRequiredLevel) then {

			if !(_markerCfg in life_markers_zone_visible) then {
				life_markers_zone_visible pushBack _markerCfg;
				life_markers_zone_visible_cfg pushBack _name;
				[_markerCfg, "show"] call life_fnc_smartMarkerShowHideMarker;
			};

			} else {

			if (_markerCfg in life_markers_zone_visible) then {
				life_markers_zone_visible = life_markers_zone_visible - [_markerCfg];
				[_markerCfg, "hide"] call life_fnc_smartMarkerShowHideMarker;
			};
		};
	};
} forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));