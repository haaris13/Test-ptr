/*
	File:fn_shellDirDelete.sqf
	
	Autor:IronBlade
*/
_dir = [_this,0,"",[""]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1",_compShell], []];

_path = [] call life_fnc_shellGetPath;

_idComp = (_cfgArray select 0);

if (count _path == 2) then {
	_id = 0;
	{
		if (_dir isEqualTo (_x select 1)) exitWith {
			_id = ((_path select 0) select _forEachIndex) select 0;
			((_path select 0)) deleteAt _forEachIndex;
		};
	} forEach (_path select 0);

	["delete", _id, _dir, "", _idComp] call life_fnc_shellGestionDir;
} else {

	_id = 0;
	_dirs = ((_path select 2) select 0);
	{
		if (_dir isEqualTo (_x select 1)) exitWith {
			_id = (_dirs select _forEachIndex) select 0;
			_dirs deleteAt _forEachIndex;
		};
	} forEach _dirs;
	["delete", _id, _dir, "", _idComp] call life_fnc_shellGestionDir;
};