#include "..\..\script_macros.hpp"
/*
	File: fn_jerryBurnPlayer.sqf

	Autor:IronBlade		
*/
if (!(player getVariable ["oil",false])) exitWith {};

[] spawn
{
	sleep 0.01;

	_pos = getPosATL player;

	_eFire = "test_EmptyObjectForFireBig" createVehicle _pos;
	_eFire setPosATL _pos;

	_pos   = [_pos select 0,_pos select 1,(_pos select 2)+1];

	_eFire attachTo[player,[0,1.5,-1]];

	waitUntil {!(alive player)};

	uiSleep 8;

	[_eFire] remoteExecCall ["TON_fnc_removeBurn",2];
};