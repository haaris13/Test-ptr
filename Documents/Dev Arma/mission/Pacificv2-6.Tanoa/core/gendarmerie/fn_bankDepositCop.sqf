#include "..\..\script_macros.hpp"
/*
	File: fn_bankDepositCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private "_value";
_value = parseNumber(ctrlText 2704);

if((time - life_action_delay) < 0.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

//Series of stupid checks
if(_value > 999999) exitWith {["Error", localize "STR_ATM_GreaterThan"] spawn life_fnc_showPredefinedNotification;};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_value > CASH) exitWith {["Error", localize "STR_ATM_NotEnoughCash"] spawn life_fnc_showPredefinedNotification;};
CASH = CASH - _value;

[player, _val] remoteExecCall ["TON_fnc_genBankDepose",2];

["Accepted", format[localize "STR_ATM_DepositMSG", [_value] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
[] call life_fnc_atmMenuCop;
[6] call SOCK_fnc_updatePartial;