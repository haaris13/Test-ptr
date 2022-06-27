#include "..\..\script_macros.hpp"
/*
	File:fn_checkDamageClient.sqf	

	Autor:IronBlade
*/
_med = [_this,0,objNull,[objNull]] call BIS_fnc_param;

[life_parts, player] remoteExecCall ["life_fnc_checkDamageReturn",_med];