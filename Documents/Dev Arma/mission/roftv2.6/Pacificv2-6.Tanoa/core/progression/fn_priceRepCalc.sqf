#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
	    
	Description: 
		- Calculate new price of an item based on reputation
		- You need a minimum of +/- 1500 rep for this to have an effect
	    
*/
private["_price","_rate","_change","_difference","_multiplier"];

_price = [_this,0,0,[0]] call BIS_fnc_param;

if (playerSide isEqualTo civilian) then {
	/* PRICE DECREASE */
	if (life_reputation > 0) then {
		_multiplier = (life_reputation / 5000) * 0.2;

		_price = floor(_price - (_price * _multiplier));
	};	
		
	/* PRICE INCREASE */
	if (life_reputation < 0) then {
		_multiplier = (life_reputation / -10000) * 0.4;


		_price =  floor(_price + (_price * _multiplier));
	};
};
_price;