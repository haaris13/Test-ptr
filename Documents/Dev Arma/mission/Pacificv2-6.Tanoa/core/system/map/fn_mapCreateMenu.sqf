/*
	File: fn_mapCreateMenu.sqf

	Autor:IronBlade
*/

_side = switch (playerSide) do { 
	case west : {"cop";}; 
	case civilian : {"civ";}; 
	case independent : {"med"};  
};

_cfgMap = (missionConfigFile >> "CfgMap");
_cfgMapCateg = (_cfgMap >> "Category");

life_config_checkboxTextures = [
	tolower gettext (configfile >> "RscCheckBox" >> "textureUnchecked"),
	tolower gettext (configfile >> "RscCheckBox" >> "textureChecked")
];

disableSerialization;
_display = findDisplay 12;

_controlBack = _display ctrlCreate ["RscText", -1];
_controlBack ctrlSetPosition [0.005 * safezoneW + safezoneX, 0.665 * safezoneH + safezoneY, 0.103125 * safezoneW , 0.044 * safezoneH];
_controlBack ctrlSetBackgroundColor [0.13,0.54,0.21,0.6];
_controlBack ctrlCommit 0;

_controlTextTitle = _display ctrlCreate ["RscStructuredText", -1];
_controlTextTitle ctrlSetPosition [0.0101562 * safezoneW + safezoneX, 0.676 * safezoneH + safezoneY, 0.0928125 * safezoneW, 0.022 * safezoneH];
_controlTextTitle ctrlCommit 0;
_controlTextTitle ctrlSetStructuredText parseText format ["<t align='center' >Gestion Markers</t>"];

_controlButtonAll = _display ctrlCreate ["RscButtonMenu", -1];
_controlButtonAll ctrlSetPosition [0.005 * safezoneW + safezoneX, 0.7288 * safezoneH + safezoneY, 0.0495 * safezoneW, 0.0242 * safezoneH];
_controlButtonAll ctrlSetBackgroundColor [-1,-1,-1,0.8];
_controlButtonAll ctrlCommit 0;
_controlButtonAll ctrlSetStructuredText parseText format ["<t align='center' >Tous</t>"];
_controlButtonAll buttonSetAction "[1] spawn life_fnc_mapSelectAll;";

_controlButtonHide = _display ctrlCreate ["RscButtonMenu", -1];
_controlButtonHide ctrlSetPosition [0.058625 * safezoneW + safezoneX, 0.7288 * safezoneH + safezoneY, 0.0495 * safezoneW, 0.0242 * safezoneH];
_controlButtonHide ctrlSetBackgroundColor [-1,-1,-1,0.8];
_controlButtonHide ctrlCommit 0;
_controlButtonHide ctrlSetStructuredText parseText format ["<t align='center' >Aucun</t>"];
_controlButtonHide buttonSetAction "[0] spawn life_fnc_mapSelectAll;";

_controlBack = _display ctrlCreate ["RscText", -1];
_controlBack ctrlSetPosition [0.005 * safezoneW + safezoneX, 0.7552 * safezoneH + safezoneY, 0.103125 * safezoneW, 0.242 * safezoneH];
_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
_controlBack ctrlCommit 0;

_controlList = _display ctrlCreate ["RscListBox", 32001];
_controlList ctrlSetPosition [0.00809372 * safezoneW + safezoneX, 0.7618 * safezoneH + safezoneY, 0.0969375 * safezoneW, 0.231 * safezoneH];
_controlList ctrlCommit 0;

_controlList ctrlSetEventHandler ["LBSelChanged","_this call life_fnc_mapUpdate;"];

_allConfig = ("true" configClasses (_cfgMapCateg));

{
	_cfg = _x;

	_displayName = getText(_cfg >> "displayName");
	_var = configName _cfg;
	_sides = getArray(_cfg >> "sides");
	_markers = getArray(_cfg >> "list");

	if (_side in _sides) then {
		_index = _controlList lbAdd _displayName;

		_toolTip = format["Cacher %1", _displayName];

		_controlList lbsettooltip [_index, _toolTip];
		_controlList lbSetPicture [_index, life_config_checkboxTextures select 1];
		_controlList lbSetPictureColor [_index, [1,1,1,1]];
		_controlList lbSetValue [_index, 1];
		_controlList lbSetData [_index, _var];

		{
		  _x setMarkerAlphaLocal 1;
		} forEach _markers;

	} else {
		{
		  _x setMarkerAlphaLocal 0;
		} forEach _markers;
	};
} forEach _allConfig;