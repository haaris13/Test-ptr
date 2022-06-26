#include "..\..\script_macros.hpp"
/*
	File: fn_trademenuaccept.sqf
		
		
*/

disableSerialization;

CONTROL(13000,13030) ctrlEnable false;
CONTROL(13000,13031) ctrlEnable false;

//Update your status
_myTradeStatus = CONTROL(13000,13001);
_myTradeStatus ctrlSetStructuredText parseText format["YOUR STATUS:<t color = '#b2ec00'> ACCEPTED</t>"];

//Send your accept
if (!life_trade_acceptRecieved) then {
	[1] remoteExec ["life_fnc_tradeMenuReceiveData",life_trade_target];
		} else {
	//Partner already accepted
	life_trade_bothAccepted = true;
	closeDialog 0;
};
