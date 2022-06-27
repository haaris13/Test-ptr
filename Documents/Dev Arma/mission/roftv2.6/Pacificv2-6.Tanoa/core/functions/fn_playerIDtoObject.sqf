#include "..\..\script_macros.hpp"

private["_uid","_ret"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
if(EQUAL(_uid,"")) exitWith {false}; //Bad UID
_ret = objNull;
{
	if(isPlayer _x && {EQUAL(getPlayerUID _x,_uid)}) exitWith {_ret = _x;};
} foreach playableUnits;

_ret;