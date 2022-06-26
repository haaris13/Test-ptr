#include "..\..\script_macros.hpp"
/*
	File: fn_processinglbchange.sqf
		
	Author: IronBlade
	    
	Description:
		- Updates the price tag
	    
	Parameter(s):

	Usage: 
		
	Todo:
	- Currently only makes sense when 1 item type is being processed,
	 fix this later but not relevant for anything atm

*/

private["_amount","_itemReqArr","_itemToProcessCfg","_displayName","_price","_type"];
_type = CONTROL_DATA(16001);
_price = CONTROL_VALUE(16001);
_itemReqArr = M_CONFIG(getArray,"Processing",_type,"Required"); 
_itemToProcessCfg = _itemReqArr select 0 select 0;
_itemAmount = ITEM_VALUE(_itemToProcessCfg);
_price = _price * _itemAmount;

if (_price isEqualTo 0) then {
	(CONTROL(16000,16002)) ctrlSetStructuredText parseText format ["<t size='1' color='#b2ec00'>Gratuit (Licence)</t>"];
} else {
	if (_price > CASH) then {
		(CONTROL(16000,16002)) ctrlSetStructuredText parseText format ["<t size='1'>Coût(Total): <t color='#b70000'>$%1</t>",[(_price)] call life_fnc_numberText];
		} else {
		(CONTROL(16000,16002)) ctrlSetStructuredText parseText format ["<t size='1'>Coût(Total): <t color='#b2ec00'>$%1</t>",[(_price)] call life_fnc_numberText];
	};
};

CONTROL(16000,16003) ctrlEnable true;