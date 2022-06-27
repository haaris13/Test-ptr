#include "..\..\script_macros.hpp"
/*
	File: fn_houseUpgradeLbChange.sqf

	Autor: IronBlade
*/

_type = CONTROL_DATA(16101);
_price = CONTROL_VALUE(16101);

if (_price > life_atmbank) then {
	(CONTROL(16100,16102)) ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#b70000'>$%1</t>",[(_price)] call life_fnc_numberText];
	
	CONTROL(16100,16103) ctrlEnable false;
} else {
	(CONTROL(16100,16102)) ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#b2ec00'>$%1</t>",[(_price)] call life_fnc_numberText];

	CONTROL(16100,16103) ctrlEnable true;
};