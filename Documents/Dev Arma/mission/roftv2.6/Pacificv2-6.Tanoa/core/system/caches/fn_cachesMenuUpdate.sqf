#include "..\..\..\script_macros.hpp"
/*
	File: fn_cachesMenuUpdate.sqf

	Autor: Iron
*/
private ["_display", "_tInv", "_pInv", "_cacheData", "_vItemSpace", "_cfgCaches", "_data"];
disableSerialization;
_display = findDisplay 4100;

_cfgCaches = (missionConfigFile >> "CfgCaches" >> "Config");
_vItemSpace = getNumber(_cfgCaches >> "vItemSpace");

_cacheData = [_vItemSpace, life_cache_current_trunk select 1];
ctrlSetText[4104, format["Cache: %1/%2", _cacheData select 1, _cacheData select 0]];

_tInv = _display displayCtrl 4102;
_pInv = _display displayCtrl 4103;
lbClear _tInv;
lbClear _pInv;

_data = life_cache_current_trunk select 0;

//Player Inventory Items
{
	_val = ITEM_VALUE(configName _x);
	
	if(_val > 0) then {
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