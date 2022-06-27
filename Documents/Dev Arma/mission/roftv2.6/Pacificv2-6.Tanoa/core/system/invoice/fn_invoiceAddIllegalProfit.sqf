/*
	File: fn_invoiceAddIllegalProfit.sqf

	Autor: Iron
*/
_vItem = [_this,0,"",[""]] call BIS_fnc_param;
_amoutPrice = [_this,1,0,[0]] call BIS_fnc_param;

life_illegal_profit = life_illegal_profit + _amoutPrice;
[15] call SOCK_fnc_updatePartial;