#include "..\..\script_macros.hpp"
/*
	File: fn_atmMenuCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private["_units","_type"];

if(!dialog) then {
	if(!(createDialog "Life_atm_management_cop")) exitWith {};
};

disableSerialization;
//Bank 
CONTROL(2700,2701) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>", [life_gen_bank] call life_fnc_numberText];
//Cash
CONTROL(2700,2702) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>", [CASH] call life_fnc_numberText];