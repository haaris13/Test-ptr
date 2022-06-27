/*
	File: fn_smartMarkerInitArea.sqf

	Autor: Iron
	Inspired : Bohemia Interactive

	Parent
	[
		0: [markers]
		1: ToolTipPath
		2: visible ?
		3: visibleScales
		4: [childrens]
	]

	SectionMarkers:
	[
		0: ParentVar
		1: SectionClass
	]

	Child
	[
		0: [markers]
		1: ToolTipPath
		2: Visible ?
		3: visibleScales
		4: ParentVar
	]

	ListOfParentAndChild

	Show And UnShow Marker:
	Params:
	1: VarParent Or Child Or Marker
	Find -> And ApplyVisibleOrNot

	Add Marker
	Params:
	1: markerName
	2: MarkerType
	3: Text

*/
private ["_area", "_child", "_parent", "_parentValue", "_childs", "_varName", "_side", "_visible"];
_area = _this select 0;
_child = [_this,1,false,[false]] call BIS_fnc_param;
_parent = [_this,2,"",[""]] call BIS_fnc_param;

diag_log format["Init marker %1 isChild %2, for parent %3", configName(_area), _child, _parent];

_cfgSmartMarkers = (missionConfigFile >> "CfgSmartMarkers");

_text = getText(_area >> "text");
_systemMarker = getText(_area >> "systemMarker");
_typeClass = getText(_area >> "typeClass");

_typeCfg = (_cfgSmartMarkers >> "ConfigMarkers" >> _typeClass);

if (!isClass(_typeCfg)) exitWith {
	diag_log format["TypeCfg %1 is not class for area %2", _typeClass, configName(_area)];
};

_toolTipPath = (_area >> "MarkerTooltip");

if (!isClass(_toolTipPath)) then {
	_toolTipPath = (_typeCfg >> "MarkerTooltip");
};

_visible = (getNumber(_area >> "visible") == 1);

_side = switch(playerSide) do {
	case west:{"cop"};
	case civilian: {"civ"};
	case independent: {"med"};
};

_sides = getArray(_area >> "visibleSides");

if (_side in _sides) then {
	_visible = true;
};

_scales = getArray(_area >> "scales");
if (count _scales != 2) then {
	_scales = getArray(_typeCfg >> "scales");
};

_position = getMarkerPos _systemMarker;

_varName = format["smt_mrks_%1", _systemMarker];

if (_child) then {
	_parentValue = (missionNamespace getVariable _parent);

	_childs = _parentValue select 4;
	_childs pushBack _varName;

	_parentValue set [4, _childs];
	missionNamespace setVariable [_parent, _parentValue];
};

_markers = [];

_lod = 2;

{
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
	_alpha = [getArray(_class >> "alpha"), _lod] call life_fnc_smartMarkerFindLodConfig;
	_color = [getArray(_class >> "color"), _lod] call life_fnc_smartMarkerFindLodConfig;

	[_marker, _className, _type, _size, _color, _alpha, _text] call life_fnc_smartMarkerApplyConfig;

	if (!_visible) then {
		_marker setMarkerAlphaLocal 0;
	};

	if (_child) then {
		_marker setMarkerAlphaLocal 0;
	};
} forEach ("true" configClasses (_typeCfg >> "Sections"));

_varParrent = [];

if (_child) then {
	_varParrent = _parent;
};

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

if (!_child) then {
	{
		[_x, true, _varName] call life_fnc_smartMarkerInitArea;
	} forEach ("true" configClasses (_area >> "Childs"));
};
