#include "..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_cacheMenuLbChange.sqf

	Author: IronBlade	
*/
private ["_ctrl"];
_type = _this select 0;
if(!alive player) exitwith {closeDialog 0;};

switch (_type) do {
	case 0 : {
		if((lbCurSel 4103) == -1) exitWith {};
		_ctrl = ctrlSelData(4103);

		{
			if (configName _x == _ctrl) exitWith {
				_val = ITEM_VALUE(configName _x);
				ctrlSetText [4106, (str _val)];
			};
		} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));
	};

	case 1 : {
		if((lbCurSel 4102) == -1) exitWith {};
		_ctrl = ctrlSelData(4102);

		_veh_data = life_cache_current_trunk;
		_data = _veh_data select 0;

		_index = [_ctrl, _data] call TON_fnc_index;
		if(_index == -1) exitWith {};

		_value = (_data select _index) select 1;

		ctrlSetText [4105, (str _value)];
	}; 
};