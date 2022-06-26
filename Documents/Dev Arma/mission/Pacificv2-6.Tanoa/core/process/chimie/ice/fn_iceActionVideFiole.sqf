#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionVideFiole.sqf

	Autor: IronBlade
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;

if (life_iceChimie_action) exitWith {diag_log "life_iceChimie_action !"; life_iceChimie_vide = false;};
life_iceChimie_action = true;
life_iceChimie_vide = true;

_modif = [];

switch (_type) do {

	case "fiole1" : {
		_modif = life_iceChimie_fiole select 0;
	};

	case "fiole2" : {
		_modif = life_iceChimie_fiole select 1;
	};
};

if ((count _modif) == 0) exitWith {};

_amount = _modif select 0;

for "_i" from _amount to 0 step -1 do {

	_modif set[0, _i];

	uiSleep 0.2;
	
	[_type, "amount"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;

	if (!life_iceChimie_vide) exitWith {};
};

if (!life_iceChimie_vide && _amount > 0) exitWith {life_iceChimie_action = false;};

switch (_type) do {

	case "fiole1" : {
		life_iceChimie_fiole set[0, Chimie_Empty];
	};

	case "fiole2" : {
		life_iceChimie_fiole set[1, Chimie_Empty];
	};
};

[_type] call life_fnc_iceUpdateFioleGlobal;


life_iceChimie_action = false;