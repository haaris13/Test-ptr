/*
	File: fn_isBankChest.sqf

	Autor: Iron
	Date: 29 Mar 2020 17:20:14
	Version: 0.1
*/
private["_target", "_class"];
_target = cursorTarget;

if (isNull _target) exitWith {
	false;
};

if ((player distance _target) > 2) exitWith {
	false;
};

_class = typeOf _target;
if (!(isClass(missionConfigFile >> "BankCfg" >> "Chests" >> _class)) && !(isClass(missionConfigFile >> "BankCfg" >> "MultiChest" >> _class))) exitWith {
	false;
};

true;