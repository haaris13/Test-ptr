/*
	File: fn_gouvTaxesGet.sqf

	Autor: IronBlade
*/

_taxes = [];

if (isNull gouv_president_obj) then {
	_taxes = gouv_taxe_list;
} else {
	_taxes = gouv_taxe_list_values;
};

_taxes;