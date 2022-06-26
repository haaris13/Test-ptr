#include "..\..\script_macros.hpp"
/* 
	File: fn_changerep.sqf
		
	Author: IronBlade
	    
	Description: Changes rep for player by given amount
		- 
	    
	Parameter(s):

	Usage: [true,200] call life_fnc_changeRep;
	- Increased rep by 200

	Usage: 
	[true,400] remoteExecCall ["life_fnc_changeRep",target]; 
	- Remote executes the rep gain on another client 

	Notes: 

	This needs to affect the following prices:
	- Weapon shop
	- Clothing shops
	- Vehicle shops

*/

private["_type","_changeValue"];

_type = [_this,0,false,[false]] call BIS_fnc_param;
_changeValue = [_this,1,0,[0]] call BIS_fnc_param;

if (life_mode_admin) exitWith {};

["Action","Reputation",false] spawn life_fnc_showHelp;

if (_type) then 
{	

	_hasPerk = ["respectable"] call life_fnc_hasPerk;
	if (_hasPerk) then {
		_changeValue = ceil(_changeValue * 1.1);
	};

	life_reputation = life_reputation + _changeValue;
} else {
	if (["Insouciant"]call life_fnc_hasPerk) then {
		_changeValue = round(_changeValue* 0.85);
	}; 	
	life_reputation = life_reputation - _changeValue;
};

//Cap at +/- 5000
if (life_reputation < -10000) then {life_reputation = -10000};
if (life_reputation > 5000) then {life_reputation = 5000};