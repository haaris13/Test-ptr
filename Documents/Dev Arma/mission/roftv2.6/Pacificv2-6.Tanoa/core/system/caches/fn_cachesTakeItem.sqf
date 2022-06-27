#include "..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_cacheTakeItem.sqf
	Author: Iron
*/
private["_ctrl","_num","_index","_data","_old","_value","_weight","_diff"];
disableSerialization;
if(!alive player) exitwith {closeDialog 0;};

if (isNil "life_cache_current") exitWith {closeDialog 0;};
if (isNil "life_cache_current_trunk") exitWith {closeDialog 0;};

if((lbCurSel 4102) == -1) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};
_ctrl = ctrlSelData(4102);
_num = ctrlText 4105;
if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_MISC_WrongNumFormat"] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);

if(_num < 1) exitWith {["Error", localize "STR_MISC_Under1"] spawn life_fnc_showPredefinedNotification;};

_cfgCaches = (missionConfigFile >> "CfgCaches" >> "Config");
_vItemSpace = getNumber(_cfgCaches >> "vItemSpace");

_cacheId = life_cache_current select 0;
_veh_data = life_cache_current_trunk;
_data = _veh_data select 0;
_old = _veh_data;

_index = [_ctrl,_data] call TON_fnc_index;


if(_index == -1) exitWith {};

_value = _data select _index select 1;

if(_num > _value) exitWith {["Error", localize "STR_MISC_NotEnough"] spawn life_fnc_showPredefinedNotification;};

_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(_num == 0) exitWith {["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;};

_weight = ([_ctrl] call life_fnc_itemWeight) * _num;

if([true,_ctrl,_num] call life_fnc_handleInv) then {
	if(_num == _value) then {
		_data set[_index,-1];
		_data = _data - [-1];
	} else {
		_data set[_index,[_ctrl,(_value - _num)]];
	};

	_weightTotal = (_old select 1) - _weight;

	if (_weightTotal < 0) then {
		_weightTotal = 0;
	};

	life_cache_current_trunk = [_data, _weightTotal];
	[] spawn life_fnc_cachesMenuUpdate;
	[player, _cacheId, life_cache_current_trunk] remoteExec ["TON_fnc_cachesUpdate", 2];
} else {
	["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
};

[3] call SOCK_fnc_updatePartial;