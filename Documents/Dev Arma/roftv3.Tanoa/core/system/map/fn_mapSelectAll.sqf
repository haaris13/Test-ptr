/*
	File: fn_mapSelectAll.sqf

	Autor:IronBlade
*/
_value = _this select 0;

_cfgMap = (missionConfigFile >> "CfgMap");
_cfgMapCateg = (_cfgMap >> "Category");

disableSerialization;
_display = findDisplay 12;

_list = _display displayCtrl 32001;

_size = (lbSize _list) - 1;

for "_i" from 0 to _size do {
	_data = _list lbData _i;

	_cfgSelect = (_cfgMapCateg >> _data);

	_text = if (_value == 1) then {"Cacher";} else {"Afficher";};

	_displayName = getText(_cfgSelect >> "displayName");
	_toolTip = format["%2 %1", _displayName, _text];

	_list lbSetTooltip [_i, _toolTip];
	_list lbSetValue [_i, _value];
	_list lbSetPicture [_i, life_config_checkboxTextures select _value];

	_markers = getArray(_cfgSelect >> "list");
	{
		if (_value == 1) then {
			_x setMarkerAlphaLocal 1;
		} else {
			_x setMarkerAlphaLocal 0;
		};
	} forEach _markers;
};