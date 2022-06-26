#include "..\..\script_macros.hpp"
/*
	File: fn_fuelStoreVeh.sqf

	Autor: IronBlade

*/
disableSerialization;

_control = CONTROL(71500,71502);

_index = lbCurSel _control;
_value = _control lbValue _index;

_veh = life_fuel_near select _value;

_valueMax = [_veh] call life_fnc_fluidVehGetCargoBase;

_curValue = _veh getVariable ["citerne", ["",0]];

if ((_veh distance life_fuel_pnj) > 25) exitWith {};

5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Remplissage...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.005;

while{true} do {
	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];

if(!alive player) exitWith {};
if(player != vehicle player) exitWith {};

_veh setVariable ["citerne", [life_fuel_type, _valueMax], true];

hint "Véhicule Rempli !";