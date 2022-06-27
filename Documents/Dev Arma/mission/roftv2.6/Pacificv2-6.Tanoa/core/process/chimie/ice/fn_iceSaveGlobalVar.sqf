#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceSaveGlobalVar.sqf

	Autor: IronBlade
*/


missionNamespace setVariable[format["ice_compo_%1", life_iceChimie_type], life_iceChimie_compo];
missionNamespace setVariable[format["ice_result_%1", life_iceChimie_type], life_iceChimie_result];
missionNamespace setVariable[format["ice_fiole_%1", life_iceChimie_type], life_iceChimie_fiole];