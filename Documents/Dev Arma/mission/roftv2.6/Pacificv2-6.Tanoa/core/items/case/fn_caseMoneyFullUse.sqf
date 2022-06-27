/*
	File:fn_caseMoneyFullUse.sqf

	Autor: IronBlade
*/
_itemVar = [_this,0,"",[""]] call BIS_fnc_param;

_cfgCase = (missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _itemVar);

if (!isClass(_cfgCase)) exitWith {
	diag_log "Not case";
};

_maxMoney = getNumber(_cfgCase >> "maxMoney");
_isEmpty = getNumber(_cfgCase >> "isEmpty");
_emptyClass = getText(_cfgCase >> "emptyClass");

if (_isEmpty == 1) exitWith {};
if (_maxMoney <= 0) exitWith {};
if (_emptyClass == "") exitWith {};
if (!isClass(missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _emptyClass)) exitWith {};

if(!([false,_itemVar, 1] call life_fnc_handleInv)) exitWith {};

//Is inventory full
_diff = [_emptyClass, 1, life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (_diff == 0) exitWith {
	["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
	[true,_itemVar,1] call life_fnc_handleInv;
};

life_cash = life_cash + _maxMoney;
[0] call SOCK_fnc_updatePartial;

[true,_emptyClass,1] call life_fnc_handleInv;

[3] call SOCK_fnc_updatePartial;

[player, _itemVar, 1, _maxMoney] remoteExecCall ["TON_fnc_insertCaseMoneyLog",2];

["Accepted", "Argent retiré."] spawn life_fnc_showPredefinedNotification;
[] call life_fnc_p_updateMenu;