#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceHasCombi.sqf

	Autor: IronBlade
*/

_has = false;

if (uniform player == "U_C_Driver_1_white" && vest player == "V_RebreatherB" && headgear player == "H_PilotHelmetFighter_B") then {_has = true};

_has;
