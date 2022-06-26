#include "..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehStoreItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Used in the vehicle trunk menu, stores the selected item and puts it in the vehicles virtual inventory
	if the vehicle has room for the item.
*/
private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val"];
disableSerialization;

_ctrl = ctrlSelData(3503);
_num = ctrlText 3506;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint "Nombre(s) invalide";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint "Quantité minimum 1!";};

_totalWeight = [life_trunk_vehicle] call life_fnc_vehicleWeight;

_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;
_veh_data = life_trunk_vehicle getVariable ["Trunk",[[],0]];
_inv = _veh_data select 0;

_type = getNumber(missionConfigFile >> "VirtualItems" >> _ctrl >> "type");

/*



if (life_trunk_vehicle isKindOf "Air" && _type == 1) exitWith {

	_vInfo = typeOf life_trunk_vehicle;

	[getPlayerUID player, 1, _ctrl, _num, _vInfo, (position player)] remoteExecCall ["TON_fnc_insertTrunkLogs", 2];

	["<t color='#ff0000'>Attention les Items de FARM doivent rester au SOL !</t>"] call life_fnc_dynamicText;

	[false,_ctrl,_num] call life_fnc_handleInv;
}; */

if(_ctrl == "money") then
{
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(CASH < _num) exitWith {hint "Vous n'avez pas beaucoup d'argent sur vous à stocker dans le véhicule!"};
	if(_index == -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};

	CASH = CASH - _num;
	life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[life_trunk_vehicle] call life_fnc_vehInventory;
}
	else
{
	if(((_totalWeight select 1) + _itemWeight) > (_totalWeight select 0)) exitWith {hint "Le coffre est plein ou ne peut pas en contenir autant."};

	if(!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint "Impossible de supprimer les articles de votre inventaire pour les mettre dans le véhicule.";};
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(_index == -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};

	life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[life_trunk_vehicle] call life_fnc_vehInventory;
};

[3] call SOCK_fnc_updatePartial;