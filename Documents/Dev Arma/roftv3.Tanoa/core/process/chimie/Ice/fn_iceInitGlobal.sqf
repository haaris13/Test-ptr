#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceInitGlobal.sqf

	Autor: IronBlade
*/

life_iceChimie_compo = missionNamespace getVariable[format["ice_compo_%1", life_iceChimie_type], [[],[]]];
life_iceChimie_result = missionNamespace getVariable[format["ice_result_%1", life_iceChimie_type], []];

life_iceChimie_empty1 = "[0,['empty',100],20, [0,0,0,1]];";
life_iceChimie_empty2 =  "[0,['empty',100],20, [0,0,0,1]];";

life_iceChimie_fiole = missionNamespace getVariable [format["ice_fiole_%1", life_iceChimie_type], [ Chimie_Empty, Chimie_Empty]];