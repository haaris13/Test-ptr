#include "..\..\script_macros.hpp"
/*
	File: fn_clanGetLevelByXP.sqf
		
	Author: IronBlade
*/
_group = group player;
_clanXp = _group getVariable ["clan_xp", 0];

_level = 1;
_levelCap = 500;
_k = 0.02;

_currentPlayerLevel = floor(1 + _k * sqrt(_clanXp));

_currentPlayerLevel;