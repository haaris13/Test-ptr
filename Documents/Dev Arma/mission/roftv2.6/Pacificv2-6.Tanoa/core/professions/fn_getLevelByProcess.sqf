#include "..\..\script_macros.hpp"
/*
	File: fn_getLevelByProcess.sqf

	Autor: IronBlade
*/
private ["_configProcess", "_prof", "_profCurrentLevel", "_level"];
_configProcess = _this select 0;
_nbItem = _this select 1;

_zoneExp = getArray (missionConfigFile >> "Processing" >> _configProcess >> "zoneExp");
_prof = getText (missionConfigFile >> "Processing" >> _configProcess >> "Profession");
_factor = getNumber(missionConfigFile >> "Processing" >> _configProcess >> "Professionfactor");

if (_prof == "") exitWith {["bad", 0, 0]};
if(!isClass (missionConfigFile >> "Professions" >> _prof)) exitWith {["bad", 0, 0]}; //error

_profCurrentLevel = PROFESSION_VALUE(_prof);

_level = (_zoneExp select 0);
_niv = floor(((_factor * _nbItem) / 100) / 3.6);

_xp = floor(((_factor * _nbItem) / 100) * 13);

if (life_doubleXpProcess) then {
	_xp = _xp * 2;
};

["process", _xp] call life_fnc_addXP;

_chance = 100;
if (_profCurrentLevel >= _level) then {
	//_chance = (_zoneExp select 1);
};

[_prof, _niv, _chance];