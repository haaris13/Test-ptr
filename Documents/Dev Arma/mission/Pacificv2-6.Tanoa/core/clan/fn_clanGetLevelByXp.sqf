#include "..\..\script_macros.hpp"
/*
	File: fn_clanGetLevelByXP.sqf
		
	Author: IronBlade
*/
_group = group player;
_clanXp = _group getVariable ["clan_xp", 0];

_level = 1;
_levelCap = 50;
_k = 0.02;

_currentPlayerLevel = floor(1 + _k * sqrt(_clanXp));

//Check for level cap
if (_currentPlayerLevel >= _levelCap) then {
	_currentPlayerLevel = _levelCap;

	_xpCap = (((_levelCap + 1) - 1) / _k) ^ 2;
	if (_clanXp >= _xpCap) then {
		_clanXp = _xpCap;
		_group setVariable ["clan_xp", _clanXp, true];
	};
};

_nextLevelXP = 0;
_curLevelXP = 0;

//Calculate xp requirements for various levels, used to 
//display xp/level related stats
if (_currentPlayerLevel isEqualTo 1) then {
	_prevLevelXP = 0;
	_curLevelXP = _k;
	_nextLevelXP = (_currentPlayerLevel / _k) ^ 2;
} else {
	_prevLevelXP = (((_currentPlayerLevel - 1) - 1) / _k) ^ 2;
	_curLevelXP =  ((_currentPlayerLevel - 1) / _k) ^ 2; 
	_nextLevelXP = (_currentPlayerLevel / _k) ^ 2; 
};

//Set some life vars, useful to quickly display this info elsewhere
_xpForNext = round(_nextLevelXP - _curLevelXP);
_xpTowardsNext = round(_clanXp - _curLevelXP);


[_currentPlayerLevel, _xpForNext, _xpTowardsNext];