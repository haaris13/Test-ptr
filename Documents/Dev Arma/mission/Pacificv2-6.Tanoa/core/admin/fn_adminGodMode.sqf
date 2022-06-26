#include "..\..\script_macros.hpp"
/*
	File: fn_adminGodMode.sqf
	Author: Tobias 'Xetoxyc' Sittenauer
 
	Description: Enables God mode for Admin
*/

if(FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};
 
if(life_god) then {
	life_god = false;
	titleText ["God mode disabled","PLAIN"]; titleFadeOut 2;
	player allowDamage true;

	[format ["%1 God mode disabled",profileName], getPlayerUID player,9] remoteExecCall ["TON_fnc_logsAdmin",2];

} else {
	life_god = true;
	titleText ["God mode enabled","PLAIN"]; titleFadeOut 2;

	[format ["%1 God mode enabled",profileName], getPlayerUID player,9] remoteExecCall ["TON_fnc_logsAdmin",2];

	player allowDamage false;
};

[] spawn {
	while {life_god} do {
		["GOD MODE     <t color='#ff0000'>[ON]</t>"] call life_fnc_dynamicText;
		sleep (2*60);
	};
};