#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceUpdateFioleGlobal.sqf

	Autor: IronBlade

	life_iceChimie_fiole = [amount,[type,purete],temp];
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_color = [_this,1,false,[false]] call BIS_fnc_param;

disableSerialization;

// Config
_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgFluids = (_cfgChimie >> "Fluids");


_TileProgressBar = Tile1ProgressBar;
_TileProgressBarText = Tile1ProgressBarText;
_TextTitle = TextTitle1;
_TextTitleTemp = TextTitleTemp1;

_upgrade = -1;

_fioleArray = [];

switch (_type) do {

	case "fiole1" : {
		_upgrade = 0;
		_fioleArray = (life_iceChimie_fiole select 0);
	};

	case "fiole2" : {
		_upgrade = 10;
		_fioleArray = (life_iceChimie_fiole select 1);
	};
};

if (_upgrade == -1) exitWith {};

// Get Control
_TileProgressBar = CONTROL(DialogIce, (_TileProgressBar + _upgrade));
_TileProgressBarText = CONTROL(DialogIce, (_TileProgressBarText + _upgrade));

_TextTitle = CONTROL(DialogIce, (_TextTitle + _upgrade));
_TextTitleTemp = CONTROL(DialogIce, (_TextTitleTemp + _upgrade));

// Get Params
_amountFiole = _fioleArray select 0;
_contains = _fioleArray select 1;
_fluid = _contains select 0;
_temp = _fioleArray select 2;

_displayNameFluid = getText(_cfgFluids >> _fluid >> "displayName");
_colorFluid = _fioleArray select 3;

_TileProgressBar progressSetPosition (_amountFiole / 100);
_TileProgressBarText ctrlsetstructuredtext parseText format["%1cl",_amountFiole];

_TextTitle ctrlsetstructuredtext parseText _displayNameFluid;
_TextTitleTemp ctrlsetstructuredtext parseText format["%1°C",_temp];

if (_color) then {
	_TileProgressBar ctrlSetTextColor _colorFluid;
};