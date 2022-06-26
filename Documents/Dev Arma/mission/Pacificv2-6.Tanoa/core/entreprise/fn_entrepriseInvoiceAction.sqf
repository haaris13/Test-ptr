/*
	File: fn_entrepriseInvoiceAction.sqf
	Author: Iron
*/
params [
	["_unit",objNull,[objNull]],
	["_config","",[""]]
];

disableSerialization;
if(!(createDialog "Life_entreprise_invoice_give")) exitWith {
	diag_log "Error Life_entreprise_invoice_give";
};

if(isNull _unit OR !isPlayer _unit) exitwith {};

ctrlSetText[2661,"Facture"];
life_entreprise_invoice_unit = _unit;
life_entreprise_invoice_config = _config;