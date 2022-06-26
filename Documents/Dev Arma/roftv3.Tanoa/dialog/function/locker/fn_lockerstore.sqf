#include "..\..\..\script_macros.hpp"
/*
	File: fn_lockerstore.sqf
		
	Author: IronBlade
	    
	Description:
		- store an item in your your locker

*/
private ["_amountToStore","_storageSlots"];
disableSerialization;
_filter = uiNamespace getVariable ["Locker_Filter",0];
_storageSlots = life_storage select 4;
_yourEdit = CONTROL(14000,14003);
_itemClass = CONTROL_DATA(14001);
if (_itemClass isEqualTo "") exitWith {}; //No item passed
if ((lbCurSel 14001) isEqualTo -1) exitWith {hint "You did not select an item to store."};

_amountToStore = ctrlText _yourEdit;
if(!([_amountToStore] call TON_fnc_isnumber)) exitWith {};
_amountToStore = parseNumber (_amountToStore);
if (_amountToStore isEqualTo 0) exitWith {};

if (_amountToStore + _storageSlots > life_storage_cap) exitWith {hint "Your locker can't hold that many items."};
if (_storageSlots >= life_storage_cap) exitWith {hint "Your locker is full!"};

//Virtual	
if (_filter isEqualTo 1) then {
	_vItemArray = life_storage select 3; 
	if ([false,_itemClass,_amountToStore] call life_fnc_handleInv) then {
		_index = [_itemClass,_vItemArray] call TON_fnc_index;
		if (_index isEqualTo -1) then {

			_vItemArray pushback [_itemClass,_amountToStore];

		} else {

			_currentAmount = _vItemArray select _index select 1;
			_vItemArray set[_index,[_itemClass,(_currentAmount + _amountToStore)]];
		};
		
		life_storage set[3,_vItemArray];
		life_storage set[4,(_storageSlots + _amountToStore)];
		[_filter] call life_fnc_lockerFilter;

		} else {
		hint "You can't store that many.";
	};
};	


//Physical	
if (_filter isEqualTo 2) then {

	if (_amountToStore != 1) exitWith {}; //Should always be 1 for phsyical items

	_gearArray = life_storage select 2;
	[_itemClass,false] call life_fnc_handleItem;
	_index = [_itemClass,_gearArray] call TON_fnc_index;

	if (_index isEqualTo -1) then {
		_gearArray pushback [_itemClass,_amountToStore];
	} else {

		_currentAmount = _gearArray select _index select 1;
		_gearArray set[_index,[_itemClass,(_currentAmount + _amountToStore)]];
	};

	life_storage set[2,_gearArray];
	life_storage set[4,(_storageSlots + _amountToStore)];
	[_filter] call life_fnc_lockerFilter;
};
