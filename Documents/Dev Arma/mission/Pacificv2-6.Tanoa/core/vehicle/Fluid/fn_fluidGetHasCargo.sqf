/*
	File: fn_fluidGetHasCargo.sqf

	Autor: IronBlade
*/
_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = typeOf _veh;

_cfgVehicle = (missionConfigFile >> "LifeCfgVehicles");

_num = getNumber(_cfgVehicle >> _type >> "citerne");

_return = false;

if (_num <= 0) then {
	_return = false;
} else {
	_return = true;
};

_return;