#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File: fn_furnaceInit.sqf

	Autor:IronBlade
*/
if (life_action_inUse) exitWith {};
if (playerside != civilian) exitWith {};
if (vehicle player != player) exitWith {};

_furnacePnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = _this select 3; // ["copper","tin"]...

disableSerialization;
createDialog 'Life_Dialog_Furnace';

["Farm","Furnace",true] spawn life_fnc_showHelp;

life_furnacePnj = _furnacePnj;
life_furnacePnj_type = _type;

[] call life_fnc_furnaceSetupDiag;

/*
	life_furnace_config = ["item",nb];
*/

[life_furnace_config, life_furnace_temp] spawn life_fnc_furnaceSetDiag;

[] spawn life_fnc_furnaceSound;