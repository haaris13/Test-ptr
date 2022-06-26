/*
	File: fn_playerUnlockRemove.sqf

	Autor: Iron
	Date: 24 Mar 2020 15:32:56
	Version: 0.1
*/
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;

if !(_cfg in life_player_unLocks) exitWith {};

life_player_unLocks = life_player_unLocks - [_cfg];
[player, _cfg] remoteExec ["TON_fnc_playerUnlockRemove", 2];