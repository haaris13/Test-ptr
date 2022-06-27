#include "..\..\..\script_macros.hpp"
/*
	File: fn_vehicleCacheInv.sqf
	Author: IronBlade
*/
_veh = param [0,ObjNull,[ObjNull]];
if(isNull _veh OR !alive _veh) exitWith {closeDialog 0;}; //If null / dead exit menu
disableSerialization;

_tInv = CONTROL(3600,3602);
_pInv = CONTROL(3600,3603);
lbClear _tInv;
lbClear _pInv;

_vehicle = life_vehicle_cache;

_veh_data = [_vehicle, life_vehicle_cache_cfg] call life_fnc_vehicleGetCache;
_invData = (_veh_data select 0);
_used = _invData select 2;
_invArray = _invData select 1;

ctrlSetText[3604,format[(localize "STR_MISC_Weight")+ " %1/%2", _used, _veh_data select 1]];

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
} foreach _invArray;