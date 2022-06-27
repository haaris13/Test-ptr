#include "..\..\script_macros.hpp"
/*
	File: fn_bankDeposit.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Figure it out.
*/
private "_value";
_value = parseNumber(ctrlText 2704);

if((time - life_action_delay) < 0.3) exitWith {};
if((time - life_action_delay) < 0.8) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

if (life_atm_type == 0) exitWith {
	["Error", "Il faut aller dans une banque pour pouvoir déposer de l'argent !"] spawn life_fnc_showPredefinedNotification;
};

//Series of stupid checks

if(_value > 999999) exitWith {["Error", localize "STR_ATM_GreaterThan"] spawn life_fnc_showPredefinedNotification;};
if(_value <= 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_value > CASH) exitWith {["Error", localize "STR_ATM_NotEnoughCash"] spawn life_fnc_showPredefinedNotification;};

if (playerSide == civilian && _value > life_bank_can_depose) exitWith {
	["Error", format["Vous ne pouvez pas déposer autant, l'argent n'est pas lié a une facture, maximum autorisé: <t color='#1ABA35'>%1$</t>", life_bank_can_depose]] spawn life_fnc_showPredefinedNotification;
};

if (playerSide == civilian) then {
	life_bank_can_depose = life_bank_can_depose - _value;
};

_valueTaxe = (["atm_depot", _value] call life_fnc_gouvTaxesTake);

CASH = CASH - _value;
BANK = BANK + _valueTaxe;

["InfoWithSound", format[localize "STR_ATM_DepositMSG",[_value] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

[life_atm_type] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
[14] call SOCK_fnc_updatePartial;

if (_value == 999999) then {
	["transfertargent"] spawn life_fnc_achievementLearn;
};

[1, _valueTaxe] call life_fnc_ATMLogs;