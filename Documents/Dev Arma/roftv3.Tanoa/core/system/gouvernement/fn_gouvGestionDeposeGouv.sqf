/*
	File: fn_gouvGestionDeposeGouv.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9204);
if(_val > 999999) exitWith {hint localize "STR_ATM_WithdrawMax";};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_val > life_cash) exitWith {hint localize "STR_ATM_NotEnoughFunds"};

life_cash = life_cash - _val;
[player, _val, 0] remoteExec ["TON_fnc_gouvMoneyAction", 2];

hint format ["Vous avez déposer : $%1", [_val] call life_fnc_numberText];
closeDialog 0;
[0] call SOCK_fnc_updatePartial;