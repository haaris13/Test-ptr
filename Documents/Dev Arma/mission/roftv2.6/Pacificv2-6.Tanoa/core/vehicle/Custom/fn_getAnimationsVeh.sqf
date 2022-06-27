#include "..\..\..\script_macros.hpp"
/*
	File: fn_getAnimationsVeh.sqf

	Autor:IronBlade
*/
_veh = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _veh) exitWith {};

_animationNames = animationNames _veh;

_anims = [];

{
	_p = _veh animationPhase _x;
	_anims pushBack [_x, _p];
} forEach _animationNames;

_anims;