#include "..\..\script_macros.hpp"
/*
	File: fn_fouille.sqf

*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};

_position = (_unit modelToWorld [-0.12207, -0.413086, 1.16057]);

if ((player distance _position) > 1.5) exitWith {
	["Warning", "Impossible de fouiller, il faut étre derrière la personne."] spawn life_fnc_showPredefinedNotification;
};

//if (playerSide == west) exitWith {["Error", "Vous ne pouvez pas fouiller en tant que Gendarme !"] spawn life_fnc_showPredefinedNotification;};
["Info", localize "STR_NOTF_Searching"] spawn life_fnc_showPredefinedNotification;
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {["Error", localize "STR_NOTF_CannotSearchPerson"] spawn life_fnc_showPredefinedNotification;};
[player] remoteExec ["life_fnc_fouilleClient",_unit];
life_action_inUse = true;