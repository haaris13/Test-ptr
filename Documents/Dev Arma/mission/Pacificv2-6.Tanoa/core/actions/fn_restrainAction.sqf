#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit GVAR "restrained")) exitWith {};
//if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!

if (![false, "zipties", 1] call life_fnc_handleInv) exitWith {};

_unit setVariable ["restrained", true, true];

if (playerSide == civilian) then {
	_unit setVariable ["ziptied", true, true];
};

[player] remoteExec ["life_fnc_restrain",_unit];
//[0,"STR_NOTF_Restrained",true,[_unit GVAR["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];

_units = [];

{
 	_unite = _x;
 	
	if ((isPlayer _unite) && (player distance _unite) <= 35) then {
		_units pushBack _unite;
	};
} forEach playableUnits;

[_unit, "cuff_in"] remoteExecCall ["life_fnc_playSound3D",_units];