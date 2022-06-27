/*
	File: fn_mapUpdate.sqf;

	Autor:IronBlade
*/

_controlList = _this select 0;
_index = _this select 1;

if (_index == -1) exitWith {};

_cfgMap = (missionConfigFile >> "CfgMap");
_cfgMapCateg = (_cfgMap >> "Category");

_data = _controlList lbData _index;
_value = _controlList lbValue _index;

_cfgSelect = (_cfgMapCateg >> _data);

if (_value == 1) then {_value = 0;} else {_value = 1;};
_text = if (_value == 1) then {"Cacher";} else {"Afficher";};

_displayName = getText(_cfgSelect >> "displayName");
_toolTip = format["%2 %1", _displayName, _text];

_controlList lbSetTooltip [_index, _toolTip];
_controlList lbSetValue [_index, _value];
_controlList lbSetPicture [_index, life_config_checkboxTextures select _value];

_markers = getArray(_cfgSelect >> "list");
{
	if (_value == 1) then {
		_x setMarkerAlphaLocal 1;
	} else {
		_x setMarkerAlphaLocal 0;
	};
} forEach _markers;