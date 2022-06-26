#include "..\..\script_macros.hpp"
/*
	File: fn_adminRegisterVehicle.sqf
*/
private["_vehicle","_data"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

if (!((_vehicle isKindOf "Car") OR (_vehicle isKindOf "Air") OR (_vehicle isKindOf "Ship"))) then {
	_vehicle setVariable ["info_life", 12548, true];
};