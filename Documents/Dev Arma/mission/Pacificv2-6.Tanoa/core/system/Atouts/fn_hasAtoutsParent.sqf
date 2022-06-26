/*
	File: fn_hasAtoutsParent.sqf

	Autor: Iron
	Date: 19 Mar 2020 23:04:55
	Version: 0.1
*/
private ["_cfg", "_has", "_class", "_childs", "_nameCfg"];
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;

_has = false;

{
	_class = _x;
	_nameCfg = configName(_class);
	_childs = getArray(_class >> "childs");

	if (_cfg == _nameCfg) then {
		{
			if ([_x] call life_fnc_hasAtouts) exitWith {
				_has = true;
			};
		} forEach _childs;
	};

	if (_has) exitWith {};
} forEach ("true" configClasses (missionConfigFile >> "AtoutsParent"));

_has;