#include "..\..\..\script_macros.hpp"
/*
	File: fn_perkremoveperk.sqf
		
	Author: IronBlade
	    
	Description:
		- 
*/

private ["_activePerkCfg","_removeCost"];
disableSerialization;
_tier = uiNamespace getVariable ["tier_filter",0];
_activePerkCfg = uiNamespace getVariable ["tier_active_perk",""];
if (_activePerkCfg isEqualTo "") exitWith {};
_index = life_activePerks find _activePerkCfg;
if (_index isEqualTo -1) exitWith {"An error occured."};

_levelTier = _tier * 5;

if (_activePerkCfg == "housePlus" && (count life_houses > (LIFE_SETTINGS(getNumber,"house_limit")))) exitWith {
	["Error", "Tu as trop de maison pour faire cela !"] spawn life_fnc_showPredefinedNotification;
};

_price = life_xpForNext * 2;

if (["joint1"] call life_fnc_hasAtouts) then {
	_price = 0;
};

if (_price > life_playerxp) exitWith {
	["Error", "Vous ne disposez pas de suffisamment d'XP pour retirer cette compétences."] spawn life_fnc_showPredefinedNotification;
};

life_activePerks deleteAt _index;
[_tier] call life_fnc_perkFilterTier;

[false] spawn life_fnc_reloadBackpack;

[_price] call life_fnc_subXP;

if (["joint1"] call life_fnc_hasAtouts) then {
	["joint1"] spawn life_fnc_atoutsStop;
};

[12] call SOCK_fnc_updatePartial;

_firstTierLevel = 5;
_firstTierButtonIDC = 17001;
for "_i" from 0 to 10 do {
	if (life_playerlevel >= _firstTierLevel) then {CONTROL(17000,_firstTierButtonIDC) ctrlEnable true;} else {CONTROL(17000,_firstTierButtonIDC) ctrlEnable false};
	_firstTierButtonIDC = _firstTierButtonIDC +1;
	_firstTierLevel = _firstTierLevel + 5;
};

if (life_playerlevel < _levelTier) then {
	closeDialog 0;
	["Error", "Vous n'avez plus accès a ce Tier !"] spawn life_fnc_showPredefinedNotification;
};

if (Life_UISounds_enabled) then {
	playSound "FD_Timer_F";
};
