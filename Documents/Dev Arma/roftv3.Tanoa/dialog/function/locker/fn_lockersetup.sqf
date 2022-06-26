#include "..\..\..\script_macros.hpp"
/*
	File: fn_lockersetup.sqf
		
	Author: IronBlade
	    
	Description:
		- Steup your locker

*/

private ["_side"];
//Checks
if !(life_storage isEqualTo []) exitWith {};

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_type = -1;

switch(playerSide) do {
	case west:{_type = 0;};
	case independent:{_type = 1;};
	case civilian:{
		if (gouv_president_uid isEqualTo (getPlayerUID player)) then {
			_type = 3;
		};
		if ((call(life_euLevel)) >= 1) then {
			_type = 2;
		};
	};
};

if (_type == -1) exitWith {};

[getPlayerUID player, _side, _type] remoteExec ["TON_fnc_insertStorage",2];
life_storage = [getPlayerUID player,_side,[],[],0];

hint "Locker Mise en place..";