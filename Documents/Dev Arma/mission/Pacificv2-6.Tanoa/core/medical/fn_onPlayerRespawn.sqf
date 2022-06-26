#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse","_containers"];
_unit = SEL(_this,0);
_corpse = SEL(_this,1);
life_corpse = _corpse;

//Comment this code out if you want them to keep the weapon on the ground.
_containers = nearestObjects[getPosATL _corpse,["WeaponHolderSimulated"],5]; //Fetch list of containers (Simulated = weapons)
{
	[_x] spawn life_fnc_deleteVehicle;
} foreach _containers; //Delete the containers.

//Set some vars on our new body.
_unit SVAR ["restrained",false,true];
_unit SVAR ["Escorting",false,true];
_unit SVAR ["transporting",false,true]; //Again why the fuck am I setting this? Can anyone tell me?
_unit SVAR ["playerSurrender",false,true];
_unit SVAR ["steam64id",steamid,true]; //Reset the UID.
_unit SVAR ["realname",profileName,true]; //Reset the players name.

_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
//[_unit,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;} else {player enableFatigue true;};

if ((call life_adminlevel) > 1) then {
	life_actions = life_actions + [player addAction["<t color='#FF0000'>Admin Ejection</t>", life_fnc_emergencyEject, [], -9, false, true, "", "((vehicle player) != player) && !((vehicle player) isKindOf 'ParachuteBase') && life_mode_admin"]];
};