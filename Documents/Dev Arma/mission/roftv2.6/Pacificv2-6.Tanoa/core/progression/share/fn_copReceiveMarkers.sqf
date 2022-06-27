#include "..\..\..\script_macros.hpp"
/*
	File: fn_copReceiveMarkers.sqf

	Autor: Iron
	Date: 01 Mar 2020 16:38:13
	Version: 0.1
*/
_cfg = [_this,0,"",[""]] call BIS_fnc_param;
_by = [_this,1,objNull,[objNull]] call BIS_fnc_param;

if (isNull _by || _cfg == "") exitWith {diag_log "_by or _cfg";};

if (player distance _by > 10) exitWith {diag_log "bad _by distance";};

if (!isClass (missionConfigFile >> "CfgMarkers" >> _cfg)) exitWith {diag_log format["CfgMarkers >> %1 is not Class", _cfg];};

// Init: 
_markerCfg = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "marker");  
_displayName = getText( missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName");

hint format ["%1 vous à partagé des informations à propos de %2.", name _by, _displayName];

[_cfg, player, _by] remoteExecCall ["TON_fnc_copIllegalMarkers", RSERV];