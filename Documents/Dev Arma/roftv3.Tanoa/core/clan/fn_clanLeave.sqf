/*
	File: fn_clanLeave.sqf
	
	Autor:IronBlade
*/

_group = group player;

if (isnil {_group getVariable "clan_id"}) exitWith {};

_uid = getPlayerUID player;

[_uid, group player, 0] remoteExec ["TON_fnc_clanUpdatePlayer", 2];
closeDialog 0;

hint "En Cours...";

uiSleep 5;

life_group = grpNull;

[player] joinSilent (createGroup civilian);

hint "Terminé !";