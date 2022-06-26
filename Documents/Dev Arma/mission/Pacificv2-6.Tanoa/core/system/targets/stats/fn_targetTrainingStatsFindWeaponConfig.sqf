/*
	File: fn_targetTrainingStatsFindWeaponConfig.sqf

	Autor: Iron

	minCustomAimCoef = 1;
	maxCustomAimCoef = 30;

	minRecoilCoefficient = 1;
	maxRecoilCoefficient = 5.5;
*/
private ["_weapon", "_cfg", "_cfgWeapons", "_cfgCategories", "_cfgWea", "_ctg", "_minCustomAimCoef", "_maxCustomAimCoef", "_minRecoilCoefficient", "_maxRecoilCoefficient"];
_weapon = [_this, 0, "", [""]] call BIS_fnc_param;

_cfg = (missionConfigFile >> "CfgWeaponsCategories");
_cfgWeapons = (_cfg >> "Weapons");
_cfgCategories = (_cfg >> "Categories");

_cfgWea = (_cfgWeapons >> _weapon);

if (!isClass(_cfgWea)) exitWith {
	[1, 1, 1, 1];
};

_ctg = getText(_cfgWea >> "category");

_minCustomAimCoef = getNumber(_cfgWea >> "minCustomAimCoef");
_maxCustomAimCoef = getNumber(_cfgWea >> "maxCustomAimCoef");

_minRecoilCoefficient = getNumber(_cfgWea >> "minRecoilCoefficient");
_maxRecoilCoefficient = getNumber(_cfgWea >> "maxRecoilCoefficient");

_cfgCateg = (_cfgCategories >> _ctg);

if (_minCustomAimCoef == 0) then {
	_minCustomAimCoef = getNumber(_cfgCateg >> "minCustomAimCoef");
};

if (_maxCustomAimCoef == 0) then {
	_maxCustomAimCoef = getNumber(_cfgCateg >> "maxCustomAimCoef");
};

if (_minRecoilCoefficient == 0) then {
	_minRecoilCoefficient = getNumber(_cfgCateg >> "minRecoilCoefficient");
};

if (_maxRecoilCoefficient == 0) then {
	_maxRecoilCoefficient = getNumber(_cfgCateg >> "maxRecoilCoefficient");
};

[_minCustomAimCoef, _maxCustomAimCoef, _minRecoilCoefficient, _maxRecoilCoefficient];