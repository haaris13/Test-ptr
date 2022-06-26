/*
	File: fn_gouvGestionDeposeGen.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9206);
if(_val > 20000000) exitWith {["Accepted", "Vous ne pouvez pas transférer plus de 20.000.000$"] spawn life_fnc_showPredefinedNotification;;};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > gouv_bank_gouv) exitWith {["Error", localize "STR_ATM_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};

[player, _val, 2] remoteExec ["TON_fnc_gouvMoneyAction", 2];
["Accepted", format ["Vous avez transféré au compte en banque Gendarmerie: $%1", [_val] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
closeDialog 0;
[0] call SOCK_fnc_updatePartial;