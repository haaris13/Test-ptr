/*
	File: fn_fluidVehConvertLtoF.sqf

	Autor: IronBlade
*/
_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_litre = [_this,1,0,[0]] call BIS_fnc_param;

if (isNull _veh) exitWith {};

_type = typeOf _veh;

_cfgVehicle = (missionConfigFile >> "LifeCfgVehicles");

_num = getNumber(_cfgVehicle >> _type >> "reservoir");

if (_num == 0) then { _num = getNumber(configFile >> "CfgVehicles" >> _type >> "fuelCapacity")};

_fuel = fuel _veh;
_return = (_litre / _num);
_return = _return + _fuel;
_return;