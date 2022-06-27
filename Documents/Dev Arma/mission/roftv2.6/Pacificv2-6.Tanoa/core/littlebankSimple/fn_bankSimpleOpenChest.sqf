#include "..\..\script_macros.hpp"
/*
	File:fn_bankSimpleOpenChest.sqf

	Autor:IronBlade
*/
_chest = _this select 0;
life_current_bank_simple_chest = _chest;
life_action_inUse = true;

_items = _chest getVariable ["items",[]];

if (count _items isEqualTo 0) exitWith {["Error", "C'est Vide !"] spawn life_fnc_showPredefinedNotification; life_action_inUse = false;};

if (dialog) exitWith {life_action_inUse = false;};
if (!createDialog "BanqueSimpleCoffreDialog") exitWith {["Error", "Une erreur est survenue !"] spawn life_fnc_showPredefinedNotification;; life_action_inUse = false;};

disableSerialization;

_itemList = CONTROL(26400,26403);
_editBox = CONTROL(26400,26404);
_editBox ctrlEnable false;
lbClear _itemList;

{	
	_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
	_itemList lbAdd format ["%1",localize _displayName];
	_itemList lbSetData [(lbSize _itemList) -1,_x];

} forEach _items;

life_action_inUse = false;

sleep 2;