/*
	File: fn_entrepriseInvoiceGive.sqf

	Author: Iron
*/
private["_val"];

if (isNil {life_entreprise_invoice_unit}) exitWith {closeDialog 0;};
if (isNull life_entreprise_invoice_unit) exitWith {closeDialog 0;};

_val = ctrlText 2662;

if(!([_val] call TON_fnc_isnumber)) exitWith {["Error", "Nombre uniquement."] spawn life_fnc_showPredefinedNotification;};
if((parseNumber _val) > 1000000) exitWith {["Error", "1000000$ maximum."] spawn life_fnc_showPredefinedNotification;};
if((parseNumber _val) <= 0) exitWith {["Error", "1$ minimum."] spawn life_fnc_showPredefinedNotification;};

[player,(parseNumber _val), life_entreprise_invoice_config] remoteExec ["life_fnc_entrepriseInvoicePrompt", life_entreprise_invoice_unit];
closeDialog 0;