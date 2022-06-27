/*
	File: fn_smartMarkerAddMarker.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
private ["_varName", "_systemMarker", "_typeClassName", "_toolTipPath", "_scales"];
_systemMarker = [_this,0,"",[""]] call BIS_fnc_param;
_typeClassName = [_this,1,"",[""]] call BIS_fnc_param;

_varName = format["smt_mrks_%1", _systemMarker];

if (_varName in smart_marker_markers_elements) exitWith {
	[_systemMarker, "show"] call life_fnc_smartMarkerShowHideMarker;
};

_cfgSmartMarkers = (missionConfigFile >> "CfgSmartMarkers");
_configMarkers = (_cfgSmartMarkers >> "ConfigMarkers");
_typeCfg = (_configMarkers >> _typeClassName);


if (!isClass(_typeCfg)) exitWith {
	diag_log format["Error %1 is not MarkerType class", _typeClassName];
};


_toolTipPath = (_typeCfg >> "MarkerTooltip");
_visible = true;
_scales = getArray(_typeCfg >> "scales");

_position = getMarkerPos _systemMarker;

_markers = [];

_lod = smart_marker_settings_lst_lod;
_text = "";

{
	private ["_class", "_varName2", "_sufix", "_className", "_marker"];
	_class = _x;
	_className = configName(_x);

	_sufix = getText(_class >> "sufix");

	_markerName = format["%1_%2", _systemMarker, _sufix];
	_marker = createMarkerLocal [_markerName, _position];

	_markers pushBack _marker;

	_varName2 = format["smt_mrks_%1", _marker];
	missionNamespace setVariable [_varName2, [_varName, _class]];

	if (_text == "" && _className == "MarkerText") then {
		_text = getText(_class >> "text");
	};

	_type = [getArray(_class >> "type"), _lod] call life_fnc_smartMarkerFindLodConfig;
	_size = [getArray(_class >> "size"), _lod] call life_fnc_smartMarkerFindLodConfig;
	_color = [getArray(_class >> "color"), _lod] call life_fnc_smartMarkerFindLodConfig;
	_alpha = [getArray(_class >> "alpha"), _lod] call life_fnc_smartMarkerFindLodConfig;

	[_marker, _className, _type, _size, _color, _alpha, _text] call life_fnc_smartMarkerApplyConfig;
} forEach ("true" configClasses (_typeCfg >> "Sections"));

_varParrent = [];

missionNamespace setVariable [_varName, 
	[
		_markers,
		_toolTipPath,
		_visible, // visible
		_scales,
		_varParrent
	]
];

smart_marker_markers_elements pushBack _varName;