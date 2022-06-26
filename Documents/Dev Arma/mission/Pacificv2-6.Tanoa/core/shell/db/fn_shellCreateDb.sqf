#include "..\..\..\script_macros.hpp"
#include "..\script_macro_shell.hpp"
/*
	File: fn_shellCreateDB.sqf

	Autor: IronBlade
*/
_comp = [_this,0,[],[[]]] call BIS_fnc_param;
_type = [_this,1,"Personal",[""]] call BIS_fnc_param;

[player, _comp, _type] remoteExecCall ["TON_fnc_shellCreatePlayer", RSERV];

diag_log str(_comp);