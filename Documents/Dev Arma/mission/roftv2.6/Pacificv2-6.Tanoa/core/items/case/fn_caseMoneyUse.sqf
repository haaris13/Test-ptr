/*
	File:fn_caseMoneyUse.sqf

	Autor: IronBlade
*/
_itemVar = [_this,0,"",[""]] call BIS_fnc_param;

_cfgCase = (missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _itemVar);

if (!isClass(_cfgCase)) exitWith {
	diag_log "Not case";
};

_isEmpty = getNumber(_cfgCase >> "isEmpty");

if (_isEmpty == 1) exitWith {
	[_itemVar] spawn life_fnc_caseMoneyEmptyUse;
};

if (_isEmpty == 0) exitWith {
	[_itemVar] spawn life_fnc_caseMoneyFullUse;
};