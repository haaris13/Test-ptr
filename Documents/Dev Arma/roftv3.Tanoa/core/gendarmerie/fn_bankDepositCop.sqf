#include "..\..\script_macros.hpp"
/*
	File: fn_bankDepositCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private "_value";
_value = parseNumber(ctrlText 2704);

if((time - life_action_delay) < 0.5) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

//Series of stupid checks
if(_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_value > CASH) exitWith {hint localize "STR_ATM_NotEnoughCash"};
CASH = CASH - _value;

[player, _val] remoteExecCall ["TON_fnc_genBankDepose",2];

hint format[localize "STR_ATM_DepositMSG",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenuCop;
[6] call SOCK_fnc_updatePartial;