/*
	File: fn_immatriculeGetVehCfg.sqf

	Autor: Iron
*/
private ["_veh", "_cfg", "_cfg", "_cfgVeh", "_type", "_cfgImmaType", "_function", "_immaSize"];
_veh = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _veh) exitWith {
	[0, ""];
};

_cfg = (missionConfigFile >> "CfgImmatriculationTags");
_cfgVeh = (_cfg >> (typeOf _veh));

if (!(isClass _cfgVeh)) exitWith {
	[0, ""];
};

_type = getText(_cfgVeh >> "immaCfg");
if (_type == "") exitWith {
	[9, ""];
};

_cfgImmaType = (_cfg >> _type);

if (!(isClass _cfgImmaType)) exitWith {
	[9, ""];
};

_function = getText(_cfgImmaType >> "function");
_immaSize = getNumber(_cfgImmaType >> "immaSize");

[_immaSize, _function];