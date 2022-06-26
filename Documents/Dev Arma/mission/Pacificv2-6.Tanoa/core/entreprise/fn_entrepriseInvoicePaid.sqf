/*
	File:

	Autor: Iron	
*/
params [
	["_value",0,[0]],
	["_from",objNull,[objNull]]
];

if (!(_from isEqualTo life_entreprise_invoice_unit)) exitWith {diag_log "unit ?";};
if (_value <= 0) exitWith {};

["Accepted", "Payement de la facture reçu."] spawn life_fnc_showPredefinedNotification;

_pay = (["entreprise_invoice", _value] call life_fnc_gouvTaxesTake);

life_atmbank = life_atmbank + _pay;
life_newMoney = life_newMoney + _pay;
[1] call SOCK_fnc_updatePartial;

life_entreprise_invoice_unit = nil;