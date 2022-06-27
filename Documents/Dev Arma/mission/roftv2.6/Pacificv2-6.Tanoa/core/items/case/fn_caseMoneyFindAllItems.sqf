/*
	File:fn_caseMoneyFindAllItems.sqf

	Autor: IronBlade
*/
private ["_cases", "_type", "_isEmpty"];
_type = [_this,0,"all",[""]] call BIS_fnc_param;

_cases = [];

{
	_isEmpty = getNumber(_x >> "isEmpty");

	if (_isEmpty == 1 && _type in ["empty", "all"]) then {
		_cases pushBack configName(_x);
	};

	if (_isEmpty == 0 && _type in ["full", "all"]) then {
		_cases pushBack configName(_x);
	};
} forEach ("true" configClasses  (missionConfigFile >> "CfgCaseMoney" >> "Cases"));

_cases;