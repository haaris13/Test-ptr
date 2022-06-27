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
_requirement = getArray( missionConfigFile >> "CfgMarkers" >> _cfg >> "requirement" ); 
_displayName = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName" ); 
_settings = getArray( missionConfigFile >> "CfgMarkers" >> _cfg >> "settings" ); 
_needUnlock = getArray( missionConfigFile >> "CfgMarkers" >> _cfg >> "needUnlock" );

// Settings Level
_profRequired = _requirement select 0;
_profRequiredLevel = _requirement select 1;
_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

if ((count _needUnlock) > 0) then {
	_cfgUnlock = _needUnlock select 0;

	if !(_cfgUnlock in life_player_unLocks) then {
		[_cfgUnlock, getPlayerUID _by] spawn life_fnc_playerUnlockAdd;	
		["Accepted", format ["%1 vous à partagé les Information sur %2.", name _by, _displayName]] spawn life_fnc_showPredefinedNotification;
	};	
};

// Check Conf
if (_profCurrentLevel >= _profRequiredLevel) exitWith {diag_log format["_profCurrentLevel >= _profRequiredLevel"];};

_markerColor = _settings select 1;
_markerType = _settings select 2;

if !(_markerCfg in life_markers_zone_visible) then {
	life_markers_zone_visible pushBack _markerCfg;
	life_markers_zone_visible_cfg pushBack _cfg;
	life_markers_zone_share pushBack _markerCfg;

	[_markerCfg, "show"] call life_fnc_smartMarkerShowHideMarker;

	hint format ["%1 vous à partagé les Information sur %2.", name _by, _displayName];

	/*
	[_markerPos] spawn {
	  while {dialog} do {
		   closeDialog 0;
		   sleep 0.01;
	  };
	  
	  openMap true;
	  mapAnimAdd [1, 0.12, (_this select 0)];
	  mapAnimCommit;
	};
	*/
};

diag_log format["END fn_receiveMarkers"];