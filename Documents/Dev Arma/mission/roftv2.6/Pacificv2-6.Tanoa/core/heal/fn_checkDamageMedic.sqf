#include "..\..\script_macros.hpp"
/*
	File:fn_checkDamageMedic.sqf	

	Autor:IronBlade
*/

if (isNull life_mode_medic_civ) exitWith {};

["Info", "Analyse des blessures en cours..."] spawn life_fnc_showPredefinedNotification;

sleep 5;

[player] remoteExec ["life_fnc_checkDamageClient",life_mode_medic_civ];