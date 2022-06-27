/*
	File: fn_clanVehicleTakeMenuOpen.sqf
	
	Autor:IronBlade
*/
_house = [_this, 0, objNull ,[objNull]] call BIS_fnc_param;

[player, _house] remoteExec ["TON_fnc_clanGetVehicles", 2];