#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction2.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit getVariable ["restrained", false])) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!

_position = (_unit modelToWorld [-0.12207, -0.413086, 1.16057]);
if (((player distance _position) > 1.5) && !(_unit getVariable ["tazed", false])) exitWith {
	["Warning", "Impossible d'attraper les mains, il faut étre derrière la personne."] spawn life_fnc_showPredefinedNotification;
};

if (!([false, "zipties", 1] call life_fnc_handleInv)) exitWith {
	["Error", "Il vous faut des Sangles."] spawn life_fnc_showPredefinedNotification;
};

_unit setVariable ["restrained", true, true];

if (playerSide == civilian) then {
	_unit setVariable ["ziptied", true, true];
};

[player] remoteExec ["life_fnc_restrain2", _unit];

[_unit, "cuff_in", 35] spawn life_fnc_playSound3DNear;