#include "..\..\..\script_macros.hpp"
/*
File: 
	
Author: IronBlade
    
Description:
	- Check if there is a nearby Land_Workbench_01_F
*/
private ["_Workbench","_range"];
_range = SEL(_this,0);
_Workbench = false;
{
	if (typeOf _x in ["Land_Workbench_01_F"]) then {
		_Workbench = true;
	};
}forEach (player nearObjects _range);
_Workbench;