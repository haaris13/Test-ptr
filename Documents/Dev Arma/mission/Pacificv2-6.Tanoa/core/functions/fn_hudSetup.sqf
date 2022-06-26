#include "..\..\script_macros.hpp"
/*
	File: fn_hudSetup.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Setups the hud for the player?
*/

private["_alpha","_version","_p","_pg"];
disableSerialization;

// -- Don't initialize if main menu is open
if (!isNull (findDisplay 5000)) exitWith {}; 

2 cutRsc ["playerHUD","PLAIN"];
[] call life_fnc_hudUpdate;

[] spawn
{
    private["_dam"];
    for "_i" from 0 to 1 step 0 do {
        _dam = damage player;
        waitUntil {(damage player) != _dam};
        [] call life_fnc_hudUpdate;
    };
};