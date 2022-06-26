#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File: fn_furnaceSound.sqf

	Autor:IronBlade
*/

while {!(isNull (findDisplay Dialog_Furnace))} do {
	playsound ["Furnace",true];
	uiSleep 6.3557;
};