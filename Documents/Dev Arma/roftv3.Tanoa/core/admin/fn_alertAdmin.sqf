#include "..\..\script_macros.hpp"
/*
	Name: AlertAdmin.sqf

	Autor: IronBlade
*/

_log = [_this,0,"",[""]] call BIS_fnc_param;

if ((typeName life_adminlevel) isEqualTo (typeName 0)) exitWith {};

if(FETCH_CONST(life_adminlevel) < 2) exitWith {};

if !(life_alertAdmin) exitWith {};

["AlertAdmin",[_log]] call BIS_fnc_showNotification;