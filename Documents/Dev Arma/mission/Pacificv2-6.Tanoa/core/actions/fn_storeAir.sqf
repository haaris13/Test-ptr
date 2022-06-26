#include "..\..\script_macros.hpp"
/*
	File: fn_storeAir.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Stores the vehicle in the garage.
*/
private["_nearVehicles","_vehicle"];
if(vehicle player != player) then {
	_vehicle = vehicle player;
} else {
	_nearVehicles = nearestObjects[getPosATL SEL(_this ,0),["Air"],30]; //Fetch vehicles within 30m.
	if(count _nearVehicles > 0) then {
		{
			if(!isNil "_vehicle") exitWith {}; //Kill the loop.
			_vehData = _x GVAR ["vehicle_info_owners",[]];
			if(count _vehData  > 0) then {
				_vehOwner = SEL(SEL(_vehData,0),0);
				if((getPlayerUID player) == _vehOwner) exitWith {
					_vehicle = _x;
				};
			};
		} foreach _nearVehicles;
	};
};

if(isNil "_vehicle") exitWith {["Error", localize "STR_Garage_NoNPC"] spawn life_fnc_showPredefinedNotification;};
if(isNull _vehicle) exitWith {};
if (!(_vehicle isKindOf "Air")) exitWith {["Error", localize "STR_Garage_NoNPC"] spawn life_fnc_showPredefinedNotification;};

[_vehicle,false,(_this select 1)] remoteExecCall ["TON_fnc_vehicleStore",2];
life_garage_store = true;