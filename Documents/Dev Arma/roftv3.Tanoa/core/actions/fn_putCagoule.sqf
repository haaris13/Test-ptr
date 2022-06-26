#include "..\..\script_macros.hpp"
/*
	File: fn_putCagoule.sqf


	Autor: Iron
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};

if (_unit getVariable["cagoule",false]) exitWith {};

[false,"cagoule",1] call life_fnc_handleInv;

[player] remoteExecCall ["life_fnc_putCagouleClient",_unit];