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
if ((lbCurSel 14001) isEqualTo -1) exitWith {["Error", "Vous devez sélectionner un objet à stocker."] spawn life_fnc_showPredefinedNotification;};

_amountToStore = ctrlText _yourEdit;
if(!([_amountToStore] call TON_fnc_isnumber)) exitWith {};
_amountToStore = parseNumber (_amountToStore);
if (_amountToStore isEqualTo 0) exitWith {};

if (_amountToStore + _storageSlots > life_storage_cap) exitWith {["Error", "Votre casier ne peut pas stocker autant d'objets !"] spawn life_fnc_showPredefinedNotification;};
if (_storageSlots >= life_storage_cap) exitWith {["Error", "Votre casier est plein !"] spawn life_fnc_showPredefinedNotification;};

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
		["Error", "Vous ne pouvez pas en stocker autant."] spawn life_fnc_showPredefinedNotification;
	};
};	


//Physical	
if (_filter isEqualTo 2) then {

	if (_amountToStore != 1) exitWith {}; //Should always be 1 for phsyical items

	_gearArray = life_storage select 2;
	[_itemClass,false] call life_fnc_handleItem;

	if (_itemClass find "tf_radio_civ" >= 0) then {
        _itemClass = "tf_radio_civ";
    };

    if (_itemClass find "tf_radio_reb" >= 0) then {
        _itemClass = "tf_radio_reb";
    };

    if (_itemClass find "tf_radio_gen" >= 0) then {
        _itemClass = "tf_radio_gen";
    };

    if (_itemClass find "tf_radio_med" >= 0) then {
        _itemClass = "tf_radio_med";
    };

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
