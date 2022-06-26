#include "..\..\script_macros.hpp"
/*

	Name: fn_saveFarms

*/
if (count life_farms isEqualTo 0) exitWith {};

[getPlayerUID player, life_farms] remoteExecCall ["TON_fnc_saveCurrentFarm",RSERV];

life_farms = [];