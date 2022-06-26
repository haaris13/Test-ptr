#include "..\..\script_macros.hpp"
/*
	File: fn_placeTente.sqf

	Autor: IronBlade

	Class: "Land_TentA_F", Land_TentDome_F
*/
_item = [_this,0,"",[""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};

_class = switch (_item) do { 
	case "" : {"Land_TentA_F"}; 
	case "" : {"Land_TentDome_F"}; 
	default {"Land_TentDome_F"}; 
};

[false,_item,1] call life_fnc_handleInv;

[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 2.5;

[_class,player] remoteExecCall ["TON_fnc_createTente",-2];