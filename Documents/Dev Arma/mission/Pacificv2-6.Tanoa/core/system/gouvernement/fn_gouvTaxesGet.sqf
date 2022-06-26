/*
	File: fn_gouvTaxesGet.sqf

	Autor: IronBlade
*/
private ["_taxes"];
_taxes = gouv_taxe_list_values;

/*
if (isNull gouv_president_obj) then {
	_taxes = gouv_taxe_list;
} else {
	_taxes = gouv_taxe_list_values;
};
*/

_taxes;