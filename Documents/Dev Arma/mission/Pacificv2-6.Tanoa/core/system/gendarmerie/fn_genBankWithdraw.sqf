#include "..\..\..\script_macros.hpp"
/*
	Bryan "Tonic" Boardwine
	
	Description:
	Withdraws money from the players account
*/
private["_val"];
_val = parseNumber(ctrlText 9903);
if(_val > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_val <= 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_val > BANK) exitWith {["Error", localize "STR_ATM_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};
if(_val < 100 && BANK > 20000000) exitWith {["Error", localize "STR_ATM_WithdrawMin"] spawn life_fnc_showPredefinedNotification;}; //Temp fix for something.

ADD(CASH,_val);
SUB(BANK,_val);
hint format [localize "STR_ATM_WithdrawSuccess",[_val] call life_fnc_numberText];
[] call life_fnc_genBankOpen;
[6] call SOCK_fnc_updatePartial;

[0,_val] call life_fnc_ATMLogs;