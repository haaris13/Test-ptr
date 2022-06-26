/*
	File:fn_shellGetNextFiles.sqf

	Autor:IronBlade
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell", ""];

_dir = [] call life_fnc_shellGetDir;

_nextFiles = _dir select 1;

_files = [];

{
	_idFile = _x select 0;
	_nameFile = _x select 1;

	_condShow = getText(missionConfigFile >> "CfgShell" >> "CompShell" >> _compShell >> "Files" >> _nameFile >> "conditionShow");

	_can = true;
	if (_condShow != "") then {
		_can = call (compile _condShow);
	};

	if (_can) then {
		_files pushBack _nameFile;
	};
} forEach _nextFiles;

_files;