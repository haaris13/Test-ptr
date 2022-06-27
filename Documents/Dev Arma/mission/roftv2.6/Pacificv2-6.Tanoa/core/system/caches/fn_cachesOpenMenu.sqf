#include "..\..\..\script_macros.hpp"
/*
	File: fn_cachesOpenMenu.sqf

	Autor: Iron
*/
diag_log "fn_cachesOpenMenu";
_cache = [_this,0,[],[[]]] call BIS_fnc_param;

life_cache_current = _cache;

if(dialog) exitWith {
	[] spawn life_fnc_cachesExitMenu;
};

_cfgCaches = (missionConfigFile >> "CfgCaches" >> "Config");
_vItemSpace = getNumber(_cfgCaches >> "vItemSpace");

createDialog "CacheMenu";
disableSerialization;

_display = findDisplay 4100;

_trunk = life_cache_current select 4;
life_cache_current_trunk = _trunk;

_cacheData = [_vItemSpace, _trunk select 1];

ctrlSetText[4104, format["Cache: %1/%2", _cacheData select 1, _cacheData select 0]];

[] spawn life_fnc_cachesMenuUpdate;

[] spawn {
	waitUntil {isNull (findDisplay 4100)};
	[] spawn life_fnc_cachesExitMenu;
};