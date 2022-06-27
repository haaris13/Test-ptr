#include "..\..\..\script_macros.hpp"
/*
	File: fn_bankChestTakeItem.sqf

	Autor: Iron
	Date: 29 Mar 2020 19:12:29
	Version: 0.1
*/
disableSerialization;
_chest = life_current_bank_chest;
_id = life_current_bank_chest_id;

_var = "";
if (_id != "") then {
	_var = format["_%1", _id];
};

_varItem = format["items%1", _var];

if (life_exit_veh) exitWith {};

if ((lbCurSel 26403) isEqualTo -1) exitWith {
	["Error", "Rien de séléctionné !"] spawn life_fnc_showPredefinedNotification;
};

_item = CONTROL_DATA(26403);

if ([true,_item,1] call life_fnc_handleInv) then {

	_items = _chest getVariable [_varItem,[]];
	_robItems = _chest getVariable ["rob_items",[]];

	_index = _items find _item;
	_items deleteAt _index;
	_robItems pushBack _item;

	_chest setVariable [_varItem, _items, false];
	_chest setVariable ["rob_items", _robItems, true];

	if (count _items isEqualTo 0) exitWith {
		closeDialog 0;
	};

	_itemList = CONTROL(26500,26403);
	lbClear _itemList;

	{	
		_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
		_itemList lbAdd format ["%1",localize _displayName];
		_itemList lbSetData [(lbSize _itemList) -1,_x];
	} forEach _items;

} else {
	["Error", "Vous ne disposez pas de suffisamment d'espace !"] spawn life_fnc_showPredefinedNotification;
};