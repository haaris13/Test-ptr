#include "..\..\script_macros.hpp"
/*
	
	Description:
	Brings up description and shiz for selected item
*/
disableSerialization;

private ["_selected","_itemDescription","_itemName","_icon","_displayName","_description"];
_control = _this select 0;
_index = _this select 1;
_itemName = _control lbData _index;


_description = CONTROL(2100,2124);
lbClear _description;

_displayName = M_CONFIG(getText,"Licenses",_itemName,"displayName");
_itemDescription = M_CONFIG(getText,"Licenses",_itemName,"description");


_description ctrlSetStructuredText parsetext format ["
<br/>
<br/>
<t align = 'center' size = '1.5'>%1</t><br/>
<br/>
<t align = 'left' size = '1'><br/>%2 </t>",localize _displayName,_itemDescription];


["Licences",_itemName,true] spawn life_fnc_showHelp;