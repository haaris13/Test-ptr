#include "..\..\script_macros.hpp"
/*
	Bryan "Tonic" Boardwine
	
	Description:
	Withdraws money from the players account
*/
private["_val"];
_val = parseNumber(ctrlText 2703);

if((time - life_action_delay) < 0.3) exitWith {};
if((time - life_action_delay) < 0.8) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

//

if(_val > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val <= 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > BANK) exitWith {["Error", localize "STR_ATM_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};
if(_val < 100 && BANK > 20000000) exitWith {["Error", localize "STR_ATM_WithdrawMin"] spawn life_fnc_showPredefinedNotification;}; //Temp fix for something.

if (playerSide == civilian) then {
	life_bank_can_depose = life_bank_can_depose + _val;
};

ADD(CASH,_val);
SUB(BANK,_val);
["InfoWithSound", format[localize "STR_ATM_WithdrawSuccess",[_val] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

[life_atm_type] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
[14] call SOCK_fnc_updatePartial;

[0,_val] call life_fnc_ATMLogs;