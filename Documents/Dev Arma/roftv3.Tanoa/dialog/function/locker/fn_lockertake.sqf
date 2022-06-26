#include "..\..\..\script_macros.hpp"
/*
	File: fn_lockertake.sqf
		
	Author: IronBlade
	    
	Description:
		- take an item from your locker

*/
private ["_fauofasd","_amountToTake","_storageSlots"];
disableSerialization;
_filter = uiNamespace getVariable ["Locker_Filter",0];
_storageSlots = life_storage select 4;
_lockerEdit = CONTROL(14000,14004);
_itemClass = CONTROL_DATA(14002);
if (_itemClass isEqualTo "") exitWith {}; //No item?
if ((lbCurSel 14002) isEqualTo -1) exitWith {hint "You did not select an item to take."};

_amountToTake = ctrlText _lockerEdit;
if(!([_amountToTake] call TON_fnc_isnumber)) exitWith {};
_amountToTake = parseNumber (_amountToTake);
if (_amountToTake isEqualTo 0) exitWith {};

//Virtual	

if (_filter isEqualTo 1) then {
	_vItemArray = life_storage select 3;

	_index = [_itemClass,_vItemArray] call TON_fnc_index;
	_currentAmount = _vItemArray select _index select 1;
	if(_amountToTake > _currentAmount) exitWith {hint "You can't take that many."};
	//Check if you have space
	_amountToTake = [_itemClass,_amountToTake,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
	if(_amountToTake == 0) exitWith {hint localize "STR_NOTF_InvFull"};



	if ([true,_itemClass,_amountToTake] call life_fnc_handleInv) then {

		if (_amountToTake isEqualTo _currentAmount) then {
			_vItemArray set[_index,-1];
			_vItemArray = _vItemArray - [-1];

		} else {
			_vItemArray set[_index,[_itemClass,(_currentAmount - _amountToTake)]];
		};
		
		life_storage set[4,(_storageSlots - _amountToTake)];
		life_storage set[3,_vItemArray];
		[_filter] call life_fnc_lockerFilter;
		
	} else {
	hint "You can take that many.";
	};
};

//Physical	
if (_filter isEqualTo 2) then {	
	if (_amountToTake != 1) exitWith {}; //Should always be 1 for phsyical items atm	
	_gearArray = life_storage select 2;

	_index = [_itemClass,_gearArray] call TON_fnc_index;
	_currentAmount = _gearArray select _index select 1;
	if(_amountToTake > _currentAmount) exitWith {hint "You can't take that many."};
	[_itemClass,true] call life_fnc_handleItem;

	if (_amountToTake isEqualTo _currentAmount) then {
			_gearArray set[_index,-1];
			_gearArray = _gearArray - [-1];
		} else {
			_gearArray set[_index,[_itemClass,(_currentAmount - _amountToTake)]];
		};
		life_storage set[4,(_storageSlots - _amountToTake)];
		life_storage set[2,_gearArray];
		[_filter] call life_fnc_lockerFilter;
};
