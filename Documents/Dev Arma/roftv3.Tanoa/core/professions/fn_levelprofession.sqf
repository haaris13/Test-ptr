#include "..\..\script_macros.hpp"
/*
	File: fn_levelprofession.sqf
		
	Author: IronBlade

	Usage: 
		- ["prof_mining",10,80] call life_fnc_levelProfession; - 80% chance to increase mining picking by 10
*/
private["_prof","_profVarName","_displayName","_sideFlag","_side","_amount","_profNewLevel","_profCurrentLevel","_chance","_level","_profMaxLevel","_bonus","_dice"];
_prof = _this select 0;
_amount = _this select 1;
_chance = [_this,2,100,[0]] call BIS_fnc_param;
_subtract = [_this, 3, "", [""]] call BIS_fnc_param;
if(!isClass (missionConfigFile >> "Professions" >> _prof)) exitWith {}; //error
_level = false; 
_profMaxLevel = 1000;
_bonus = 0;

//Check for perk first
if (["professional"] call life_fnc_hasPerk && _subtract == "") then {
	_dice = random 100;
	if (_dice <= 15)  then {_bonus = 1};
	if (_dice <= 5) then {_bonus = 2};
	if (_bonus > 0) then {_amount = _amount + _bonus};
} else {
	_amount = _amount;
};

//-- Gets prof display name
_displayName = M_CONFIG(getText,"Professions",_prof,"displayName");

//-- Calculates the profession current level & variable name for setting level
_profVarName = PROFESSION_VARNAME(_prof);
_profCurrentLevel = PROFESSION_VALUE(_prof);

//-- 1000 is the max level
if (_profCurrentLevel isEqualTo _profMaxLevel && _subtract == "") exitWith {
	SVAR_MNS [_profVarName,_profMaxLevel];
	_level = false;
};

//-- Percentage calculation for skill up
if (_chance >= 100) then {					
	_level = true;
} else {	
	_percentage = floor random 100;			
	if (_percentage <= _chance) then {	
		_level = true;
	};
};

if (_subtract == "") then {
	if ((time - life_delete_time) < (2 * 60)) exitWith {_level = false;};
};

//-- If the skill needs to be leveled
if (_level) then {

	//-- Calculate & Set the new skill value
	if (_subtract != "") then {
		_profNewLevel = _profCurrentLevel;
		_profNewLevel = _profNewLevel - _amount;
		if (_profNewLevel <= 0) then {_profNewLevel = 0};
	} else {
		_profNewLevel = _profCurrentLevel;
		_profNewLevel = _profNewLevel + _amount;
		if (_profNewLevel >= _profMaxLevel) then {_profNewLevel = _profMaxLevel};
	};

	//-- Set the new level
	SVAR_MNS [_profVarName,_profNewLevel];

	//-- Ui notice
	["PROFESSION",_displayName,_profNewLevel] spawn life_fnc_eventFeed;

	// -- Update the markers
	[] call life_fnc_updateMarkers;

	//-- Reset 
	_level = false; 
};