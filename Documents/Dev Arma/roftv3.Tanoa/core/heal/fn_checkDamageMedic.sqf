#include "..\..\script_macros.hpp"
/*
	File:fn_checkDamageMedic.sqf	

	Autor:IronBlade
*/

if (isNull life_mode_medic_civ) exitWith {};

hint "Analyse des blessures en cours...";

sleep 5;

[player] remoteExec ["life_fnc_checkDamageClient",life_mode_medic_civ];