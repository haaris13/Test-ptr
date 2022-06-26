#include "..\..\script_macros.hpp"
/*
	File:	fn_removeCagoule.sqf

	Autor: Iron
*/

if (!life_iseffectCagoule) exitWith {};
life_iseffectCagoule = false;

player setVariable ["cagoule",false,true];

hint "La cagoule vous a été retiré !";

[] spawn {

	uiSleep 3;

	ppEffectDestroy life_effectCagoule;
};

removeGoggles player;