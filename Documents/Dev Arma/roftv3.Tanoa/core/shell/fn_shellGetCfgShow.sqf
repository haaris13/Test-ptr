/*
	File:fn_shellGetCfgShow.sqf

	Autor:IronBlade

	Return current Path
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];

_user = [] call life_fnc_shellGetUser;

_show = format["%1:/", _user];

{
	_show = format["%1%2/", _show, _x];
} forEach _actualPath;

_show;