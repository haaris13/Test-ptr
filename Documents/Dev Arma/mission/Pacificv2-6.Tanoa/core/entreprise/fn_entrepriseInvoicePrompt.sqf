#include "..\..\script_macros.hpp"
/*
	File: fn_entrepriseInvoicePrompt.sqf
	
	Author: Iron
*/
private["_cop","_val"];
if(!isNull (findDisplay 2670)) exitWith {}; //Already at the ticket menu, block for abuse?
_people = _this select 0;
if(isNull _people) exitWith {};
_val = _this select 1;
_config = _this select 2;

createDialog "Life_entreprise_invoice_pay";
disableSerialization;
waitUntil {!isNull (findDisplay 2670)};

life_entreprise_invoice_paid = false;
life_entreprise_invoice_val = _val;
life_entreprise_invoice_ent = _people;
CONTROL(2670,2671) ctrlSetStructuredText parseText format["<t align='center'><t size='.8px'> On vous a donné une facture de $%1",_val];

[] spawn {
	disableSerialization;
	waitUntil {life_entreprise_invoice_paid OR (isNull (findDisplay 2670))};
	if(isNull (findDisplay 2670) && !life_entreprise_invoice_paid) then {

		["Warning", "La personne à refusé de payer."] remoteExecCall ["life_fnc_showPredefinedNotification", life_entreprise_invoice_ent];
	};
};