#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Withdraws money from the gang bank.
*/
private["_value"];
_value = parseNumber(ctrlText 2702);
_gFund = GANG_FUNDS;

if((time - life_action_delay) < 0.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

//Series of stupid checks
if(_value > 999999) exitWith {["Error", localize "STR_ATM_WithdrawMax"] spawn life_fnc_showPredefinedNotification;};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_value > _gFund) exitWith {["Error", localize "STR_ATM_NotEnoughFundsG"] spawn life_fnc_showPredefinedNotification;};
if(_val < 100 && _gFund > 20000000) exitWith {["Error", localize "STR_ATM_WithdrawMin"] spawn life_fnc_showPredefinedNotification;}; //Temp fix for something.
_unitID = getPlayerUID player;
_owner = _group getVariable["gang_owner",""];
if(_owner != _unitID) exitWith {["Error", "Vous êtes pas leader !"] spawn life_fnc_showPredefinedNotification;};
SUB(_gFund,_value);
ADD(CASH,_value);
grpPlayer setVariable ["gang_bank",_gFund,true];

[1,grpPlayer] remoteExec ["TON_fnc_updateGang",RSERV]; //Update the database.
hint format [localize "STR_ATM_WithdrawSuccessG",[_value] call life_fnc_numberText];
[life_atm_type] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
