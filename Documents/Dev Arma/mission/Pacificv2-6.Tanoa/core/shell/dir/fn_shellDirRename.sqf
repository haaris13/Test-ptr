/*
	File:fn_shellDirRename.sqf
	
	Autor:IronBlade
*/
_dir = [_this,0,"",[""]] call BIS_fnc_param;
_new = [_this,1,"",[""]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1",_compShell], []];

_path = [] call life_fnc_shellGetPath;

_idComp = (_cfgArray select 0);

if (count _path == 2) then {
	_id = 0;
	{
		if (_dir isEqualTo (_x select 1)) exitWith {
			((_path select 0) select _forEachIndex) set [1, _new];
			_id = ((_path select 0) select _forEachIndex) select 0;
		};
	} forEach (_path select 0);

	["rename", _id, _dir, _new, _idComp] call life_fnc_shellGestionDir;
} else {

	_id = 0;
	_dirs = ((_path select 2) select 0);
	{
		if (_dir isEqualTo (_x select 1)) exitWith {
			(_dirs select _forEachIndex) set [1, _new];
			_id = (_dirs select _forEachIndex) select 0;
		};
	} forEach _dirs;
	["rename", _id, _dir, _new, _idComp] call life_fnc_shellGestionDir;
};