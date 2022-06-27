/*
	File: fn_smartMarkerFindLodConfig.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
private ["_configs", "_lod", "_nbOfConfig"];
_configs = _this select 0;
_lod = _this select 1;

_nbOfConfig = count _configs;

if (_nbOfConfig < (_lod + 1)) exitWith {
	_configs select 0;
};

_configs select _lod;