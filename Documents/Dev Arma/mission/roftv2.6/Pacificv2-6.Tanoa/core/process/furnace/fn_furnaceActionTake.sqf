#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File: fn_furnaceActionTake.sqf

	Autor:IronBlade
*/

if (life_furnace_config isEqualTo []) exitWith {};

_item = life_furnace_config select 0;
_amount = life_furnace_config select 1;

if(!([true, _item, _amount] call life_fnc_handleInv)) exitWith {["Error", "Vous n'avez pas assez de place !"] spawn life_fnc_showPredefinedNotification;};

life_furnace_config = [];
[[], life_furnace_temp] call life_fnc_furnaceSetDiag;
[] call life_fnc_furnaceSetupDiag;