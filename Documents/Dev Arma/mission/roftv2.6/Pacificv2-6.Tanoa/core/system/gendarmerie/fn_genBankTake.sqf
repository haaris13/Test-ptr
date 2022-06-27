/*
	File: fn_genBankTake.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9906);
if(_val > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};

if((time - life_action_delay) < 0.2) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

uiSleep (random 1);

if(_val > gouv_bank_gen) exitWith {["Error", "Il n'y a pas autant sur le compte de la gendarmerie."] spawn life_fnc_showPredefinedNotification;};

life_cash = life_cash + _val;
[player, _val, 4] remoteExec ["TON_fnc_gouvMoneyAction", 2];

hint format ["Vous avez récupérer: $%1", [_val] call life_fnc_numberText];
[0] call SOCK_fnc_updatePartial;

closeDialog 0;