#include "..\..\script_macros.hpp"
/*
	File: fn_monterCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Blah
*/
private["_pos"];
(SEL(_this,3)) params [
	["_pos","",[""]]
];

disableSerialization;

if (_pos == "bas") then {
	player setPos [5846.907, 10660.614, 40.469];
	player setDir 358.768;
} else {
	player setPos [5838.651, 10685.028, 0.186];
	player setDir 266.534;
}


// BAS Pos : [5838.651, 10685.028, 0.186]