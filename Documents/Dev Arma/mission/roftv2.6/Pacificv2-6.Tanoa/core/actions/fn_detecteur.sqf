#include "..\..\script_macros.hpp"
/*
	File: fn_detecteur.sqf

	Autor: Iron
*/
if (vehicle player != player) exitWith {["Warning", "Vous devez être en dehors d'un vehicule !"] spawn life_fnc_showPredefinedNotification;};

life_action_inUse = true;

while {dialog} do {
	closeDialog 0;
	sleep 0.01;
};

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Recherche de Balise...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.04;

while {true} do {
	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(dialog) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Recherche Interrompu.. ","PLAIN"]; life_action_inUse = false;};
if(player != vehicle player) exitWith {life_action_inUse = false;};

life_action_inUse = false;

waitUntil {!isNil "life_explorer_caisses"};

_explorer_wreck = objNull;

life_caisse_dist = 100000;
{
	if ((player distance _x) < life_caisse_dist && !(_x getVariable ["searched",true])) then {
		_explorer_wreck = _x;
		life_caisse_dist = (player distance _x);
	};
} forEach life_explorer_caisses;

if (_explorer_wreck isEqualTo objNull) exitWith {["Error", "Aucune balise trouvée !"] spawn life_fnc_showPredefinedNotification;};

_distance = (round(life_caisse_dist / 100) * 100);

if (_distance == 0) then {
	_distance = 100;
};

["InfoWithSound", format["Balise détécté a une distance d'environ %1m",_distance]] spawn life_fnc_showPredefinedNotification;