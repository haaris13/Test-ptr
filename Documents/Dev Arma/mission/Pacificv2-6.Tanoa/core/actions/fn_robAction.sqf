#include "..\..\script_macros.hpp"
/*
	File: fn_robAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the robbing process?
*/
private["_target"];
_target = cursorTarget;

//Error checks
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};

if(_target GVAR ["robbed",false]) exitWith {};
[player] remoteExecCall ["life_fnc_robPerson",_target];
_target SVAR ["robbed",TRUE,TRUE];

if ((primaryWeapon _target isEqualTo "") && (secondaryWeapon _target isEqualTo "") && (handgunWeapon _target isEqualTo "")) then {
	[false,55] call life_fnc_changeRep; 
} else {
	[false,35] call life_fnc_changeRep; 
};