#include "..\..\..\script_macros.hpp"
/*
	File : fn_validNearMenu.sqf

	Autor: IronBlade
*/

disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(71500,71502);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [position life_custom_pnj,["Car","Truck","Air","Ship"],25];

_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

_db = _vehicle getVariable ["dbInfo",["",""]];

if !(alive _vehicle && (_db select 0) isEqualTo (getPlayerUID player)) exitWith {};

life_vehicle_to_custom = _vehicle;

closeDialog 0;

[] spawn life_fnc_initMenuCustom;