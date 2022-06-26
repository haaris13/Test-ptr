#include "..\..\script_macros.hpp"
/*
	File: fn_unimpound.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Yeah... Gets the vehicle from the garage.
*/
private["_vehicle","_vehicleLife","_vid","_pid","_unit","_price"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vehicleLife = _vehicle;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;

if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _vehicleLife)) then {
	_vehicleLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};

_price = switch(playerSide) do {
	case civilian: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),0)};
	case west: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),1)};
	case independent: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),2)};
	case east: {SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_vehicleLife,"storageFee"),3)};
};

if(!(EQUAL(typeName _price,typeName 0)) OR _price < 1) then {_price = 0};

_price = 0;

if(BANK < _price) exitWith {hint format[(localize "STR_Garage_CashError"),[_price] call life_fnc_numberText];};

_donator = 0;

if (playerside == west) then {
	_donator = FETCH_CONST(life_copUlevel);
} else {
	if ((FETCH_CONST(life_euLevel)) >= 1) then {
		_donator = 42;
	};
};

_bad = false;

if(EQUAL(typeName life_garage_sp,typeName [])) then {

	_spawnPoint = "";

	{
		if(count(nearestObjects[(getMarkerPos _x),["Car","Ship","Air"], 5]) == 0) exitWith {_spawnPoint = _x;};
	} foreach life_garage_sp;

	if (_spawnPoint isEqualTo "") exitWith {_bad = true;};

	[_vid, _pid, getMarkerPos _spawnPoint, _unit, _price, markerDir _spawnPoint, _donator] remoteExec ["TON_fnc_spawnVehicle",RSERV];
} else {
	if (life_garage_sp in ["onu_car_1", "onu_air_1"]) then {
		[_vid,_pid,life_garage_sp,_unit,_price, markerDir life_garage_sp, _donator] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	} else {
		[_vid,_pid,(getMarkerPos life_garage_sp),_unit,_price,markerDir life_garage_sp, _donator] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	};
};

if (_bad) exitWith {hint "Des véhicules sont présent sur la zone !";};

hint localize "STR_Garage_SpawningVeh";
SUB(BANK,_price);
closeDialog 0;