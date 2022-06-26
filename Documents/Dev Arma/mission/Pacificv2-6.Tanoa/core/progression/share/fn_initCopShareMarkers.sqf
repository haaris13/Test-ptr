#include "..\..\..\script_macros.hpp"
/*
	File: fn_initCopShareMarkers.sqf 
		
	Author: IronBlade
*/

{
	_cfg = _x;
	_markerCfg = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "marker");  
	_displayName = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName");

	_mark = format["%1_cop", _markerCfg];
	_markerPos = getMarkerPos _markerCfg;

	_m = createMarkerLocal [_mark, _markerPos];
	_m setMarkerShapeLocal "ICON";
	_m setMarkerTypeLocal "hd_warning";
	_m setMarkerColorLocal "ColorRed";
	_m setMarkerTextLocal format["Info: %1",_displayName];
	
} forEach life_cop_illegals_markers;