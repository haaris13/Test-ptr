#include "..\..\script_macros.hpp"
/*
	File: fn_sellGarage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells a vehicle from the garage.
*/
private["_vehicle","_vehicleLife","_vid","_pid","_unit","_sellPrice"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vehicleLife = _vehicle;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;

if((time - life_action_delay) < 5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

if(isNil "_vehicle") exitWith {["Error", localize "STR_Garage_Selection_Error"] spawn life_fnc_showPredefinedNotification;};


if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _vehicleLife)) then {
	_vehicleLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};

_sellPrice = ([_vehicle] call life_fnc_vehicleAssuranceCfg) select 1;

// 

if(!(EQUAL(typeName _sellPrice,typeName 0)) OR _sellPrice < 1) then {_sellPrice = 1000};
[_vid,_pid,_sellPrice,player,life_garage_type] remoteExecCall ["TON_fnc_vehicleDelete",RSERV];
hint format[localize "STR_Garage_SoldCar",[_sellPrice] call life_fnc_numberText];

life_atmbank = life_atmbank + _sellPrice;
closeDialog 0;