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
	if (life_reputation > 1500) then {
		_difference = life_reputation - 1500;
		_multiplier  = life_reputation / 200; //Scaling - /200 = max 25%
		_change = (_price / 100) * _multiplier;


		_price =  _price - round(_change);
	};	
		
	/* PRICE INCREASE */
	if (life_reputation < - 1500) then {
		_difference = life_reputation + 1500;
		_multiplier = _difference / - 80;	//Scaling - /80 = +106% max
		_change = (_price / 100) * _multiplier;


		_price =  _price +  round(_change);
	};
};
_price;