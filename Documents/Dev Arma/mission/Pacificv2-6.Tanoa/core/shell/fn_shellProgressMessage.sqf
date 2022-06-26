#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File: fn_shellProgressMessage.sqf

	Autor: IronBlade
*/

_arrayMessage = [_this,0,[],[[]]] call BIS_fnc_param;
_withUser = [_this,1,false,[false]] call BIS_fnc_param;
_varCheck = [_this,2, "",[""]] call BIS_fnc_param;

disableSerialization;

_type = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_shellList = uiNamespace getVariable [format["life_shell_list_%1",_type], []];

_list = CONTROL(ShellDialog, ListShell);

_text = "";

if (_withUser) then {
	_show = [] call life_fnc_shellGetCfgShow;
	_text = format ["%1%2", _show, _text];
};

_list lbAdd format["%1", _text];

{
	_messages = _x select 0;
	_time = _x select 1;

	for "_i" from 0 to _time do {
		{
		  _list lbDelete ((lbSize _list)-1);
		  _list lbAdd format["%1%2", _text, _x];
		  uiSleep 0.2;
		} forEach _messages;
	};
	
	_shellList pushBack _text;
} forEach _arrayMessage;

_list lbSetCurSel ((lbSize _list)-1);

uiNamespace setVariable [_varCheck, true];