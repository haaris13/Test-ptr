#include "..\..\script_macros.hpp"
/*
	File: fn_fouille.sqf

*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};
//if (playerSide == west) exitWith {hint "Flic"};
hint localize "STR_NOTF_Searching";

sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint localize "STR_NOTF_CannotSearchPerson"};
[player] remoteExec ["life_fnc_fouilleClient",_unit];
life_action_inUse = true;