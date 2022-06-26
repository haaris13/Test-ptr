#include "..\..\..\script_macros.hpp"
/*
	File: fn_perkselectperk.sqf
		
	Author: IronBlade
	    
	Description:
		- 
*/
private ["_perkCfg"];
disableSerialization;
_tier = uiNamespace getVariable ["tier_filter",0];
_perkCfg = CONTROL_DATA(17024);
if (_perkCfg isEqualTo "") exitWith {};
life_activePerks pushBack _perkCfg;

if (_perkCfg == "chimiste" && (PROFESSION_VALUE("prof_chimie") == 0)) then {
	["prof_chimie",10,100] call life_fnc_levelProfession;
};

[false] spawn life_fnc_reloadBackpack;

[_tier] call life_fnc_perkFilterTier;
_displayName = M_CONFIG(getText,"CfgPerks",_perkCfg,"name");
["PERK",_displayName] spawn life_fnc_eventFeed;