/*
	File: fn_cachesExitMenu.sqf;

	Autor: Iron
*/
diag_log "fn_cachesExitMenu";

_cacheId = life_cache_current select 0;

[player, _cacheId] remoteExec ["TON_fnc_cachesExit", 2];

life_cache_current = nil;
life_cache_current_trunk = nil;