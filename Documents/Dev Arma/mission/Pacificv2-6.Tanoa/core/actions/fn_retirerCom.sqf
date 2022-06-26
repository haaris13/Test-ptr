#include "..\..\script_macros.hpp"
/*
	File: fn_retirerCom.sqf

	Autor: IronBlade

*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};
["InfoWithSound", "Désactivation des balises GPS en Cours ! Ainsi que des moyens de Communications !"] spawn life_fnc_showPredefinedNotification;

sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {};
[player] remoteExec ["life_fnc_retirerComClient",_unit];