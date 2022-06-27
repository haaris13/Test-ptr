/*
	File:fn_vehicleCacheDialog.sqf

	Autor:IronBlade
*/
if (isNull life_vehicle_cache) exitWith {};
_vehicle = life_vehicle_cache;
_distance = ((boundingBox _vehicle select 1) select 0) + 2;
if(player distance _vehicle > _distance) exitWith {};
_cfg = (missionConfigFile >> "CfgVehicleCaches" >> life_vehicle_cache_cfg);

_displayName = getText(_cfg >> "displayName");

if(!dialog) then {
	createDialog "TrunkMenuCache";
};
disableSerialization;

_classVeh = typeOf _vehicle;

_trunkSize = getNumber(missionConfigFile >> "CfgVehicles" >> _classVeh >> "caches" >> life_vehicle_cache_cfg);

_veh_data = [_vehicle, life_vehicle_cache_cfg] call life_fnc_vehicleGetCache;
_used = (_veh_data select 0) select 2;

ctrlSetText[3601,format["%1 %2",getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"), _displayName]];
ctrlSetText[3604,format[(localize "STR_MISC_Weight")+ " %1/%2", _used, _veh_data select 1]];

[_vehicle] call life_fnc_vehicleCacheInv;

_vehicle spawn {
	waitUntil {isNull (findDisplay 3600)};

	_this setVariable["trunk_cache_use",false,true];
};