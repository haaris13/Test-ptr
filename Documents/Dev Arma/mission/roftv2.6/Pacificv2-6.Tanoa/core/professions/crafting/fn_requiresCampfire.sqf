#include "..\..\..\script_macros.hpp"
/*
	File: fn_requiresCampFire.sqf
		
	Author: IronBlade
	    
	Description:
		- Check if there is a nearby fire for cooking
	    
	Parameter(s):

	Usage: 
	
*/

private ["_fireNearby","_range"];
_range = SEL(_this,0);
_fireNearby = false;
{
	if (typeOf _x in ["Campfire_burning_F","Land_Campfire_F"]) then {
		_fireNearby = true;
	};
}forEach (player nearObjects _range);
_fireNearby;