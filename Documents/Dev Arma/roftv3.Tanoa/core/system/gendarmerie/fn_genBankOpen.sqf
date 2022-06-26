#include "..\..\..\script_macros.hpp"
/*
	File: fn_genBankOpen.sqf

	Autor: IronBlade
*/

private["_units","_type"];

_type = [_this,0,0,[0]] call BIS_fnc_param;

if (playerSide != west) exitWith {};

if (isNil "life_atmbank" || isNil "life_cash") exitWith {};

if(!dialog) then {
	if(!(createDialog "Life_atm_management_cop")) exitWith {};
};

disableSerialization;

//Bank 
CONTROL(9900,9901) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>",[BANK] call life_fnc_numberText];
//Cash
CONTROL(9900,9902) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>",[CASH] call life_fnc_numberText];
//Gen
CONTROL(9900,9905) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>",[gouv_bank_gen] call life_fnc_numberText];