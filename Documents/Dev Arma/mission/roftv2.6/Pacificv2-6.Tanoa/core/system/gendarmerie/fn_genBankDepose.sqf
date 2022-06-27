/*
	File: fn_genBankDepose.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9907);
if(_val > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > life_cash) exitWith {["Error", localize "STR_ATM_NotEnoughCash"] spawn life_fnc_showPredefinedNotification;};

life_cash = life_cash - _val;
[player, _val, 3] remoteExec ["TON_fnc_gouvMoneyAction", 2];

hint format ["Vous avez transféré au compte en banque Gendarmerie: $%1", [_val] call life_fnc_numberText];
closeDialog 0;
[0] call SOCK_fnc_updatePartial;