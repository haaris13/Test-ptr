#include "..\..\..\script_macros.hpp"
/*
	File: 
	
	Author: IronBlade
*/

private ["_wreckLoot","_item","_wreck"];
disableSerialization;
_wreck = life_current_explorer;
if ((lbCurSel 25503) isEqualTo -1) exitWith {hint "Rien de séléctionné !"};
_item = CONTROL_DATA(25503);

if ([true,_item,1] call life_fnc_handleInv) then {

	_wreckLoot = _wreck getVariable ["loot",[]];
	_index = _wreckLoot find _item;
	_wreckLoot deleteAt _index;
	_wreck setVariable ["loot",_wreckLoot,false];

	if (life_current_explorer in life_explorer_caisses_pirate) then {
		_wreck setVariable ["loot",_wreckLoot,true];
	};

	if (count _wreckLoot isEqualTo 0) exitWith {
		_players = _wreck getVariable ["players",[]];
		_players pushBack (getPlayerUID player);
		_wreck setVariable ["players",_players,true];
		closeDialog 0;
	};

	_itemList = CONTROL(25500,25503);
	lbClear _itemList;

	{	
		_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
		_itemList lbAdd format ["%1",localize _displayName];
		_itemList lbSetData [(lbSize _itemList) -1,_x];
	} forEach _wreckLoot;

} else {
	hint "Vous ne disposez pas de suffisamment d'espace";
};