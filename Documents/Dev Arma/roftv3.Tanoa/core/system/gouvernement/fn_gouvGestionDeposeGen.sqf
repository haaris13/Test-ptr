/*
	File: fn_gouvGestionDeposeGen.sqf

	Autor: IronBlade
*/
private["_val"];
_val = parseNumber(ctrlText 9206);
if(_val > 20000000) exitWith {hint "Vous ne pouvez pas transféré plus de 20.000.000$";};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_val > gouv_bank_gouv) exitWith {hint localize "STR_ATM_NotEnoughFunds"};

[player, _val, 2] remoteExec ["TON_fnc_gouvMoneyAction", 2];

hint format ["Vous avez transféré au compte en banque Police: $%1", [_val] call life_fnc_numberText];
closeDialog 0;
[0] call SOCK_fnc_updatePartial;