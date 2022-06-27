#include "..\..\..\script_macros.hpp"
/*
	File: fn_lockerfilter.sqf
		
	Author: IronBlade
	    
	Description:
		- Filter your locker

*/

private ["_storageSlots","_filterType","_arr","_config","_itemInfo"];
disableSerialization;
_filterType = [_this,0,0,[0]] call BIS_fnc_param; //1 = phyiscal, 2 = virtual
uiNamespace setVariable ["Locker_Filter",_filterType];

_yourItems = CONTROL(14000,14001);
_lockerItems = CONTROL(14000,14002);

_storageSlots = life_storage select 4;
(CONTROL(14000,14010)) ctrlSetStructuredText parseText format["Slots : %1/%2",_storageSlots,life_storage_cap];

lbClear _yourItems;
lbClear _lockerItems;

/* Load your current items */ 
_config = [];
if(primaryWeapon player != "") then {_config pushBack primaryWeapon player;};
if(secondaryWeapon player != "") then {_config pushBack secondaryWeapon player;};
if(handgunWeapon player != "") then {_config pushBack handgunWeapon player;};
if(uniform player != "") then {_config pushBack uniform player;};
if(vest player != "") then {_config pushBack vest player;};
if(backpack player != "") then {_config pushBack backpack player;};
if(goggles player != "") then {_config pushBack goggles player ;};
if(headgear player != "") then {_config pushBack headgear player;};
_config = _config + (assignedItems player);
_config = _config + (uniformItems player);
_config = _config + (vestItems player);
_config = _config + (backPackItems player);
_config = _config + (primaryWeaponItems player);

/* Filter stored/inv virtual items */  
if (_filterType isEqualTo 1) then {	
	_itemArray = life_storage select 3;
	CONTROL(14000,14004) ctrlEnable true;
	CONTROL(14000,14003) ctrlEnable true;

	{
		if(ITEM_VALUE(configName _x) > 0) then {
			_yourItems lbAdd format["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
			_yourItems lbSetData [(lbSize _yourItems)-1,configName _x];
			_icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
			if(!(EQUAL(_icon,""))) then {
				_yourItems lbSetPicture [(lbSize _yourItems)-1,_icon];
			};
		};
	} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

	{
		_itemCfg = _x select 0;
		_itemAmount = _x select 1;
		_displayName = M_CONFIG(getText,"VirtualItems",_itemCfg,"displayName");
		_lockerItems lbAdd format["%2 [x%1]",_itemAmount,localize _displayName];
		_lockerItems lbSetData [(lbSize _lockerItems)-1,_itemCfg];
		_lockerItems lbSetValue [(lbSize _lockerItems)-1,_itemAmount];
		_icon = M_CONFIG(getText,"VirtualItems",_itemCfg,"icon");
		if(!(EQUAL(_icon,""))) then {
			_lockerItems lbSetPicture [(lbSize _lockerItems)-1,_icon];
		};
	}forEach _itemArray;
};


/* Filter stored/inv physical gear */ 

if (_filterType isEqualTo 2) then {	

	//Till I improve this system you can only store/take 1 virtual item at a time
	//Sort buttons accordingly
	CONTROL(14000,14004) ctrlSetText "1";
	CONTROL(14000,14004) ctrlSetText "1";
	CONTROL(14000,14004) ctrlEnable false;
	CONTROL(14000,14003) ctrlEnable false;
	

	_gearArray = life_storage select 2;

	{
		_itemClass = _x select 0;
		_itemAmount = _x select 1;
		_itemInfo = [_itemClass] call life_fnc_fetchCfgDetails;
		_lockerItems lbAdd format["[x%1] %2",_itemAmount, _itemInfo select 1];
		_lockerItems lbSetData [(lbSize _lockerItems)-1,_itemClass];
		_lockerItems lbSetValue [(lbSize _lockerItems)-1,0];
		_lockerItems lbSetPicture [(lbSize _lockerItems)-1,_itemInfo select 2];
	}forEach _gearArray;

	_listedItems = [];
	{
		if(!(_x in _listedItems) && _x != "") then {
			_itemInfo = [_x] call life_fnc_fetchCfgDetails;
			_listedItems pushBack _x;
			
			_itemCount = {_x == (_itemInfo select 0)} count _config;
			if(_itemCount > 1) then {
				_yourItems lbAdd format["[x%2] %1",_itemInfo select 1,_itemCount];
			} else {
				_yourItems lbAdd format["%1",_itemInfo select 1];
			};
			_yourItems lbSetData[(lbSize _yourItems)-1,_itemInfo select 0];
			_yourItems lbSetPicture[(lbSize _yourItems)-1,_itemInfo select 2];
		};
	}forEach _config;
};

