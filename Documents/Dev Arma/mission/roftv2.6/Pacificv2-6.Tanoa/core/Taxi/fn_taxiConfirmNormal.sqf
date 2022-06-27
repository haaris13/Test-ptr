#include "..\..\script_macros.hpp"
/*
	File: fn_taxiConfirmNormal.sqf
	Author: IronBlade
	
	Description:
*/
closeDialog 0;
if (vehicle player != player) exitWith {["Error", "Vous devez être en dehors d'un véhicule !"] spawn life_fnc_showPredefinedNotification;};

_pos = (position player);

life_action_inUse = true;


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Transport en cours";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0;
_cpRate = 1;

while {true} do {
	sleep 3;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if (_cP >= 1) exitWith {};
	if (!(alive player)) exitWith {};
	if (player != (vehicle player)) exitWith {};
	if (dialog) exitWith {};
	if (_pos distance (position player) > 5) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
player playActionNow "stop";
life_action_inUse = false;
if (dialog) exitWith {};
if (player != vehicle player) exitWith {};
if (!(alive player)) exitWith {};
if (_pos distance (position player) > 5) exitWith {["Error", "Vous êtes trop loin !"] spawn life_fnc_showPredefinedNotification;};


if(count life_taxi_point == 0) then {
	private["_sp","_spCfg"];
	_spCfg = [playerSide] call life_fnc_taxiPointCfg;
	_sp = _spCfg select 0;
	
	player setPos (getMarkerPos (_sp select 0));
	
	titleText[format["%2 %1",_sp select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
} else {

	player setPos (getMarkerPos (life_taxi_point select 0));
	
	titleText[format["%2 %1",life_taxi_point select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
};