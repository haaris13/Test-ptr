/*
	File: fn_shellGetUser.sqf

	Autor: IronBlade
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell", ""];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1",_compShell], [0,"ns45dz"]];
_curUser = uiNamespace getVariable [format["life_shell_user_%1",_compShell], [0,"noUser",""]];
_user = format["%1@%2", (_curUser select 1), (_cfgArray select 1)];

_user;