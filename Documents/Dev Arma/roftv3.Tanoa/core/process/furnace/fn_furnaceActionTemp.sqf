#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File:fn_furnaceActionTemp.sqf

	Autor:IronBlade
*/

_value = parseNumber(ctrlText QtyEdit);

disableSerialization;

if(_value < 100) exitWith {hint "La Température doit étre comprise entre 100°C et 8000°C !";};
if(_value > 8000) exitWith {hint "La Température doit étre comprise entre 100°C et 8000°C !";};

_inc = 0;
_dif = (life_furnace_temp - _value);
if (_dif < 0) then {_dif = (_dif * -1);};
if (life_furnace_temp < _value) then {_inc = 1;} else {_inc = -1;};

_temp = CONTROL(Dialog_Furnace, TextTitleTemp1);

// Setup ID
life_furnace_idAction = round(random 10000);
_curID = life_furnace_idAction;

while {life_furnace_temp != _value && (_curID == life_furnace_idAction) && ((player distance life_furnacePnj) < 100)} do {
	_sleep = 0.9;
	switch (true) do {
		case (_dif > 7000) : {_sleep = 0.00005;};
		case (_dif > 5000) : {_sleep = 0.0001;};
		case (_dif > 3000) : {_sleep = 0.0005;};
		case (_dif > 2000) : {_sleep = 0.001;};
		case (_dif > 1000) : {_sleep = 0.002;};
		case (_dif > 500) : {_sleep = 0.004;};
		case (_dif > 250) : {_sleep = 0.004;};
		case (_dif > 100) : {_sleep = 0.008;};
		case (_dif > 50) : {_sleep = 0.01;};
		case (_dif > 25) : {_sleep = 0.04;};
		case (_dif > 10) : {_sleep = 0.1;};
		case (_dif > 5) : {_sleep = 0.2;};
		case (_dif > 0) : {_sleep = 0.5;};
	};

	life_furnace_temp = life_furnace_temp + _inc;

	_tempText = format["%1°C", life_furnace_temp];
	_temp ctrlSetStructuredText parseText _tempText;

	uiSleep _sleep;

	_dif = (life_furnace_temp - _value);
	if (_dif < 0) then {_dif = (_dif * -1);};
};