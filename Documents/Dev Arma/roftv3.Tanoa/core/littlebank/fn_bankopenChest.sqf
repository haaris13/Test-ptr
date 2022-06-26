#include "..\..\script_macros.hpp"
/*
	File:fn_bankopenChest.sqf

	Autor:IronBlade
*/
_chest = _this select 0;
life_current_bank_chest = _chest;
life_action_inUse = true;
	
_items = _chest getVariable ["items",[]];

if (count _items isEqualTo 0) exitWith {hint "C'est Vide !"; life_action_inUse = false;};

if (dialog) exitWith {life_action_inUse = false;};
if (!createDialog "BanqueCoffreDialog") exitWith {hint "An error occured"; life_action_inUse = false;};

disableSerialization;

_itemList = CONTROL(26500,26503);
_editBox = CONTROL(26500,26504);
_editBox ctrlEnable false;
lbClear _itemList;

{	
	_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
	_itemList lbAdd format ["%1",localize _displayName];
	_itemList lbSetData [(lbSize _itemList) -1,_x];

} forEach _items;

life_action_inUse = false;

sleep 2;