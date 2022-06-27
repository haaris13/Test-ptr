/*
	File: fn_shellGetParentDir.sqf

	Autor:IronBlade
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1",_compShell], []];
_actualPath deleteAt ((count _actualPath) - 1);

_next = [];

_path = (_cfgArray select 3);
_next = _path;

_folders = _path select 0;

{
	_name = _x;
	{

		_currFolder = _x;
		_currID = _x select 0;
		_currName = _x select 1;
		
		if (_name == _currName) exitWith {
			_path = _x;
			_folders = (_x select 2) select 0;
		};
	} forEach _folders;

	_next = _path;
} forEach _actualPath;

_next;