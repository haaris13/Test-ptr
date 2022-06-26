#include "..\..\script_macros.hpp"
/*
	File: fn_getLevelByRessource.sqf
	Autor: IronBlade
*/
_configRessource = _this select 0;

_zoneExp = getArray (missionConfigFile >> "CfgResourceZones" >> _configRessource >> "zoneExp");
_prof = getText (missionConfigFile >> "CfgResourceZones" >> _configRessource >> "zoneProf");

if (_prof == "") exitWith {["bad", 0, 0]};
if(!isClass (missionConfigFile >> "Professions" >> _prof)) exitWith {["bad", 0, 0]}; //error

_profCurrentLevel = PROFESSION_VALUE(_prof);

_level = (_zoneExp select 0);
_chance = 10;
_niv = 1;

if (_profCurrentLevel >= _level) then {
	//_chance = (_zoneExp select 1);
};

if (_chance > 5) then {
	["gather"] call life_fnc_addXP;
} else {
	["gatherSub"] call life_fnc_addXP;
};

[_prof, _niv, _chance];