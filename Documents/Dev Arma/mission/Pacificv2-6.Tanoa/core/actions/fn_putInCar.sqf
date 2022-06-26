#include "..\..\script_macros.hpp"
/*
	File: fn_putInCar.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Finds the nearest vehicle and loads the target into the vehicle.
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if(isNull _unit OR !isPlayer _unit) exitWith {};

_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],20] select 0;
if(isNil "_nearestVehicle") exitWith {["Error", localize "STR_NOTF_VehicleNear"] spawn life_fnc_showPredefinedNotification;};

if((player distance _nearestVehicle) > 10) exitWith {["Error", localize "STR_NOTF_VehicleNear"] spawn life_fnc_showPredefinedNotification;};

detach _unit;
[_nearestVehicle] remoteExecCall ["life_fnc_moveIn",_unit];
_unit SVAR["Escorting",FALSE,TRUE];
_unit SVAR["transporting",TRUE,TRUE];