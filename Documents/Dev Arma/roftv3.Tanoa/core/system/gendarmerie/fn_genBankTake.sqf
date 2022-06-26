/*
	File: fn_genBankTake.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9906);
if(_val > 999999) exitWith {hint localize "STR_ATM_WithdrawMax";};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};

if((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

uiSleep (random 1);

if(_val > gouv_bank_gen) exitWith {hint localize "STR_ATM_NotEnoughFunds"};
//if (life_coplevel < 8) exitWith {hint "vous n'avez pas le niveau de compétence requis.";};
life_cash = life_cash + _val;
[player, _val, 4] remoteExec ["TON_fnc_gouvMoneyAction", 2];

hint format ["Vous avez récupéré: $%1", [_val] call life_fnc_numberText];
[0] call SOCK_fnc_updatePartial;

closeDialog 0;