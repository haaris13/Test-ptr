#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleAssuranceCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for vehicle weight.
*/
private["_className","_classNameLife","_insurance"];
_className = [_this,0,"",[""]] call BIS_fnc_param;
_classNameLife = _className;
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};
_insuranceBase = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,_classNameLife,"insurance");

_insurance = (["veh_assure", _insuranceBase] call life_fnc_gouvTaxesCalc);

if (playerSide == independent) then {
	_insurance = round(_insurance / 2);
};

[_insurance, _insuranceBase];