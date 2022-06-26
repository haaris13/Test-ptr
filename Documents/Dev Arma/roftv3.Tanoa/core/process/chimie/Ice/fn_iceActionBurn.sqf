#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionBurn.sqf

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

if (_amount == 0) exitWith { hint "La fiole est vide !";};

if(_value < 10) exitWith {hint "La Température doit étre comprise entre 10°C et 130°C !";};
if(_value > 130) exitWith {hint "La Température doit étre comprise entre 10°C et 130°C !";};
if(_value <= _temp) exitWith {hint "Vous pouvez uniquement chauffer !"};

_inc = 1;
_dif = (_value - _temp);

life_iceChimie_action = true;

//
while {(_fiole select 2) != _value} do {
	_sleep = 0.9;
	switch (true) do {
		case (_dif > 100) : {_sleep = 0.1;};
		case (_dif > 90) : {_sleep = 0.2;};
		case (_dif > 70) : {_sleep = 0.3;};
		case (_dif > 50) : {_sleep = 0.4;};
		case (_dif > 25) : {_sleep = 0.5;};
		case (_dif > 10) : {_sleep = 0.6;};
		case (_dif > 9) : {_sleep = 0.7;};
		case (_dif > 8) : {_sleep = 0.8;};
		case (_dif > 7) : {_sleep = 0.9;};
		case (_dif > 6) : {_sleep = 1;};
		case (_dif > 5) : {_sleep = 1.1;};
		case (_dif > 4) : {_sleep = 1.2;};
		case (_dif > 3) : {_sleep = 1.5;};
		case (_dif > 2) : {_sleep = 1.7;};
		case (_dif >= 1) : {_sleep = 1.9;};
	};

	_temp = _temp + _inc;

	_fiole set[2, _temp];

	[_type, "temp"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;

	uiSleep _sleep;

	_dif = (_value - _temp);
};

life_iceChimie_action = false;