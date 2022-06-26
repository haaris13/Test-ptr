#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
	    
	Description:
		- Updates the price tag
	    
	Parameter(s):

	Usage: 
*/
private["_available","_side","_list","_displayName"];
_type = CONTROL_DATA(15001);
_price = CONTROL_VALUE(15001);

if (_price > CASH) then {
	(CONTROL(15000,15002)) ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#b70000'>$%1</t>",[(_price)] call life_fnc_numberText];
} else {
	(CONTROL(15000,15002)) ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#b2ec00'>$%1</t>",[(_price)] call life_fnc_numberText];
};

CONTROL(15000,15003) ctrlEnable true;

diag_log _type;

["Licences",_type,true] spawn life_fnc_showHelp;