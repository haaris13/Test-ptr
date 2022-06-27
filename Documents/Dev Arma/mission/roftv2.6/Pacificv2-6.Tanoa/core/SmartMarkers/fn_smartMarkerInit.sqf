/*
	File: fn_smartMarkerInit.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
diag_log "fn_smartMarkerInit: Init";

waitUntil {!isNull ([] call BIS_fnc_displayMission)};
waitUntil {markerIsConfig};

uiNameSpace setvariable ["map", (findDisplay 12 displayCtrl 51)];

smart_marker_ready = false;

smart_marker_markers_elements = [];

smart_marker_settings_current_mrk = false;
smart_marker_settings_current_hide = false;
smart_marker_settings_current = "";
smart_marker_settings_currents = [];
smart_marker_settings_lst_current_check = time;
smart_marker_settings_lst_current_hide_check = time;

smart_marker_settings_lst_scale = 1;
smart_marker_settings_lst_scale_change = time;
smart_marker_settings_lst_lod = 2;

smart_marker_settings_toolt_active = false;
smart_marker_settings_toolt_ctrls = [];

smart_marker_settings_right_click = false;

_cfgSmartMarkers = (missionConfigFile >> "CfgSmartMarkers");

{
	[_x] call life_fnc_smartMarkerInitArea;
} forEach ("true" configClasses (_cfgSmartMarkers >> "MarkersArea"));

smart_marker_settings_clear_currents = {
	if (smart_marker_settings_current_mrk) then {
		smart_marker_settings_current_mrk = false;
		smart_marker_settings_current = "";
		smart_marker_settings_currents = [];
	};
};

diag_log "fn_smartMarkerInit: setUp Events";
(uiNameSpace getVariable "map") ctrlAddEventHandler [ "Draw", life_fnc_smartMarkerMapDraw];
(uiNameSpace getVariable "map") ctrlAddEventHandler [ "MouseButtonUp", {["MouseButtonUp"] spawn life_fnc_smartMarkerMapHandleKey;}];
(uiNameSpace getVariable "map") ctrlAddEventHandler [ "MouseButtonDown", {["MouseButtonDown"] spawn life_fnc_smartMarkerMapHandleKey;}];

smart_marker_ready = true;
smart_marker_gps_mode = false;

[] spawn {
	while {true} do {
		uiSleep 0.2;
		if (!visibleMap) then {
			if (smart_marker_settings_toolt_active) then {
				smart_marker_settings_toolt_active = false;
				[] spawn life_fnc_smartMarkerHideToolTip;
			};

			if (visibleGPS && !smart_marker_gps_mode) then {
				smart_marker_gps_mode = true;
				[0.002] call life_fnc_smartMarkerMapScaleChange;
			};
		};
	};
};