#include "..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehTakeItem.sqf
	Author: IronBlade
	
	Description:
	
*/
private ["_ctrl"];
_type = SEL(_this,0);
if(isNull life_trunk_vehicle OR !alive life_trunk_vehicle) exitWith {hint localize "STR_MISC_VehDoesntExist"};
if(!alive player) exitwith {closeDialog 0;};

switch (_type) do { 
	case 0 : {
		if((lbCurSel 3503) == -1) exitWith {};
		_ctrl = ctrlSelData(3503);

		{
			if (configName _x == _ctrl) exitWith {
				_val = ITEM_VALUE(configName _x);
				ctrlSetText [3506, (str _val)];
			};
		} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));
	};

	case 1 : {
		if((lbCurSel 3502) == -1) exitWith {};
		_ctrl = ctrlSelData(3502);

		_index = [_ctrl,((life_trunk_vehicle getVariable "Trunk") select 0)] call TON_fnc_index;
		_data = (life_trunk_vehicle getVariable "Trunk") select 0;
		if(_index == -1) exitWith {};

		_value = _data select _index select 1;

		ctrlSetText [3505, (str _value)];
	}; 
};