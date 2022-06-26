#include "..\..\script_macros.hpp"
/*

	File: Name Client

*/
private["_inv","_val","_var"];
params [
	["_searchUnit",objNull,[objNull]]
];
if(isNull _searchUnit) exitWith {};

_inv = [];

//Illegal items
{
	_var = configName(_x);
	_val = ITEM_VALUE(_var);
	if(_val > 0) then {
		_inv pushBack [_var,_val];
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

_items = [];
_items pushBack RIFLE;
_items pushBack PISTOL;
_items pushBack secondaryWeapon player;


if(!(EQUAL(uniform player,""))) then {
    {
    	_items pushBack _x;
    } forEach (uniformItems player);
};

if(!(EQUAL(backpack player,""))) then {
    {
        _items pushBack _x;
    } forEach (backpackItems player);
};

if(!(EQUAL(vest player,""))) then {
    {
        _items pushBack _x;
    } forEach (vestItems player);
};



_gear = [];
{
 	_is = getNumber(configFile >> "CfgWeapons" >> _x >> "type");

 	if (_is > 0) then {
 		_gear pushBack _x;
 	};
} forEach _items;



[player,_inv,_gear,ArgentSal] remoteExec ["life_fnc_returnFouille",_searchUnit];
