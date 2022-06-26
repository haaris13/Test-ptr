/*
	File: fn_shellRunCan.sqf

	Autor:IronBlade
*/
_file = [_this,0,"",[""]] call BIS_fnc_param;
_cfgFile = (missionConfigFile >> "CfgShell" >> "Programs" >> _file);
_cond = getText(_cfgFile >> "conditionOpen");

_can = true;

if (_cond != "") then {
	_can = call (compile _cond);
};

_can;