#include "..\..\script_macros.hpp"
/*
	File: fn_adminUnrestrain.sqf
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if(isNull _unit OR !(_unit GVAR ["restrained",FALSE])) exitWith {}; //Error check?

_unit SVAR ["restrained",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE];
_unit SVAR ["ziptied",false,true];
detach _unit;

_units = [];

{
 	_unite = _x;
 	
	if ((isPlayer _unite) && (player distance _unite) <= 35) then {
		_units pushBack _unite;
	};
} forEach playableUnits;

[_unit,"cuff_out"] remoteExecCall ["life_fnc_playSound3D",_units];