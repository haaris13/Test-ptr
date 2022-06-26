#include "..\..\script_macros.hpp"
/*
	File: fn_houseInventory.sqf
	Author: IronBlade
*/
private["_veh","_tInv","_pInv","_veh_data"];
_veh = param [0,ObjNull,[ObjNull]];
if(isNull _veh OR !alive _veh) exitWith {closeDialog 0;}; //If null / dead exit menu
disableSerialization;

_tInv = CONTROL(3700,3702);
_pInv = CONTROL(3700,3703);
_ctrlfilterCombo = CONTROL(3700,3709);

_cfgContainers = (missionConfigFile >> "CfgContainers");
_lists = ("true" configClasses (_cfgContainers >> "Filters"));

lbClear _ctrlfilterCombo;

{
	_className = configName(_x);
	_displayName = getText(_x >> "displayname");

	_ctrlfilterCombo lbAdd _displayName;
	_ctrlfilterCombo lbSetData [(lbSize _ctrlfilterCombo)-1, _className];
} forEach _lists;

_ctrlfilterCombo lbSetCurSel 0;

lbClear _tInv;
lbClear _pInv;

life_house_inventory = _veh;

_cfgHouses = (missionConfigFile >> "CfgHouses");

if !(isClass (_cfgHouses >> "Upgrades" >> (typeOf _veh))) exitWith {
	closeDialog 0;
};

_mWeight = getNumber(_cfgHouses >> "Upgrades" >> (typeOf _veh) >> "trunk");
if (_mWeight == 0) exitWith {closeDialog 0;};

_veh_data = [_mWeight, (_veh getVariable["inventory", [[],0]]) select 1];

if(EQUAL(SEL(_veh_data,0),-1)) exitWith {closeDialog 0};

ctrlSetText[3704,format["Coffre: %1/%2",_veh_data select 1,_veh_data select 0]];
_data = _veh getVariable ["inventory",[]];
if(EQUAL(count _data,0)) then {_veh setVariable["inventory",[[],0],true]; _data = [];} else {_data = _data select 0;};
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
	_name = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"displayName");
	_val = SEL(_x,1);
		
	if(_val > 0) then {
		_tInv lbAdd format["[%1] - %2",_val,localize _name];
		_tInv lbSetData [(lbSize _tInv)-1,SEL(_x,0)];
		_icon = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"icon");
		if(!(EQUAL(_icon,""))) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
} foreach _data;