#include "..\..\script_macros.hpp"
/*
	File: fn_houseLightAction.sqf

	Author: IronBlade
*/
private "_house";
_house = param [0,ObjNull,[ObjNull]];
if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F")) exitWith {};

if(isNull (_house GVAR ["lightSource",ObjNull])) then {
	[_house,true] remoteExecCall ["life_fnc_houseLight",RCLIENT];
} else {
	[_house,false] remoteExecCall ["life_fnc_houseLight",RCLIENT];
};