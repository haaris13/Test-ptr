#include "..\..\..\script_macros.hpp"
/*
	File: fn_receiveMarkers.sqf 
		
	Author: IronBlade
*/

_cfg = [_this,0,"",[""]] call BIS_fnc_param;
_by = [_this,1,objNull,[objNull]] call BIS_fnc_param;

if (isNull _by || _cfg == "") exitWith {diag_log "_by or _cfg";};

if (player distance _by > 10) exitWith {diag_log "bad _by distance";};

if (!isClass (missionConfigFile >> "CfgMarkers" >> _cfg)) exitWith {diag_log format["CfgMarkers >> %1 is not Class", _cfg];};

// Init: 
_markerCfg = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "marker");  
_lockedMarkerCfg = format ["%1_locked",_markerCfg];
_requirement = getArray( missionConfigFile >> "CfgMarkers" >> _cfg >> "requirement" ); 
_displayName = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName" ); 
_settings = getArray( missionConfigFile >> "CfgMarkers" >> _cfg >> "settings" ); 

// Settings Level
_profRequired = _requirement select 0;
_profRequiredLevel = _requirement select 1;
_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

// Check Conf
if (_profCurrentLevel >= _profRequiredLevel) exitWith {diag_log format["_profCurrentLevel >= _profRequiredLevel"];};

_markerColor = _settings select 1;
_markerType = _settings select 2;

//-- Get the marker data then delete it and create new
if !(getMarkerColor _lockedMarkerCfg isEqualTo "") then {
	_markerPos = getMarkerPos _lockedMarkerCfg;
	deleteMarkerLocal _lockedMarkerCfg;

	life_markers_zone_share pushBack _markerCfg;

	_m = createMarkerLocal [_markerCfg, _markerPos];
	_m setMarkerShapeLocal "ICON";
	_m setMarkerTypeLocal _markerType;
	_m setMarkerColorLocal _markerColor;
	_m setMarkerTextLocal format["%1",_displayName];

	hint format ["%1 vous à partagé les Information sur %2.", name _by, _displayName];

	[_markerPos] spawn {
	  while {dialog} do {
		   closeDialog 0;
		   sleep 0.01;
	  };
	  
	  openMap true;
	  mapAnimAdd [1, 0.12, (_this select 0)];
	  mapAnimCommit;
	};
};

diag_log format["END fn_receiveMarkers"];