#include "..\..\script_macros.hpp"
/*
	File:	fn_removeCagoule.sqf

	Autor: Iron
*/

if (!life_iseffectCagoule) exitWith {};
life_iseffectCagoule = false;

player setVariable ["cagoule",false,true];

["InfoWithSound", "On vous a retiré la cagoule!"] spawn life_fnc_showPredefinedNotification;

[] spawn {

	uiSleep 3;

	//cutText ["", "PLAIN"]; //Overlay off
	//("effectCagouleLayer" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
	//ppEffectDestroy life_effectCagoule;
};

removeGoggles player;