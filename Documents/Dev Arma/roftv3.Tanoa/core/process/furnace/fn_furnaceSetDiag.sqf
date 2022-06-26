#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File: fn_furnaceSetDiag.sqf

	Autor:IronBlade
*/
_config = [_this,0,[],[[]]] call BIS_fnc_param;
_tempNum = [_this,1,0,[0]] call BIS_fnc_param;

disableSerialization;

diag_log format["fn_furnaceSetDiag: %1", str(_config)];

life_furnace_config = _config;
life_furnace_temp = _tempNum;

// Init Config
_cfgFurnace = (missionConfigFile >> "CfgFurnace");
_cfgItems = (missionConfigFile >> "VirtualItems");

_furnace = CONTROL(Dialog_Furnace, TextTitle1);
_temp = CONTROL(Dialog_Furnace, TextTitleTemp1);

if (life_furnace_temp == -1) then {
	life_furnace_temp = round(random 4000);
};

_tempText = format["%1°C",life_furnace_temp];
_temp ctrlSetStructuredText parseText _tempText;

if (life_furnace_config isEqualTo []) exitWith {
	_furnace ctrlSetStructuredText parseText "";
	_furnace ctrlSetTooltip "";
};

_item = life_furnace_config select 0;
_qty = life_furnace_config select 1;

_displayName = getText(_cfgItems >> _item >> "displayName");
_icon = getText(_cfgItems >> _item >> "icon");

_toolTip = format["%1 x%2", localize _displayName, _qty];
_iconText = format["<img image = '%1' align='center' size='3.5' />", _icon];

_furnace ctrlSetStructuredText parseText _iconText;
_furnace ctrlSetTooltip _toolTip;