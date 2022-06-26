/*
	File: fn_smartMarkerMapDraw.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
if (!visibleMap) exitWith {
	[] call smart_marker_settings_clear_currents;
	if (smart_marker_settings_toolt_active) then {
		smart_marker_settings_toolt_active = false;
		[] spawn life_fnc_smartMarkerHideToolTip;
	};
};

// When Scale Change
_currentScale = ctrlMapScale (uiNameSpace getVariable "map");
_scaleChanged = false;
if (_currentScale != smart_marker_settings_lst_scale) then {
	//diag_log format["LastScale %1 != %2", smart_marker_settings_lst_scale, _currentScale];
	_scaleChanged = true;
	[_currentScale] call life_fnc_smartMarkerMapScaleChange;
};

if (smart_marker_gps_mode) then {
	smart_marker_gps_mode = false;
};

// Hide tooltip on right click
if (smart_marker_settings_right_click) exitWith {
	[] call smart_marker_settings_clear_currents;
	if (smart_marker_settings_toolt_active) then {
		smart_marker_settings_toolt_active = false;
		[] spawn life_fnc_smartMarkerHideToolTip;
	};
};

_mouseOver = ctrlMapMouseOver (uiNameSpace getVariable "map");

// No over ellement
if (count _mouseOver == 0) exitWith {
	[] call smart_marker_settings_clear_currents;
	if (smart_marker_settings_toolt_active) then {
		smart_marker_settings_toolt_active = false;
		[] spawn life_fnc_smartMarkerHideToolTip;
	};
};

// No over marker
if ((_mouseOver select 0) != "marker") exitWith {
	[] call smart_marker_settings_clear_currents;
	if (smart_marker_settings_toolt_active) then {
		smart_marker_settings_toolt_active = false;
		[] spawn life_fnc_smartMarkerHideToolTip;
	};
};

_markerName = (_mouseOver select 1);

if (_scaleChanged) then {
	if (_markerName in smart_marker_settings_currents) then {
		smart_marker_settings_lst_current_check = time;
		_markerAlpha = markerAlpha (smart_marker_settings_currents select 1);
		if (_markerAlpha == 0) then {
			if (smart_marker_settings_toolt_active) then {
				smart_marker_settings_toolt_active = false;
				[] spawn life_fnc_smartMarkerHideToolTip;
			};

			smart_marker_settings_current_hide = true;
		};
	};
};

if (smart_marker_settings_current_hide && _scaleChanged) then {
	if (_markerName in smart_marker_settings_currents) then {
		smart_marker_settings_lst_current_hide_check = time;
		_markerAlpha = markerAlpha (smart_marker_settings_currents select 1);
		if (_markerAlpha != 0) then {
			[] call smart_marker_settings_clear_currents;
			smart_marker_settings_current_hide = false;
		};
	};
};


if (smart_marker_settings_current == _markerName) exitWith {};
smart_marker_settings_current_mrk = true;
smart_marker_settings_current = _markerName;

if (_markerName in smart_marker_settings_currents) exitWith {};

private ["_varName", "_dataMarker", "_parentData", "_parentVar"];

_varName = format["smt_mrks_%1", _markerName];
if (isNil {missionNamespace getVariable _varName}) exitWith {
	if (smart_marker_settings_toolt_active) then {
		smart_marker_settings_toolt_active = false;
		[] spawn life_fnc_smartMarkerHideToolTip;
	};
};

smart_marker_settings_currents = [];
smart_marker_settings_currents pushBack _markerName;

_dataMarker = missionNamespace getVariable _varName;
_parentData = _dataMarker;

if (count _dataMarker == 2) then {
	_parentVar = _dataMarker select 0;
	_parentData = missionNamespace getVariable _parentVar;
};

_markers = _parentData select 0;
_toolTipClass = _parentData select 1;

smart_marker_settings_currents = smart_marker_settings_currents + _markers;

//Already on this marker
_marker = _markers select 0;

if (markerAlpha _marker == 0) exitWith {
	smart_marker_settings_current_hide = true;
};

smart_marker_settings_current_hide = false;

if (typeName _toolTipClass != "CONFIG") exitWith {};
if (!isClass(_toolTipClass)) exitWith {};

[_marker, _toolTipClass] spawn life_fnc_smartMarkerShowToolTip;