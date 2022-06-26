/*
	File:fn_shellReturnComp.sqf

	Autor:IronBlade
*/
_comp = [_this,0,[],[[]]] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;

if (count _comp == 0) exitWith {};

uiNamespace setVariable [format["life_shell_cfg_%1",_type], _comp];