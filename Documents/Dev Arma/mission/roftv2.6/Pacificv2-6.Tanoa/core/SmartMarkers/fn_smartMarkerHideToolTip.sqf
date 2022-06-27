/*
	File: fn_smartMarkerHideToolTip.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
	Date: 27 Mar 2020 20:14:06
	Version: 0.1
*/
diag_log "fn_smartMarkerHideToolTip";

(uiNameSpace getVariable "map") ctrlMapCursor ["Track", "Track"];

{
    ctrlDelete _x;
} foreach smart_marker_settings_toolt_ctrls;
smart_marker_settings_toolt_ctrls = [];

disableSerialization;

_display = call BIS_fnc_displayMission;
waitUntil {_display = call BIS_fnc_displayMission; !(isNull _display)};

if (!(isNull (_display displayCtrl 1231))) then {
	ctrlDelete (_display displayCtrl 1231);
	ctrlDelete (_display displayCtrl 1232);
	ctrlDelete (_display displayCtrl 1233);
	ctrlDelete (_display displayCtrl 1234);
	ctrlDelete (_display displayCtrl 1235);
};