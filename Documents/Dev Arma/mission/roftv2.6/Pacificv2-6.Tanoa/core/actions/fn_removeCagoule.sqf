#include "..\..\script_macros.hpp"
/*
	File: fn_removeCagoule.sqf


	Autor: Iron
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};

if (!(_unit getVariable["cagoule",false])) exitWith {};

[true,"cagoule",1] call life_fnc_handleInv;

[player] remoteExecCall ["life_fnc_removeCagouleClient",_unit];