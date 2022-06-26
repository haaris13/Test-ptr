#include "..\..\..\..\script_macros.hpp"
/*
	File: fn_clanHouseInv.sqf
	Author: IronBlade
*/
private["_veh","_tInv","_pInv","_veh_data"];

disableSerialization;

_tInv = CONTROL(6700,6702);
_pInv = CONTROL(6700,6703);
_ctrlfilterCombo = CONTROL(6700,6709);

_currentComboClass = _ctrlfilterCombo lbData (lbCurSel _ctrlfilterCombo);
_currentCombo = (missionConfigFile >> "CfgContainers" >> "Filters" >> _currentComboClass);

_currentListType = getText(_currentCombo >> "type");
_currentList = getArray(_currentCombo >> "list");

lbClear _tInv;
lbClear _pInv;


_veh_data = [life_house_mWeight, (life_house_inventory getVariable["clan_inventory", [[],0]]) select 1];

if(EQUAL(SEL(_veh_data,0),-1)) exitWith {closeDialog 0};

ctrlSetText[6704,format["Coffre: %1/%2",_veh_data select 1,_veh_data select 0]];
_data = life_house_inventory getVariable ["clan_inventory",[]];
if(EQUAL(count _data,0)) then {life_house_inventory setVariable["clan_inventory",[[],0],true]; _data = [];} else {_data = _data select 0;};
//Player Inventory Items
{
	_val = ITEM_VALUE(configName _x);

	if (_val > 0) then {
		_pInv lbAdd format["[%1] - %2",_val,localize (getText(_x >> "displayName"))];
		_pInv lbSetData [(lbSize _pInv)-1,configName _x];
		_icon = (getText(_x >> "icon"));
		if(!(EQUAL(_icon,""))) then {
			_pInv lbSetPicture [(lbSize _pInv)-1,_icon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

//Trunk Inventory Items
{

	_itemCfg = _x select 0;

	_name = M_CONFIG(getText,"VirtualItems",_itemCfg,"displayName");
	_val = SEL(_x,1);
		
	_canShow = true;
	switch (_currentListType) do {
		case "show" : {
			if (_itemCfg in _currentList) then {
				_canShow = true;
			} else {
				_canShow = false;
			};
		};

		case "hide" : {
			if (_itemCfg in _currentList) then {
				_canShow = false;
			} else {
				_canShow = true;
			};
		};
	};

	if (_val > 0 && _canShow) then {
		_tInv lbAdd format["[%1] - %2",_val,localize _name];
		_tInv lbSetData [(lbSize _tInv)-1, _itemCfg];
		_icon = M_CONFIG(getText,"VirtualItems", _itemCfg, "icon");
		if(!(EQUAL(_icon,""))) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
} foreach _data;