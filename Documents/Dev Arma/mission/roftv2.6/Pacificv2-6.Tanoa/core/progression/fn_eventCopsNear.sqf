#include "..\..\script_macros.hpp"
/*
File
	
Author: IronBlade
    
Description:
	- Adds xp nearUnits

Usage: 
	- ["delivery",50,100,"End Mission"] call life_fnc_eventCopsNear;

Notes: 
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_amount = [_this,1,0,[0]] call BIS_fnc_param;
_size = [_this,2,0,[0]] call BIS_fnc_param;
_text = [_this,3,"",[""]] call BIS_fnc_param;

[_type,_amount] call life_fnc_addXP;
["OP",_amount,_text] call life_fnc_eventFeed;

{
  _unit = _x;

	if ((isPlayer _unit) && (side _unit == west) && (player distance _unit) <= _size) then {
		[_type,_amount] remoteExecCall ["life_fnc_addxp",_unit];
		["OP",_amount,_text] remoteExecCall ["life_fnc_eventFeed",_unit];
	};

} forEach playableUnits;