#include "..\..\script_macros.hpp"
/*
	File: fn_surrender.sqf

	Description: Causes player to put their hands on their head.
*/
if (player getVariable ["restrained",false] ) exitWith {};
if (player getVariable ["Escorting",false] ) exitWith {};
if (vehicle player != player) exitWith {};

if(player getVariable ["playerSurrender",false]) then {
	player setVariable ["playerSurrender",nil,true];
} else {
	player setVariable ["playerSurrender",true,true];
};

if !((currentWeapon player) isEqualTo "") then {
    player action ["SwitchWeapon",player,player,100];
    uiSleep 3;
};

if (life_action_inUse) then {
	life_interrupted = true;
};

player setVariable ["tf_unable_to_use_radio", true];

while {player getVariable ["playerSurrender",false]} do {
	player playAction "The_Programmer_Surrender";
	if(!alive player || (vehicle player) != player || player getVariable ["restrained",false]) exitWith {
		player setVariable ["playerSurrender",nil,true]; 
	};

	if (!isnull (findDisplay 602)) exitWith {
		player setVariable ["playerSurrender",nil,true];
	};

	if (dialog) exitWith {
		player setVariable ["playerSurrender",nil,true];
	};

	if !((currentWeapon player) isEqualTo "") exitWith {
		player setVariable ["playerSurrender",nil,true];		
	};

	if (life_action_inUse) exitWith {
		life_interrupted = true;
		player setVariable ["playerSurrender",nil,true];
	};

	if (life_dead) exitWith {
		player setVariable ["playerSurrender",nil,true];
	};
};

player setVariable ["tf_unable_to_use_radio", false];

if (alive player && !life_dead && (vehicle player) == player) then {
	if !((currentWeapon player) isEqualTo "") then {
	    player playActionNow "default";
	} else {
	    player playAction "gesturenod";
	};
};