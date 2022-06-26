#include "..\..\script_macros.hpp"
/*
	File:fn_initSystem.sqf

	Autor:IronBlade
*/

waitUntil{!isNil "life_server_code"};

[] spawn life_fnc_initfatigue;
[] spawn life_fnc_initAtouts;
[] spawn life_fnc_mapCreateMenu;
[] spawn life_fnc_papierInit;
[] spawn life_fnc_targetTrainingInit;

player setVariable ["___wsc___", true];