/*
	File: fn_atoutsStop.sqf

	Autor: Iron
	Date: 10 Mar 2020 21:13:15
	Version: 0.1
*/
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;
_noNext = [_this, 1, false, [false]] call BIS_fnc_param;

[player, _cfg, _noNext] remoteExec ["TON_fnc_atoutsStop", 2];