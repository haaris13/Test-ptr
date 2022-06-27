#include "..\..\script_macros.hpp"
/*
	File: fn_healHospital.sqf
	Author: IronBlade
	
	Description:
	Doesn't matter, will be revised later.


	treatmentAdvanced_fullHealLocal
*/
private["_upp","_ui","_progress","_pgText","_cP"];

if ((independent countSide playableUnits) > 0) exitWith {
	["Error", "Je ne prend pas mon service quand d'autres médecins sont en service !"] spawn life_fnc_showPredefinedNotification;
};

if(CASH < 100) exitWith {["Error", format[localize "STR_NOTF_HS_NoCash",100]] spawn life_fnc_showPredefinedNotification;};

titleText["Restez près de moi Merci.","PLAIN"];

_upp = "Soins en Cours";
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	
	sleep 0.17;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
};

life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(player != vehicle player) exitWith {};
if(CASH < 100) exitWith {["Error", format[localize "STR_NOTF_HS_NoCash",100]] spawn life_fnc_showPredefinedNotification;};

//[player, player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;

player setDamage 0;

titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
SUB(CASH,100);