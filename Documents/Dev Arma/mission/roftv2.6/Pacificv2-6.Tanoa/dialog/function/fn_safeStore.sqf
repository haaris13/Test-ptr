#include "..\..\script_macros.hpp"
/*
	File: fn_safeStore.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Gateway copy of fn_vehStoreItem but designed for the safe.
*/
private["_ctrl","_num"];
disableSerialization;
_ctrl = CONTROL_DATA(3503);
_num = ctrlText 3506;

//Error checks
if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_MISC_WrongNumFormat"] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);
if(_num < 1) exitWith {["Error", localize "STR_Civ_SelectItem"] spawn life_fnc_showPredefinedNotification;};

if(!(EQUAL(_ctrl,"goldIngot"))) exitWith {["Error", localize "STR_Cop_OnlyGold"] spawn life_fnc_showPredefinedNotification;};

if(_num > life_inv_goldbar) exitWith {hint format[localize "STR_Cop_NotEnoughGold",_num];};

//Store it.
if(!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {["Error", localize "STR_Cop_CantRemove"] spawn life_fnc_showPredefinedNotification;};
_safeInfo = life_safeObj GVAR["safe",0];
life_safeObj GVAR ["safe",_safeInfo + _num,true];

[life_safeObj] call life_fnc_safeInventory;