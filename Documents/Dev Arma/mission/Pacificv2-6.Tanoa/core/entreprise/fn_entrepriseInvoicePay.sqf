#include "..\..\script_macros.hpp"
/*
	File: fn_entrepriseInvoicePay.sqf

	Author: Iron
*/
if(isNil "life_entreprise_invoice_val" OR isNil "life_entreprise_invoice_ent") exitWith {};

_val = life_entreprise_invoice_val;

if (life_atmbank < _val) exitWith {
	["Warning", "La personne n'a pas l'argent nécésaire."] remoteExecCall ["life_fnc_showPredefinedNotification", life_entreprise_invoice_ent];
	["Error", "Il n'y a pas assez d'argent nécésaire sur le compte banquaire."] spawn life_fnc_showPredefinedNotification;
	life_entreprise_invoice_paid = true;
	closeDialog 0;
};

life_atmbank = life_atmbank - _val;
[1] call SOCK_fnc_updatePartial;
[_val, player] remoteExecCall ["life_fnc_entrepriseInvoicePaid", life_entreprise_invoice_ent];
life_entreprise_invoice_paid = true;
[4, _val, life_entreprise_invoice_ent] call life_fnc_TransfersMoneyLog;
["Accepted", "Facture payé."] spawn life_fnc_showPredefinedNotification;
closeDialog 0;