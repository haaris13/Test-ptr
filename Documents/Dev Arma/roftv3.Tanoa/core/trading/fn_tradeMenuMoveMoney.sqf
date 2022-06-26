#include "..\..\script_macros.hpp"
/*
	File: 
		
	
	    
	Description:
		- 
	    
	Parameter(s):

	Usage: 

*/

private ["_moneyToMove"];
disableSerialization;

_moneyToMove = ctrlText CONTROL(13000,13022); // edit box value for money
if(!([_moneyToMove] call TON_fnc_isnumber)) exitWith {};
_moneyToMove = parseNumber (_moneyToMove);
if (_moneyToMove > life_cash) exitWith {["Error", "Vous n'avez pas tant d'argent que ça à échanger..."] spawn life_fnc_showPredefinedNotification;};

//Set text
CONTROL(13000,13002) ctrlSetText format["$%1",[_moneyToMove] call life_fnc_numberText];
CONTROL(13000,13022) ctrlSetText "0";
life_trade_yourMoneyOffer = _moneyToMove;