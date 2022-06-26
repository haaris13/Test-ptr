#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File:fn_shellPrint.sqf

	Autor:IronBlade
*/
_text = [_this,0,"",[""]] call BIS_fnc_param;
_showD = [_this, 1, false, [false]] call BIS_fnc_param;

disableSerialization;

_type = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_shellList = uiNamespace getVariable [format["life_shell_list_%1",_type], []];

_list = CONTROL(ShellDialog, ListShell);

if (_showD) then {
	_show = [] call life_fnc_shellGetCfgShow;
	_text = format ["%1%2", _show, _text];
};

_list lbAdd format["%1", _text];
_list lbSetData[(lbSize _list)-1,""];
_list lbSetValue[(lbSize _list)-1, (lbSize _list)-1];

_list lbSetCurSel ((lbSize _list)-1);

_shellList pushBack _text;

uiNamespace setVariable [format["life_shell_list_%1",_type], _shellList];