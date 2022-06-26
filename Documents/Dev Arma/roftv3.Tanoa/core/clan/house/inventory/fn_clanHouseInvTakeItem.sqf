#include "..\..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_clanHouseInvTakeItem.sqf
	Author: IronBlade
*/
private["_ctrl","_num","_index","_data","_old","_value","_weight","_diff"];
disableSerialization;
if(isNull life_house_inventory OR !alive life_house_inventory) exitWith {hint localize "STR_MISC_VehDoesntExist"};
if(!alive player) exitwith {closeDialog 0;};

if ((life_house_inventory getVariable ["antiDupe",-1]) != (getPlayerUID player)) exitWith {
	life_exit_veh = true;

	[format ["%1 antiDupe",profileName], getPlayerUID player,12] remoteExecCall ["TON_fnc_logsAdmin",2];

	closeDialog 0;
};

if((lbCurSel 6702) == -1) exitWith {hint localize "STR_Global_NoSelection";};
_ctrl = ctrlSelData(6702);
_num = ctrlText 6705;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint localize "STR_MISC_WrongNumFormat";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint localize "STR_MISC_Under1";};

_index = [_ctrl,((life_house_inventory getVariable "clan_inventory") select 0)] call TON_fnc_index;
_data = (life_house_inventory getVariable "clan_inventory") select 0;
_old = life_house_inventory getVariable "clan_inventory";
if(_index == -1) exitWith {};
_value = _data select _index select 1;
if(_num > _value) exitWith {hint localize "STR_MISC_NotEnough"};
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_num == 0) exitWith {hint localize "STR_NOTF_InvFull"};
_weight = ([_ctrl] call life_fnc_itemWeight) * _num;

if ([true,_ctrl,_num] call life_fnc_handleInv) then {
	if(_num == _value) then {
		_data set[_index,-1];
		_data = _data - [-1];
	} else {
		_data set[_index,[_ctrl,(_value - _num)]];
	};
	
	life_house_inventory setVariable["clan_inventory",[_data,(_old select 1) - _weight],true];
	[life_house_inventory] call life_fnc_clanhouseInv;
} else {
	hint localize "STR_NOTF_InvFull";
};

[life_house_inventory, 0] remoteExec ["TON_fnc_clanHouseUpdate",2];

[3] call SOCK_fnc_updatePartial;