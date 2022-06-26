#include "..\..\script_macros.hpp"
/*
	File
		
	Author: IronBlade
	    
	Description:
		- Adds xp 

	Usage: 
		- ["delivery"] call life_fnc_addXP;

	Notes: 
		TODO - possible
		Heists - safe, processing etc
		Heal
		Gamble
		Patrolling
*/
private ["_oldLevel","_type","_typeName","_amount","_xp","_nextLevelXP","_prevLevelXP","_curLevelXP","_curLevel"];

_type = [_this,0,"",[""]] call BIS_fnc_param;
_amount = [_this,1,0,[0]] call BIS_fnc_param;
_oldLevel = life_playerlevel;

if (_amount isEqualTo 0) then {
	switch (_type) do {
		case "custom" : {};
		case "gather" : {_amount = 100};
		case "mine" : {_amount = 140};
		
		case "fishing" : {_amount = 80};
		case "handfishing" : {_amount = 5};
		case "treasure" : {_amount = 2500};
		case "turtle" : {_amount = 70};
		case "process" : {_amount = 400};
		case "delivery" : {_amount = 1100};
		case "repair" : {_amount = 50};
		case "chop" : {_amount = 80};
		case "lockpick" : {_amount = 100};
		case "lockpickfailed" : {_amount = 20};
		case "hideout" : {_amount = 10};
		case "hideoutBig" : {_amount = 20};

		case "repairnonciv" : {_amount = 20}; //Mechanics, medics, cops etc
	
		case "revive" : {_amount = 150};

		case "impound" : {_amount = 60};
		case "scrap" : {_amount = 90};
		case "arrest" : {_amount = 80};
		case "escjail" : {_amount = 100};
		case "stayjail" : {_amount = 200};
		case "paycheck" : {_amount = 400};
		case "tacos" : {_amount = 1000};
		default {_amount = 10};
	};
};

//Add XP
_hasPerk = ["fastlearner"] call life_fnc_hasPerk;
if (_hasPerk) then {
	_amount = ceil(_amount * 1.1);
};

_hasPerk = ["fastlearnerCop"] call life_fnc_hasPerk;
if (_hasPerk) then {
	_amount = ceil(_amount * 1.1);
};

_hasPerk = ["fastlearnerV2"] call life_fnc_hasPerk;
if (_hasPerk) then {
	_amount = ceil(_amount * 1.1);
};

if (["tacos"] call life_fnc_hasAtouts) then {
	_amount = ceil(_amount * 2);
};
if (["tacosp"] call life_fnc_hasAtouts) then {
	_amount = ceil(_amount * 2);
};

_normalXP = _amount;
_amount = [_amount, 1] call life_fnc_clanCheckTaxe;

if (life_disableXP) exitWith {
	if (_amount != _normalXP) then {
		["XPCLAN","", (_normalXP - _amount)] spawn life_fnc_eventFeed;
	};
};

life_playerxp = life_playerxp + _amount; 

//Calculate new XP/Level
_xp = [] call life_fnc_checkXP;

//UI messages
if (life_playerlevel > _oldLevel) then {
	["LEVEL","",life_playerlevel] spawn life_fnc_eventFeed;
	if (life_playerlevel in [5,10,15,20,25,30,35,40,45,50,55,60,65,70]) then {
		[format["level%1",life_playerlevel]] spawn life_fnc_achievementLearn;
		["PERKSLOTUNLOCK","",0] spawn life_fnc_eventFeed;
	};
} else {
	if (life_playerlevel < 70) then {
		["XP","",_amount] spawn life_fnc_eventFeed;

		if (_amount != _normalXP) then {
			["XPCLAN","", (_normalXP - _amount)] spawn life_fnc_eventFeed;
		};
	};
};