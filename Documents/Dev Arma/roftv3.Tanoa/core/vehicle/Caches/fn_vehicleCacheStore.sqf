#include "..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File:fn_vehicleCacheStore.sqf

	Autor:IronBlade
*/


private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val"];
disableSerialization;

_ctrl = ctrlSelData(3603);
_num = ctrlText 3606;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint "Invalid Number format";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint "1 Minimum !";};

_vehicle = life_vehicle_cache;

//Vehicle
_veh_data = [_vehicle, life_vehicle_cache_cfg] call life_fnc_vehicleGetCache;
_invData = (_veh_data select 0);
_used = _invData select 2;
_invArray = _invData select 1;
_totalWeight = (_veh_data select 1);

_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;

if(_ctrl == "money") exitWith {};
if((_used + _itemWeight) > _totalWeight) exitWith {hint "Il y a plus de place !"};
if(!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint "Vous n'avez pas assez d'items !";};

_index = [_ctrl,_invArray] call TON_fnc_index;
if(_index == -1) then
{
	_invArray pushBack [_ctrl,_num];
}
	else
{
	_val = _invArray select _index select 1;
	_invArray set[_index,[_ctrl,_val + _num]];
};

_used = (_used + _itemWeight);

_invData set[1, _invArray];
_invData set[2, _used];

[_vehicle, life_vehicle_cache_cfg, _invData] call life_fnc_vehicleSetCache;

[_vehicle] call life_fnc_vehicleCacheInv;

[3] call SOCK_fnc_updatePartial;