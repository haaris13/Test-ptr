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
if(EQUAL(_mine,"")) exitWith {};
if(vehicle player != player) exitWith {};

if([false,"extracteur",1] call life_fnc_handleInv) then {

	_pos = (position player);

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 2.5;

	hint "Je ne devrai pas rester ici !";

	sleep 10;

	"HelicopterExploSmall" createVehicle _pos;

	life_reliq_charge = 10;

};

life_action_inUse = false;