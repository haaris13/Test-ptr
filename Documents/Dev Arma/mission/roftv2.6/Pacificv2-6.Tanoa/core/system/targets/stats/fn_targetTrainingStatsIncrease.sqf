/*
	File: fn_targetTrainingStatsIncrease.sqf

	Autor: Iron
*/
private ["_weapon", "_value", "_weaponCateg", "_stat", "_curStat"];
_weapon = [_this, 0, "", [""]] call BIS_fnc_param;
_value = [_this, 1, 0, [0]] call BIS_fnc_param;

if (["beer"] call life_fnc_hasAtouts) then {
	_value = _value * 1.5;
};

if (["joint2"] call life_fnc_hasAtouts) then {
	_value = _value * 1.5;
};

_value = round(_value);

_weaponCateg = [_weapon] call life_fnc_weaponFindCategory;

if (_weaponCateg == "") exitWith {};

_stat = [_weaponCateg] call life_fnc_targetTrainingStatsFindByCategory;

_curStat = _stat select 2;
_curStat = _curStat + _value;

if (_curStat > 1000) then {
	_curStat = 1000;
};

_stat set[2, _curStat];

["TRAINING_SCORE","Gain Compétence: ", _curStat] spawn life_fnc_eventFeed;

[_stat] spawn life_fnc_targetTrainingStatsSave;
life_training_target_stats_calc = true;