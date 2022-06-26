#include "..\..\script_macros.hpp"
/*
	File:fn_houseVehicleMenuValid.sqf

	Author: IronBlade
*/

disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(16200,16201);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getPos life_house_current, ["Car","Truck","Air"], 20];

_vehicle = _nearVehicles select _vehicle;

_db = _vehicle getVariable ["dbInfo",["",""]];
if !(alive _vehicle && (_db select 0) isEqualTo (getPlayerUID player)) exitWith {};

if (isNull _vehicle) exitWith {};
if (getDammage _vehicle > 0.05) exitWith {["Error", "Impossible Le véhicule est endomagé !"] spawn life_fnc_showPredefinedNotification;};

closeDialog 0;

[life_house_current, _vehicle, player] remoteExec ["TON_fnc_houseStoreVeh", 2];