/*
	File: fn_tortureVictimPlace.sqf

	Autor: IronBlade
*/
_victim = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;

if (isNull _victim) exitWith {};
if (player distance _victim > 10) exitWith {};

[player] remoteExec ["life_fnc_tortureVictimPlaceClient", _victim];