#include "..\..\script_macros.hpp"
/*
	File: fn_trademenumakeoffer.sqf
		
	Author: IronBlade
	    
	Description:
		- 
	    
	Parameter(s):

	Usage: 

*/

private ["_yourMoneyOffer","_yourItemOffer"];
disableSerialization;

//You pressed make offer, sort your trade window, and send update to them
CONTROL(13000,13033) ctrlEnable false; //Move cash
CONTROL(13000,13034) ctrlEnable false; //Move item 
CONTROL(13000,13032) ctrlEnable false; //Make offer
CONTROL(13000,13035) ctrlEnable false; //Reset offer
CONTROL(13000,13022) ctrlEnable false; //Cash editbox

//Update your status
CONTROL(13000,13001) ctrlSetStructuredText parseText format["YOUR STATUS:<t color = '#E2CA00'> OFFER MADE </t>"];

//Send your offer
if (!life_trade_offerRecieved) then {
	[0,life_trade_yourMoneyOffer,life_trade_yourItemOffer,true] remoteExec ["life_fnc_tradeMenuReceiveData",life_trade_target];
		} else {
	//You already recieved a trade, so move onto accept phase
	[0,life_trade_yourMoneyOffer,life_trade_yourItemOffer,false] remoteExec ["life_fnc_tradeMenuReceiveData",life_trade_target];
	CONTROL(13000,13030) ctrlEnable true;	//Accept
	CONTROL(13000,13031) ctrlEnable true;	//Decline
};
