#include "..\..\script_macros.hpp"
/*
	File: fn_extracteurUse.sqf
	Author: IronBlade
	
	Description:
	Main functionality for pickaxe in mining.
*/
closeDialog 0;
private["_mine","_itemWeight","_diff","_itemName"];
_mine = "";
_val = 0;

switch (true) do {
	case (player distance (getMarkerPos "temple_fouille_1") < 30): {_mine = "templeBones"; _val = 1;};
	case (player distance (getMarkerPos "temple_fouille_2") < 10): {_mine = "templeBones"; _val = 1;};
	case (player distance (getMarkerPos "temple_fouille_3") < 10): {_mine = "templeBones"; _val = 1;};
	default {""};
};
//Mine check
if (EQUAL(_mine,"")) exitWith {};
if (vehicle player != player) exitWith {};

_profCurrentLevel = missionNamespace getVariable ["prof_contrebande", 0];

if (_profCurrentLevel < 800) exitWith {
	diag_log "not prof prof_contrebande";
};

if ([false,"extracteur",1] call life_fnc_handleInv) then {

	_pos = (position player);

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 2.5;

	["Warning", "Je ne devrai pas rester ici !"] spawn life_fnc_showPredefinedNotification;

	sleep 10;

	"HelicopterExploSmall" createVehicle _pos;

	life_reliq_charge = 10;

};

life_action_inUse = false;