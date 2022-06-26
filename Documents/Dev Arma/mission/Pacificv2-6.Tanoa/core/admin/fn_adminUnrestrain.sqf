#include "..\..\script_macros.hpp"
/*
	File: fn_adminUnrestrain.sqf
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if(isNull _unit OR !(_unit GVAR ["restrained",FALSE])) exitWith {}; //Error check?

_unit SVAR ["restrained",nil,TRUE];
_unit SVAR ["Escorting",nil,TRUE];
_unit SVAR ["transporting",nil,TRUE];
_unit SVAR ["ziptied",nil,true];
detach _unit;

[_unit, "cuff_out", 35] spawn life_fnc_playSound3DNear;