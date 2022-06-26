#include "..\..\..\script_macros.hpp"
#include "..\script_macro_shell.hpp"
/*
	File:fn_shellCreateSend.sqf

	Autor:IronBlade
*/
_text = [_this,0,"",[""]] call BIS_fnc_param;

uiNamespace setVariable ["life_shell_create_var", _text];
