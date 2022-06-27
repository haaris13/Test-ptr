#include "..\..\script_macros.hpp"
/*
	File: fn_pumpRepair.sqf
	
	Description:
	Quick simple action that is only temp.
*/
private["_method"];
if(CASH < 500) then
{
	if(BANK < 500) exitWith {_method = 0;};
	_method = 2;
}
	else
{
	_method = 1;
};

switch (_method) do
{
	case 0: {["Error", "Il vous faut $500 mais il semblerait que vous n'avez pas ce montant dans votre poche ou en banque."] spawn life_fnc_showPredefinedNotification;};
	case 1: {vehicle player setDamage 0; SUB(CASH,500); ["Accepted", "Vous avez payé les réparations et vous avez payé 500$ en cash."] spawn life_fnc_showPredefinedNotification;};
	case 2: {vehicle player setDamage 0; SUB(BANK,500); ["Accepted", "Vous avez payé les réparations et vous avez payé 500$ par virement."] spawn life_fnc_showPredefinedNotification;};
};