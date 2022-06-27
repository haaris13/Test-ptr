#include "..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_houseInvStoreItem.sqf
	Author: IronBlade
*/
private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val"];
disableSerialization;

_ctrl = ctrlSelData(3703);
_num = ctrlText 3706;

if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", "Format indiqué invalide ! Utilisez des chiffres."] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);
if(_num < 1) exitWith {["Error", "Vous devez indiquer un montant supérieur à zéro."] spawn life_fnc_showPredefinedNotification;};

_itemsCantStore = getArray(missionConfigFile >> "CfgHouses" >> "cantStoreVItems");

if (_ctrl in _itemsCantStore) exitWith {
	["Error", "Vous ne pouvez pas stocker ça."] spawn life_fnc_showPredefinedNotification;
};

_cfgHouses = (missionConfigFile >> "CfgHouses");
_mWeight = getNumber(_cfgHouses >> "Upgrades" >> (typeOf life_house_inventory) >> "trunk");

_veh_data = life_house_inventory getVariable ["inventory",[[],0]];
_totalWeight = [_mWeight, (_veh_data) select 1];
_inv = _veh_data select 0;

_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;

if(((_totalWeight select 1) + _itemWeight) > (_totalWeight select 0)) exitWith {["Error", "Le coffre est plein !"] spawn life_fnc_showPredefinedNotification;};

if (!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {["Error", "Impossible de retirer les objets de votre inventaire pour les mettre dans le véhicule."] spawn life_fnc_showPredefinedNotification;};
_index = [_ctrl,_inv] call TON_fnc_index;

if(_index == -1) then
{
	_inv pushBack [_ctrl,_num];
} else {
	_val = _inv select _index select 1;
	_inv set[_index,[_ctrl,_val + _num]];
};

life_house_inventory setVariable["inventory",[_inv,(_veh_data select 1) + _itemWeight],true];
[life_house_inventory] call life_fnc_houseInvUpdate;

[3] call SOCK_fnc_updatePartial;

[life_house_inventory, 0] remoteExecCall ["TON_fnc_houseUpdate",2];