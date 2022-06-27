/*
	File:fn_vehicleGetCache.sqf

	Autor:IronBlade
*/
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_cacheCfg = [_this,1,"",[""]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {};
_cfg = (missionConfigFile >> "CfgVehicleCaches" >> _cacheCfg);
_baseArray = "true" configClasses (missionConfigFile >> "CfgVehicleCaches");
_base = [];

{
	_name = (configName _x);
	_base pushBack [_name, [], 0]; // NameCfg, Array of Items, Use
} forEach _baseArray;

_caches = (_vehicle getVariable ["trunk_caches", _base]);
_index = getNumber(_cfg >> "index");
_current = _caches select _index;

_weight = getNumber(missionConfigFile >> "LifeCfgVehicles" >> (typeOf _vehicle) >> "caches" >> _cacheCfg >> "trunk");

[_current,_weight];