#include "..\..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_cacheStoreItem.sqf
	
	Author: Iron
*/
private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val"];
disableSerialization;
if(!alive player) exitwith {closeDialog 0;};

if (isNil "life_cache_current") exitWith {closeDialog 0;};
if (isNil "life_cache_current_trunk") exitWith {closeDialog 0;};

_cfgCaches = (missionConfigFile >> "CfgCaches" >> "Config");
_vItemSpace = getNumber(_cfgCaches >> "vItemSpace");

_ctrl = ctrlSelData(4103);
_num = ctrlText 4106;
if (!([_num] call TON_fnc_isnumber)) exitWith {
	["Error", "Format invalide ! Utilisez des chiffres à la place."] spawn life_fnc_showPredefinedNotification;
};

_num = parseNumber(_num);
if(_num < 1) exitWith {
	["Error", "Vous devez indiquer une valeur supérieur à 0 !"] spawn life_fnc_showPredefinedNotification;
};

_cacheId = life_cache_current select 0;

_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;
_veh_data = life_cache_current_trunk;
_inv = _veh_data select 0;

_cacheData = [_vItemSpace, _veh_data select 1];

if (((_cacheData select 1) + _itemWeight) > (_cacheData select 0)) exitWith {
	["Error", "La cache est pleine ou ne peut pas recevoir autant !"] spawn life_fnc_showPredefinedNotification;
};

if (!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {
	["Error", "Impossible de supprimer les objets de votre inventaire et de les mettre dans le véhicule."] spawn life_fnc_showPredefinedNotification;
};

_index = [_ctrl,_inv] call TON_fnc_index;
if(_index == -1) then {
	_inv pushBack [_ctrl,_num];
} else {
	_val = _inv select _index select 1;
	_inv set[_index,[_ctrl,_val + _num]];
};

life_cache_current_trunk = [_inv, (_veh_data select 1) + _itemWeight];
[] spawn life_fnc_cachesMenuUpdate;

[3] call SOCK_fnc_updatePartial;
[player, _cacheId, life_cache_current_trunk] remoteExec ["TON_fnc_cachesUpdate", 2];