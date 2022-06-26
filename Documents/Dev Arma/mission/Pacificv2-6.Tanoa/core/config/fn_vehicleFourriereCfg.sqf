#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleFourriereCfg.sqf
	Author: Iron
*/
private["_className","_classNameLife","_fourriere"];
_className = [_this,0,"",[""]] call BIS_fnc_param;
_classNameLife = _className;
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};
_fourriereBase = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,_classNameLife,"insurance");

_fourriere = (["veh_fourriere", _fourriereBase] call life_fnc_gouvTaxesCalc);

if (playerSide == independent) then {
	_fourriere = round(_fourriere / 2);
};

[_fourriere, _fourriereBase];