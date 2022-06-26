/*
	File:fn_shellCheckFileExist.sqf

	Auto:IronBlade
*/
_fileStr = [_this,0,"",[""]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

if (_file isEqualTo "") exitWith {false;};

_files = [] call life_fnc_shellGetNextFiles;

_fileArray = (_fileStr splitString ".") select 0;
_file = _fileArray select 1;

if !(_file in _files || (count _fileArray != 2)) exitWith {false;};

_ext = _fileArray select 1;
_extFile = getText(missionConfigFile >> "CfgShell" >> "Programs" >> _file >> "extention");

if (_ext != _extFile) exitWith {false;};