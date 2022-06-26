#include "..\..\script_macros.hpp"
/*
	File: fn_bankWithdrawCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.



	--- !!! !!! NOT USED !!! !!! --- 
*/
private["_val"];
_val = parseNumber(ctrlText 2703);
if(_val > 100000) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > life_gen_bank) exitWith {["Error", localize "STR_ATM_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};

if((time - life_action_delay) < 0.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

[player, _val] remoteExecCall ["TON_fnc_genBankTake",2];

ADD(CASH,_val);
hint format [localize "STR_ATM_WithdrawSuccess",[_val] call life_fnc_numberText];
[] call life_fnc_atmMenuCop;
[6] call SOCK_fnc_updatePartial;