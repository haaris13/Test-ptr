/*
	File: fn_gouvGestionDeposeGouv.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9204);
if(_val > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > life_cash) exitWith {["Error", localize "STR_ATM_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};

if (_val > life_bank_can_depose) exitWith {
	["Error", format["Vous ne pouvez pas déposer autant, l'argent n'est pas lié a une facture, maximum autorisé: <t color='#1ABA35'>%1$</t>", life_bank_can_depose]] spawn life_fnc_showPredefinedNotification;
};

life_bank_can_depose = life_bank_can_depose - _val;
life_cash = life_cash - _val;
[player, _val, 0] remoteExec ["TON_fnc_gouvMoneyAction", 2];

["InfoWithSound", format["Vous avez déposé %1$.",[_val] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

closeDialog 0;
[0] call SOCK_fnc_updatePartial;
[14] call SOCK_fnc_updatePartial;