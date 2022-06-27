/*
	File: fn_playerUnlockAdd.sqf

	Autor: Iron
	Date: 24 Mar 2020 15:33:03
	Version: 0.1
*/
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;
_uid_from = [_this, 1, "", [""]] call BIS_fnc_param;

if (_cfg in life_player_unLocks) exitWith {};

life_player_unLocks pushBack _cfg;
[player, _cfg, _uid_from] remoteExec ["TON_fnc_playerUnlockAdd", 2];