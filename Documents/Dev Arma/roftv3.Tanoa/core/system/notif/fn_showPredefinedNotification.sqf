/*
	File : fn_showPredefinedNotification.sqf

	Author: IronBlade

*/
_configName = [_this,0,"",[""]] call BIS_fnc_param;
_description = [_this,1,"",[""]] call BIS_fnc_param;
_title = [_this,2,"",[""]] call BIS_fnc_param;

_cfgNotification = (missionConfigFile >> "CfgNotification");
_cfgCurrent = (_cfgNotification >> "Patterns" >> _configName);

if (!isClass(_cfgCurrent)) exitWith {
	diag_log format["Error: Config %1 of CfgNotification >> Patterns is not exist.", _configName];
};


_color = getArray(_cfgCurrent >> "color");
_sound = getText(_cfgCurrent >> "sound");
_defaultTitle = getText(_cfgCurrent >> "defaultTitle");

if (_title == "") then {
	_title = _defaultTitle;
};

[_title, _description, _color, _sound] spawn life_fnc_showNotification;