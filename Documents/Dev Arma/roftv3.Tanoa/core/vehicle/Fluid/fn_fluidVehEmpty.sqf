#include "..\..\..\script_macros.hpp"
/*
	File: fn_fluidVehEmpty.sqf

	Autor: IronBlade
*/
_veh = life_fuel_curVeh;

if (life_fuel_use) exitWith {};

_citerne = (_veh getVariable ["citerne", ["",0]]);

_valueMax = [_veh] call life_fnc_fluidVehGetCargoBase;
if (_valueMax == 0) exitWith {};
_pourcent = (_citerne select 1) / _valueMax;

if ((_citerne select 1) == 0) exitWith {
	hint "Véhicule Vide !";
};

life_fuel_use = true;

disableSerialization;

_progress = CONTROL(26000, 26001);

for "_i" from (_citerne select 1) to 0 step -1 do {

	uiSleep 0.001;

	_citerne set[1, _i];

	_pourcent = (_citerne select 1) / _valueMax;

	_progress progressSetPosition _pourcent;
};

_veh setVariable ["citerne", ["",0], true];

closeDialog 0;

life_fuel_use = false;