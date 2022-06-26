#include "..\..\script_macros.hpp"
/*
	File: fn_hideGlobal.sqf

	Autor: IronBlade
*/

if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

if (life_hide) then {
	[player,false] remoteExecCall ["TON_fnc_hideAdmin",2];
	[format ["[%1] Mode Normal]",profileName], getPlayerUID player,11] remoteExecCall ["TON_fnc_logsAdmin",2];
	life_hide = false;

	["Mode Normal"] call life_fnc_dynamicText;
} else {
	[player,true] remoteExecCall ["TON_fnc_hideAdmin",2];
	life_hide = true;

	["Mode Caché"] call life_fnc_dynamicText;

	[format ["[%1] Mode Caché]",profileName], getPlayerUID player,11] remoteExecCall ["TON_fnc_logsAdmin",2];

	[] spawn {
		while {life_hide} do {
	  		[player,true] remoteExecCall ["TON_fnc_hideAdmin",2];
	  		sleep 30;
		};
	};
};
