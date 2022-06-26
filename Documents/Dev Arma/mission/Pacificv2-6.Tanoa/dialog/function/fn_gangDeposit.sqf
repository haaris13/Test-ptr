#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Deposits money into the players gang bank.
*/
private["_value"];
_value = parseNumber(ctrlText 2706);

//Series of stupid checks
if(_value > 999999) exitWith {["Error", localize "STR_ATM_GreaterThan"] spawn life_fnc_showPredefinedNotification;};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_value > BANK) exitWith {["Error", localize "STR_NOTF_NotEnoughFunds"] spawn life_fnc_showPredefinedNotification;};

SUB(BANK,_value);
_gFund = GANG_FUNDS;
ADD(_gFund,_value);
grpPlayer SVAR ["gang_bank",_gFund,true];

hint format[localize "STR_ATM_DepositGang",[_value] call life_fnc_numberText];
[life_atm_type] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial; //Silent Sync
[1,grpPlayer] remoteExecCall ["TON_fnc_updateGang",RSERV];
