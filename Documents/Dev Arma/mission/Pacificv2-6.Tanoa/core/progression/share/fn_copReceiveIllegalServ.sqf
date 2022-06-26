#include "..\..\..\script_macros.hpp"
/*
	File: fn_copReceiveIllegalServ.sqf 
		
	Author: IronBlade
*/

_cfg = [_this,0,"",[""]] call BIS_fnc_param;

if (_cfg == "") exitWith {diag_log "_by or _cfg";};

if (!isClass (missionConfigFile >> "CfgMarkers" >> _cfg)) exitWith {diag_log format["CfgMarkers >> %1 is not Class", _cfg];};

_markerCfg = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "marker");  
_displayName = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName");
_mark = format["%1_cop", _markerCfg];
_markerPos = getMarkerPos _markerCfg;

_m = createMarkerLocal [_mark, _markerPos];
_m setMarkerShapeLocal "ICON";
_m setMarkerTypeLocal "hd_warning";
_m setMarkerColorLocal "ColorRed";
_m setMarkerTextLocal format["Info: %1",_displayName];

diag_log format["END fn_copReceiveMarkers"];