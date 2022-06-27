#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private["_vault","_handle"];
_veh = param [0,ObjNull,[ObjNull]];

if((FETCH_CONST(life_coplevel) < 7) && !license_cop_cPigt) exitWith {["Error", "Vous n'avez pas le grade nécessaire."] spawn life_fnc_showPredefinedNotification;};

if(isNull _veh) exitWith {}; //Bad object
if (!(_veh isKindOf "Car" OR _veh isKindOf "Air" OR _veh isKindOf "Ship")) exitWith {};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?


_vehicleData = _veh getVariable ["vehicle_info_owners",[]];
//if(EQUAL((count _vehicleData),0)) exitWith {deleteVehicle _veh}; //Bad vehicle.
_vehicleName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _veh),"displayName");
_veh setVariable ["assure", 0, true];

["Warning", "Attention cela va exploser !"] spawn life_fnc_showPredefinedNotification;

uiSleep 25;

_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL _veh select 0, getPosATL _veh select 1, (getPosATL _veh select 2) + 0.5];
_veh setDamage 1;

[0,"STR_NOTF_HasDetruit",true,[profileName,SEL(SEL(_vehicleData,0),1),_vehicleName]] remoteExecCall ["life_fnc_broadcast", RCLIENT];