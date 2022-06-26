#include "..\..\script_macros.hpp"
/*
	File: fn_checkxp.sqf
		
	Author: IronBlade
	    
	Description:
		- Main maths behind xp shiz
		- Checks level and related stuff based on current xp

	Notes:
		- Currently using square root curve for levelling
		- Level cap is 50
		- XP cap is 1 xp lower than the xp requirement for level 31
*/
private ["_prevLevelXP","_nextLevelXP","_curLevelXP","_return","_xpCap","_levelCap","_currentPlayerLevel"];

if (life_playerlevel < 1) then {life_playerlevel = 1}; //??
_levelCap = 50;
_k = 0.045;

//Work out current level based on XP
_currentPlayerLevel = floor(1 + _k * sqrt(life_playerxp));

//Check for level cap
if (_currentPlayerLevel >= _levelCap) then {
	life_playerlevel = _levelCap;

	_xpCap = (((_levelCap + 1) - 1) / _k) ^ 2;
	if (life_playerxp >= _xpCap) then {
		life_playerxp = _xpCap;
		life_disableXP = true;
	};
} else {
	//Set the new level
	life_playerlevel = _currentPlayerLevel;
	life_disableXP = false; 
};

//Calculate xp requirements for various levels, used to 
//display xp/level related stats
if (life_playerlevel isEqualTo 1) then {
	_prevLevelXP = 0;
	_curLevelXP = _k;
	_nextLevelXP = (life_playerlevel / _k) ^ 2;
} else {
	_prevLevelXP = (((life_playerlevel - 1) - 1) / _k) ^ 2;	
	_curLevelXP =  ((life_playerlevel - 1) / _k) ^ 2; 
	_nextLevelXP = (life_playerlevel / _k) ^ 2; 
};

//Set some life vars, useful to quickly display this info elsewhere
life_xpForNext = round(_nextLevelXP - _curLevelXP);
life_xpTowardsNext = round(life_playerxp - _curLevelXP);

// Check Tiers:

_perksToRemove = [];

{
	_perkTier = getNumber(missionConfigFile >> "CfgPerks" >> _x >> "tier");
	_perkSide = getText(missionConfigFile >> "CfgPerks" >> _x >> "side");
	_levelTier = _perkTier * 5;

	if (life_playerlevel < _levelTier && _perkSide == "civ") then {
		_perksToRemove pushBack _x;
	};

} forEach life_activePerks;

{
	life_activePerks = life_activePerks - [_x];
} forEach _perksToRemove;

if (count _perksToRemove > 0) then {
	[false] spawn life_fnc_reloadBackpack;
};

//Return stuff, might be useful later
_return = [_nextLevelXP,_prevLevelXP,_curLevelXP,_currentPlayerLevel];
_return;
