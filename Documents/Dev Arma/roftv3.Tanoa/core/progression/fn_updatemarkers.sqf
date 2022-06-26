#include "..\..\script_macros.hpp"
/*
	File: fn_updatemarkers.sqf 
		
	Author: IronBlade
*/
private ["_markerCfg","_displayName","_requirement","_profRequired","_profRequiredLevel","_profCurrentLevel","_markerPos","_markerColour","_markerType","_lockedMarkerCfg"];

if !(playerSide isEqualTo civilian) exitWith {};

{		

	_markerCfg = getText( _x >> "marker" );  
	_lockedMarkerCfg = format ["%1_locked",_markerCfg];
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

		//-- Get the marker data then delete it
		if !(getMarkerColor _lockedMarkerCfg isEqualTo "") then { 
			_markerPos = getMarkerPos _lockedMarkerCfg;
			deleteMarkerLocal _lockedMarkerCfg;

		} else {

			_markerPos = getMarkerPos _markerCfg;
			deleteMarkerLocal _markerCfg;
		};

		//--Create new markers if high enough level
		if (_profCurrentLevel >= _profRequiredLevel) then {

			_m = createMarkerLocal [_markerCfg, _markerPos];
			_m setMarkerShapeLocal "ICON";
			_m setMarkerTypeLocal _markerType;
			_m setMarkerColorLocal _markerColour;
			_m setMarkerTextLocal format["%1",_displayName];

			} else {

			//--Delete the marker, create a 'locked' one in its place if not
			//-- Markers currently hidden, could use locked variant
			_m = createMarkerLocal [_lockedMarkerCfg, _markerPos];
			_m setMarkerShapeLocal "ICON";
			_m setMarkerSizeLocal [0.6, 0.6];
			_m setMarkerTypeLocal "Empty";
			_m setMarkerColorLocal "ColorRed";
		};
	};
}forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));