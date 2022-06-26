#include "..\..\script_macros.hpp"
/*
	File: fn_bankDeposit.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Figure it out.
*/
private "_value";
_value = parseNumber(ctrlText 2704);

if((time - life_action_delay) < 0.5) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

if (life_atm_type == 0) exitWith {
	hint "Il faut aller dans une banque pour pouvoir déposer de l'argent !";
	playSound "addItemFailed";
};

//Series of stupid checks
if(_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_value > CASH) exitWith {hint localize "STR_ATM_NotEnoughCash"};

_valueTaxe = (["atm_depot", _value] call life_fnc_gouvTaxesTake);

CASH = CASH - _value;
BANK = BANK + _valueTaxe;

hint format[localize "STR_ATM_DepositMSG",[_value] call life_fnc_numberText];
[life_atm_type] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (_value == 999999) then {
	["transfertargent"] spawn life_fnc_achievementLearn;
};

[1, _valueTaxe] call life_fnc_ATMLogs;