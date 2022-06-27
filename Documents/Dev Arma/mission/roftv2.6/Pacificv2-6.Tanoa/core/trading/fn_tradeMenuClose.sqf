#include "..\..\script_macros.hpp"
/* 
	File: fn_trademenuclose.sqf
		
	Author: IronBlade

	Description:
		- 
	    
	Parameter(s):

	Usage: 
		
*/
private ["_success"];
disableSerialization;
_success = [_this,0,false,[false]] call BIS_fnc_param;
life_trade_bothAccepted = _success;
life_trade_forceClose = false;
closeDialog 0;
