#include "..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehicleCacheTake.sqf

	Autor:IronBlade
*/

private["_ctrl","_num","_index","_data","_old","_value","_weight","_diff"];
disableSerialization;

_vehicle = life_vehicle_cache;

if(isNull _vehicle OR !alive _vehicle) exitWith {["Error", localize "STR_MISC_VehDoesntExist"] spawn life_fnc_showPredefinedNotification;};
if(!alive player) exitwith {closeDialog 0;};

if((lbCurSel 3602) == -1) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};
_ctrl = ctrlSelData(3602);
_num = ctrlText 3605;
if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_MISC_WrongNumFormat"] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);
if(_num < 1) exitWith {["Error", localize "STR_MISC_Under1"] spawn life_fnc_showPredefinedNotification;};

_veh_data = [_vehicle, life_vehicle_cache_cfg] call life_fnc_vehicleGetCache;
_invData = (_veh_data select 0);
_used = _invData select 2;
_invArray = _invData select 1;
_totalWeight = (_veh_data select 1);

if(_ctrl == "money") exitWith {};

_index = [_ctrl,_invArray] call TON_fnc_index;
if(_index == -1) exitWith {};
_value = _invArray select _index select 1;
if(_num > _value) exitWith {["Error", localize "STR_MISC_NotEnough"] spawn life_fnc_showPredefinedNotification;};
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_num == 0) exitWith {["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;};
_weight = ([_ctrl] call life_fnc_itemWeight) * _num;

_old = life_trunk_vehicle getVariable "Trunk";

if([true,_ctrl,_num] call life_fnc_handleInv) then {
	if(_num == _value) then {
		_invArray set[_index,-1];
		_invArray = _data - [-1];
	} else {
		_invArray set[_index,[_ctrl,(_value - _num)]];
	};

	_used = (_used - _weight);

	_invData set[1, _invArray];
	_invData set[2, _used];

	[_vehicle, life_vehicle_cache_cfg, _invData] call life_fnc_vehicleSetCache;

	[_vehicle] call life_fnc_vehicleCacheInv;
} else {
	["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
};


[3] call SOCK_fnc_updatePartial;