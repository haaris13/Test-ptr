/*
	File: fn_hasDlc.sqf

	Autor: Iron
*/
private ["_class", "_cfgDlc", "_cfgClass", "_dlcs", "_dlcClass", "_dlcId"];
_class = [_this,0,"",[""]] call BIS_fnc_param;

_cfgDlc = (missionConfigFile >> "CfgDlc");
_cfgClass = (_cfgDlc >> "Classes" >> _class);

if (!(isClass(_cfgClass))) exitWith {true;};

_dlcs = getDLCs 1;

_dlcClass = getText(_cfgClass >> "dlc");

_dlcId = getNumber(_cfgDlc >> "Dlc" >> _dlcClass >> "id");

(_dlcId in _dlcs);