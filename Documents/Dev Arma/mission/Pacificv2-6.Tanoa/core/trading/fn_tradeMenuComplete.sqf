#include "..\..\script_macros.hpp"
/*
	File: fn_trademenucomplete.sqf
		
	Author: IronBlade
	    
	Description:
		- 
	    
	Parameter(s):

	Usage: 
*/

private ["_completed"];
disableSerialization;
_completed = [_this,0,false,[false]] call BIS_fnc_param;

if (_completed) then {

	//Remove your traded items/money
	{[false,_x select 0,_x select 1] call life_fnc_handleInv;}forEach life_trade_yourItemOffer;
	life_cash = life_cash - life_trade_yourMoneyOffer;

	//Add recieved items/money
	{[true,_x select 0,_x select 1] call life_fnc_handleInv;}forEach life_trade_recievedItemOffer;
	life_cash = life_cash + life_trade_recievedMoneyOffer;


	[1, "You completed the trade with the player!", ["Trading", "#b2ec00"]] call life_fnc_hint;
       

} else {
	
	//Trade was cancelled
	//For this trading to work the items that you offer are temporarily removed from inventory
	//So re-add everything
	{[true,_x select 0,_x select 1] call life_fnc_handleInv;}forEach life_trade_yourItemOffer;
	[1, "The trade was cancelled!", ["Trading", "#B9401F"]] call life_fnc_hint;

};



//Reset 
life_trade_target = objNull;
life_trade_yourItemOffer = [];
life_trade_yourMoneyOffer = 0;
life_trade_recievedItemOffer = [];
life_trade_recievedMoneyOffer = 0;

life_trade_bothAccepted = false;
life_trade_offerRecieved = false;
life_trade_acceptRecieved = false;

life_trade_forceClose = true;