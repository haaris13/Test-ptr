#include "..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehTakeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used in the vehicle trunk menu, takes the selected item and puts it in the players virtual inventory
	if the player has room.
*/
private["_ctrl","_num","_index","_data","_old","_value","_weight","_diff"];
disableSerialization;
if(isNull life_trunk_vehicle OR !alive life_trunk_vehicle) exitWith {["Error", localize "STR_MISC_VehDoesntExist"] spawn life_fnc_showPredefinedNotification;};
if(!alive player) exitwith {closeDialog 0;};

if ((_vehicle getVariable ["antiDupe",-1]) != (getPlayerUID player)) exitWith {
	life_exit_veh = true;

	[format ["%1 antiDupe",profileName], getPlayerUID player,12] remoteExecCall ["TON_fnc_logsAdmin",2];

	closeDialog 0;
};

if((lbCurSel 3502) == -1) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};
_ctrl = ctrlSelData(3502);
_num = ctrlText 3505;
if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_MISC_WrongNumFormat"] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);

if(_num < 1) exitWith {["Error", localize "STR_MISC_Under1"] spawn life_fnc_showPredefinedNotification;};

_index = [_ctrl,((life_trunk_vehicle getVariable "Trunk") select 0)] call TON_fnc_index;
_data = (life_trunk_vehicle getVariable "Trunk") select 0;
_old = life_trunk_vehicle getVariable "Trunk";
if(_index == -1) exitWith {};
_value = _data select _index select 1;
if(_num > _value) exitWith {["Error", localize "STR_MISC_NotEnough"] spawn life_fnc_showPredefinedNotification;};
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_num == 0) exitWith {["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;};
_weight = ([_ctrl] call life_fnc_itemWeight) * _num;
if(_ctrl == "money") then {
	if(_num == _value) then {
		_data set[_index,-1];
		_data = _data - [-1];
	} else {
		_data set[_index,[_ctrl,(_value - _num)]];
	};
	
	CASH = CASH + _num;
	life_trunk_vehicle setVariable["Trunk",[_data,(_old select 1) - _weight],true];
	[life_trunk_vehicle] call life_fnc_vehInventory;
} else {
	if([true,_ctrl,_num] call life_fnc_handleInv) then {
		if(_num == _value) then {
			_data set[_index,-1];
			_data = _data - [-1];
		} else {
			_data set[_index,[_ctrl,(_value - _num)]];
		};
		life_trunk_vehicle setVariable["Trunk",[_data,(_old select 1) - _weight],true];
		[life_trunk_vehicle] call life_fnc_vehInventory;
	} else {
		["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
	};
};

[3] call SOCK_fnc_updatePartial;