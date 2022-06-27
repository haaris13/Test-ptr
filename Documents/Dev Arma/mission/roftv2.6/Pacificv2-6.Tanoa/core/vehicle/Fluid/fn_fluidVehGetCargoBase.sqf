/*
	File: fn_fluidVehGetCargoBase.sqf

	Autor: IronBlade
*/
_vehToGet = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = typeOf _vehToGet;

_cfgVehicle = (missionConfigFile >> "LifeCfgVehicles");

_num = getNumber(_cfgVehicle >> _type >> "citerne");
_num;