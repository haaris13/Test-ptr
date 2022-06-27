/*
	File:fn_caseMoneyEmptyUse.sqf

	Autor: IronBlade
*/
_itemVar = [_this,0,"",[""]] call BIS_fnc_param;

_cfgCase = (missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _itemVar);

if (!isClass(_cfgCase)) exitWith {
	diag_log "Not case";
};

_maxMoney = getNumber(_cfgCase >> "maxMoney");
_isEmpty = getNumber(_cfgCase >> "isEmpty");
_fullClass = getText(_cfgCase >> "fullClass");

if (_isEmpty == 0) exitWith {};
if (_maxMoney <= 0) exitWith {};
if (_fullClass == "") exitWith {};
if (!isClass(missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _fullClass)) exitWith {};

if (life_cash < _maxMoney) exitWith {
	["Error", format["Vous n'avez pas assez d'argent sur vous pour replir la malette, nécessaire: %1$.", _maxMoney]] spawn life_fnc_showPredefinedNotification;
};

uiSleep (random 0.4);

if (life_cash < _maxMoney) exitWith {
	["Error", format["Vous n'avez pas assez d'argent sur vous pour replir la malette, nécessaire: %1$.", _maxMoney]] spawn life_fnc_showPredefinedNotification;
};

if(!([false,_itemVar, 1] call life_fnc_handleInv)) exitWith {};

//Is inventory full
_diff = [_fullClass, 1, life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (_diff == 0) exitWith {
	["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
	[true,_itemVar,1] call life_fnc_handleInv;
};

life_cash = life_cash - _maxMoney;
[0] call SOCK_fnc_updatePartial;

[true,_fullClass,1] call life_fnc_handleInv;

[3] call SOCK_fnc_updatePartial;

[player, _fullClass, 0, _maxMoney] remoteExecCall ["TON_fnc_insertCaseMoneyLog",2];

["Accepted", "Argent stocké."] spawn life_fnc_showPredefinedNotification;
[] call life_fnc_p_updateMenu;