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


_description = CONTROL(2050,2024);
lbClear _description;

_icon = M_CONFIG(getText,"VirtualItems",_itemName,"icon");
_displayName = M_CONFIG(getText,"VirtualItems",_itemName,"displayName");
_itemDescription = M_CONFIG(getText,"VirtualItems",_itemName,"description");


_description ctrlSetStructuredText parsetext format ["
<br/>
<br/>
<img image = '%1' align='center' size='4.5' /> <br/>
<t align = 'center' size = '1.5'>%2</t><br/>
<br/>
<t align = 'left' size = '1'><br/>%3 </t>",_icon,localize _displayName,_itemDescription];

_display = findDisplay 2050;
_BtnDelete = _display displayCtrl 1009;

if (_itemName in (["full"] call life_fnc_caseMoneyFindAllItems)) then {
	_BtnDelete ctrlEnable false;
} else {
	_BtnDelete ctrlEnable true;
};