#include "..\..\script_macros.hpp"
/*
	File:fn_bankSimpleTakeItem.sqf

	Autor:IronBlade
*/

disableSerialization;
_chest = life_current_bank_simple_chest;
if ((lbCurSel 26403) isEqualTo -1) exitWith {["Error", "Rien de séléctionné !"] spawn life_fnc_showPredefinedNotification;};
_item = CONTROL_DATA(26403);

if ([true,_item,1] call life_fnc_handleInv) then {

	_items = _chest getVariable ["items",[]];
	_robItems = _chest getVariable ["rob_items",[]];

	_index = _items find _item;
	_items deleteAt _index;
	_robItems pushBack _item;

	_chest setVariable ["items", _items, false];
	_chest setVariable ["rob_items", _robItems, true];

	if (count _items isEqualTo 0) exitWith {
		closeDialog 0;

		bank_simple_nb_breaker = nil;
		_chest setVariable ["owner", nil, true];
		_chest setVariable ["rob", true, true];
	};

	_itemList = CONTROL(26400,26403);
	lbClear _itemList;

	{	
		_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
		_itemList lbAdd format ["%1",localize _displayName];
		_itemList lbSetData [(lbSize _itemList) -1,_x];
	} forEach _items;

} else {
	["Error", "Vous ne disposez pas de suffisamment d'espace !"] spawn life_fnc_showPredefinedNotification;
};