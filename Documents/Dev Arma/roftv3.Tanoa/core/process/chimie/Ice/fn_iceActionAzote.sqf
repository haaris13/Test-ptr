#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionAzote.sqf

	Autor: IronBlade
*/

_value = [_this,0,0,[0]] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;

if (_type == "") exitWith {};

disableSerialization;

_fiole = [];

switch (_type) do {

	case "fiole1" : {
		_fiole = life_iceChimie_fiole select 0;
	};

	case "fiole2" : {
		_fiole = life_iceChimie_fiole select 1;
	};
};

_amount = _fiole select 0;
_temp = _fiole select 2;

_inc = -1;

life_iceChimie_action = true;

for "_i" from 1 to (_value * 2) do {
	uiSleep 0.2;

	_temp = _temp + _inc;

	_fiole set[2, _temp];

	[_type, "temp"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;
};

life_iceChimie_action = false;