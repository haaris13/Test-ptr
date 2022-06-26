/*
	File: fn_playerUnlockReceive.sqf

	Autor: Iron
	Date: 24 Mar 2020 15:21:52
	Version: 0.1
*/
diag_log "fn_playerUnlockReceive";
_unlocks = [_this, 0, [], [[]]] call BIS_fnc_param;
life_player_unLocks = [];

{
	_id = _x select 0;
	_cfg = _x select 1;
	
	life_player_unLocks pushBack _cfg;
} forEach _unlocks;