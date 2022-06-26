#include "..\..\script_macros.hpp"
/*
	File: fn_knockedOut.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Starts and monitors the knocked out state.
*/
private "_obj";
params [
	["_target",objNull,[objNull]],
	["_who","",[""]]
];

if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(EQUAL(_who,"")) exitWith {};
if(life_mode_admin) exitWith {};


titleText[format[localize "STR_Civ_KnockedOut",_who],"PLAIN"];
player playMoveNow "Incapacitated";

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

life_isknocked = true;
player attachTo [_obj,[0,0,0]];
sleep 15;
player playMoveNow "amovppnemstpsraswrfldnon";
detach player;
[_obj] spawn life_fnc_deleteVehicle;
life_isknocked = false;
player SVAR ["robbed",FALSE,TRUE];
