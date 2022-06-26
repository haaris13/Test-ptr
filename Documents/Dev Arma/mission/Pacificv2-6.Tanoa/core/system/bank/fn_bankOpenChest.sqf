#include "..\..\script_macros.hpp"
/*
	File: fn_bankOpenChest.sqf

	Autor: Iron
	Date: 29 Mar 2020 19:06:36
	Version: 0.1
*/
_chest = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_id = [_this, 1, "", [""]] call BIS_fnc_param;

life_current_bank_chest = _chest;
life_current_bank_chest_id = _id;


life_action_inUse = true;
life_exit_veh = false;

_var = "";
if (_id != "") then {
	_var = format["_%1", _id];
};

_varTrunk = format["trunk_in_use%1", _var];

if ((_chest getVariable [_varTrunk, false])) exitWith {
	["Error", localize "STR_MISC_VehInvUse"] spawn life_fnc_showPredefinedNotification;
};

_chest setVariable[_varTrunk, true, true];
_items = _chest getVariable [format["items%1", _var],[]];

if (count _items isEqualTo 0) exitWith {["Error", "C'est Vide !"] spawn life_fnc_showPredefinedNotification; life_action_inUse = false;};

if (dialog) exitWith {life_action_inUse = false;};
if (!createDialog "BankCoffreDialog") exitWith {["Error", "Une erreur est survenue !"] spawn life_fnc_showPredefinedNotification;; life_action_inUse = false;};

disableSerialization;

_itemList = CONTROL(26500,26403);
_editBox = CONTROL(26500,26404);
_editBox ctrlEnable false;
lbClear _itemList;

{	
	_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
	_itemList lbAdd format ["%1",localize _displayName];
	_itemList lbSetData [(lbSize _itemList) -1,_x];
} forEach _items;

life_action_inUse = false;

[_chest, _var] spawn {
	_chest = _this select 0;
	_var = format["antiDupe%1", (_this select 1)];

	_chest setVariable [_var,(getPlayerUID player),true];
	sleep (random 4);
	if ((_chest getVariable [_var,-1]) != (getPlayerUID player)) exitWith {
		life_exit_veh = true;

		[format ["%1 antiDupe",profileName], getPlayerUID player, 12] remoteExecCall ["TON_fnc_logsAdmin",2];

		closeDialog 0;
	};
};

[_chest, _varTrunk] spawn {
	_vehicle = _this select 0;
	_var = (_this select 1);
	waitUntil {isNull (findDisplay 26500)};

	if (life_exit_veh) exitWith {life_exit_veh = false;}; 

	_vehicle setVariable[_var, false, true];
};