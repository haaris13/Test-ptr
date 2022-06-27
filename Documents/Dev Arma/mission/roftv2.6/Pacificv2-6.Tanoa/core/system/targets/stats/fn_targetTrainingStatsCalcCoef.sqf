/*
	File: fn_targetTrainingStatsCalcCoef.sqf

	Autor: Iron
*/
private ["_weapon", "_weaponCateg", "_config", "_minCustomAimCoef", "_maxCustomAimCoef", "_minRecoilCoefficient", "_maxRecoilCoefficient", "_stat", "_level", "_low", "_hight"];
_weapon = [_this, 0, "", [""]] call BIS_fnc_param;

_weaponCateg = [_weapon] call life_fnc_weaponFindCategory;

if (_weaponCateg == "") exitWith {
	[1,1];
};

if (["joint3"] call life_fnc_hasAtouts) exitWith {
    [1,1];
};

_config = [_weapon] call life_fnc_targetTrainingStatsFindWeaponConfig;

_minCustomAimCoef = _config select 0;
_maxCustomAimCoef = _config select 1;

_minRecoilCoefficient = _config select 2;
_maxRecoilCoefficient = _config select 3;

_stat = [_weaponCateg] call life_fnc_targetTrainingStatsFindByCategory;
_level = _stat select 2;

_low = 0;
_hight = 1000;

if (_minCustomAimCoef == 1) then {
	_minCustomAimCoef = 0.93;
};

if (_minRecoilCoefficient == 1) then {
	_minRecoilCoefficient = 0.93;
};

_resultCustomAimCoef = ((_level - _low) / (_hight - _low)) * (_minCustomAimCoef - _maxCustomAimCoef) + _maxCustomAimCoef;
_resultRecoilCoefficient = ((_level - _low) / (_hight - _low)) * (_minRecoilCoefficient - _maxRecoilCoefficient) + _maxRecoilCoefficient;

if (_resultCustomAimCoef < 1) then {
	_resultCustomAimCoef = 1;
};

if (_resultRecoilCoefficient < 1) then {
	_resultRecoilCoefficient = 1;
};

[_resultCustomAimCoef, _resultRecoilCoefficient];