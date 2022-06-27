#include "..\..\script_macros.hpp"
/*
	File: fn_playerParamsReceived.sqf
	Author: IronBlade
*/

if(isNil "_this") exitWith {};

// NB Share
life_current_nb_share = parseNumber (_this select 1);
//life_nb_supress = parseNumber (_this select 2);