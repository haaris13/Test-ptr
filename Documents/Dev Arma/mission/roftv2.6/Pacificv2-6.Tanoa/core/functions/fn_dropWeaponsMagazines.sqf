#include "..\..\script_macros.hpp"
/* ------------------------------------------------------------------------------
File: 
	
Author: Not sure, based on this - http://epochmod.com/forum/topic/35565-drop-all-your-weapons-script/


Description:
	- Drops players equipment
    
Parameter(s):

Usage: 
	
------------------------------------------------------------------------------	*/
private ["_weapons","_magazines"];
_weapons = weapons player;
_magazines = magazines player;

if (count (_weapons + _magazines) > 0) then {

	_box = createVehicle ["groundWeaponHolder", player modelToWorld [0,0.8,0], [], 0.5, "CAN_COLLIDE"];
	_box setDir floor (random 360);

	{
		_box addWeaponCargoGlobal [_x, 1];
		[_x,false] call life_fnc_handleItem;
	} forEach _weapons;

	{
		_box addMagazineCargoGlobal [_x, 1];
		[_x,false] call life_fnc_handleItem;
	} forEach _magazines;


	["<t color='#ff0000' size = '.8'>Vos armes/chargeurs ont été saisis.</t>"] call life_fnc_dynamicText;
};

