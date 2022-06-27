/*
	File: fn_immatriculeVehSet.sqf

	Autor: Iron
*/
diag_log "fn_immatriculeVehSet";
private ["_immatriculation", "_vehicle", "_cfgImma", "_function", "_setFunc"];
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_immatriculation = [_this,1,"",[""]] call BIS_fnc_param;
_setFunc = [_this,2,true,[true]] call BIS_fnc_param;

_cfgImma = [_vehicle] call life_fnc_immatriculeGetVehCfg;

_vehicle setPlateNumber _immatriculation;

_function = (_cfgImma select 1);

if (_function != "" && _setFunc) then {
	[_vehicle, _immatriculation] call (call (compile _function));
};