#include "..\..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_clanHouseInvMenuLBChange.sqf
	Author: IronBlade
*/
private ["_ctrl"];
_type = SEL(_this,0);
if(isNull life_house_inventory OR !alive life_house_inventory) exitWith {["Error", localize "STR_MISC_VehDoesntExist"] spawn life_fnc_showPredefinedNotification;};
if(!alive player) exitwith {closeDialog 0;};

switch (_type) do { 
	case 0 : {
		if((lbCurSel 6703) == -1) exitWith {};
		_ctrl = ctrlSelData(6703);

		{
			if (configName _x == _ctrl) exitWith {
				_val = ITEM_VALUE(configName _x);
				ctrlSetText [6706, (str _val)];
			};
		} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));
	};

	case 1 : {
		if((lbCurSel 6702) == -1) exitWith {};
		_ctrl = ctrlSelData(6702);

		_index = [_ctrl,((life_house_inventory getVariable "clan_inventory") select 0)] call TON_fnc_index;
		_data = (life_house_inventory getVariable "clan_inventory") select 0;
		if(_index == -1) exitWith {};

		_value = _data select _index select 1;

		ctrlSetText [6705, (str _value)];
	}; 
};