/*
	File: fn_shellDirCreate.sqf

	Autor:IronBlade
*/
_dir = [_this,0,"",[""]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1",_compShell], []];

_path = [] call life_fnc_shellGetPath;

_idComp = (_cfgArray select 0);

if (count _path == 2) then {
	(_path select 0) pushBack [0, _dir, [[],[]]];
	
	["create",0,_dir, "", _idComp] call life_fnc_shellGestionDir;
} else {
	_idParent = (_path select 0);
	((_path select 2) select 0) pushBack [0, _dir, [[],[]]];

	["create", _idParent, _dir, "", _idComp] call life_fnc_shellGestionDir;
};