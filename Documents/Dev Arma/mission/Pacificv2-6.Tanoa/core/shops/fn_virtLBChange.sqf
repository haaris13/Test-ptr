#include "..\..\script_macros.hpp"
/*
	File: fn_virtLBChange.sqf

	Autor: Iron
*/
if(EQUAL(lbCurSel 2402,-1)) exitWith {};
_type = lbData[2402,(lbCurSel 2402)];

{
	if (configName _x == _type) exitWith {
		_val = ITEM_VALUE(configName _x);
		ctrlSetText [2405, (str _val)];
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));