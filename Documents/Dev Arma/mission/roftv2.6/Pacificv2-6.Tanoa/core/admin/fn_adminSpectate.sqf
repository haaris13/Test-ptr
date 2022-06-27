#include "..\..\script_macros.hpp"
/*
	File: fn_adminSpectate.sqf
	Author: ColinM9991
	
	Description:
	Spectate the chosen player.
*/
if(FETCH_CONST(life_adminlevel) < 6) exitWith {closeDialog 0;};

private["_unit"];
_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];
if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};
if(_unit == player) exitWith {["Error", localize "STR_ANOTF_Error"] spawn life_fnc_showPredefinedNotification;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

_unit switchCamera "INTERNAL";
["Accepted", format["Vous êtes en train d'observer %1. Faite F10 pour ne plus l'observer.",_unit getVariable["realname",name _unit]]] spawn life_fnc_showPredefinedNotification;
[format ["%1 Regarde %2",profileName, _unit getVariable["realname",name _unit]], getPlayerUID player,11] remoteExecCall ["TON_fnc_logsAdmin",2];

AM_Exit = (findDisplay 46) displayAddEventHandler ["KeyDown","if((_this select 1) == 68) then {(findDisplay 46) displayRemoveEventHandler ['KeyDown',AM_Exit];player switchCamera 'INTERNAL';['InfoWithSound', 'Vous n'obersez plus ce joueur'] spawn life_fnc_showPredefinedNotification;};false"];