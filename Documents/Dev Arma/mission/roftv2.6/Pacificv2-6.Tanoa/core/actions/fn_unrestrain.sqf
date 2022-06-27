#include "..\..\script_macros.hpp"
/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = param [0, ObjNull, [ObjNull]];
if (isNull _unit OR !(_unit getVariable ["restrained", false])) exitWith {}; //Error check?

_unit setVariable ["restrained",nil,true];
_unit setVariable ["Escorting",nil,true];
_unit setVariable ["transporting",nil,true];
_unit setVariable ["ziptied",nil,true];
detach _unit;

[_unit, "cuff_out", 35] spawn life_fnc_playSound3DNear;