#include "..\..\..\script_macros.hpp"
/*
	File: fn_levelSkill.sqf
		
	Author: IronBlade
	    
	Description:
*/

private ["_displayName","_description","_icon"];
disableSerialization;
_perkCfg = CONTROL_DATA(17024);
_displayName = M_CONFIG(getText,"CfgPerks",_perkCfg,"name");
_description = M_CONFIG(getText,"CfgPerks",_perkCfg,"description");
_icon = M_CONFIG(getText,"CfgPerks",_perkCfg,"icon");
CONTROL(17000,170110) ctrlSetText format ["%1",_displayName];
CONTROL(17000,170120) ctrlSetStructuredText parseText format["%1",_description];

