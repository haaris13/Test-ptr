#include "..\..\script_macros.hpp"
/*
	File: fn_bankWithdrawCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private["_val"];
_val = parseNumber(ctrlText 2703);
if(_val > 100000) exitWith {hint localize "STR_ATM_WithdrawMax";};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_val > life_gen_bank) exitWith {hint localize "STR_ATM_NotEnoughFunds"};

if((time - life_action_delay) < 0.5) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

[player, _val] remoteExecCall ["TON_fnc_genBankTake",2];

ADD(CASH,_val);
hint format [localize "STR_ATM_WithdrawSuccess",[_val] call life_fnc_numberText];
[] call life_fnc_atmMenuCop;
[6] call SOCK_fnc_updatePartial;