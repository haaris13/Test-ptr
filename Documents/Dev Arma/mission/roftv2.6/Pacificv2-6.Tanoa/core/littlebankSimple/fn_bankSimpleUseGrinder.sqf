#include "..\..\script_macros.hpp"
/*
	File: fn_bankSimpleUseGrinder.sqf


	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankSimpleNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

if (ITEM_VALUE("disqueuse") < 1 ) exitWith {
	["Error", "Il vous faut une disqueuse !"] spawn life_fnc_showPredefinedNotification;
};

_bankConfig = (_bankNear select 0);
_build = (_bankNear select 1);

_curCfg = (missionConfigFile >> "CfgLittleBankSimple" >> "Banks" >> _bankConfig);

_doors = getArray(_curCfg >> "doors");

_door2 = (_doors select 1);
_classDoor2 = (_door2 select 0);
_posDoor2 = (_door2 select 1);

_distanceDoor2 = (player distance _posDoor2);

if (_distanceDoor2 < 2 && !(_build getVariable ["open_vault2", false])) exitWith {
	[] spawn life_fnc_breakDoor2BankSimple;
};

_chestArray = getArray(_curCfg >> "chest");

_classChest = (_chestArray select 0);
_posChest = (_chestArray select 1);

_distanceChest = (player distance _posChest);

if (_distanceChest < 3) exitWith {
	if (isNil 'life_bank_simple_wait_grinder') then {
		[] spawn life_fnc_breakChestBankSimple;
	} else {
		if (life_bank_simple_wait_grinder) then {
			life_bank_simple_wait_grinder = false;
		} else {
			[] spawn life_fnc_breakChestBankSimple;
		};
	};
};

["Error", "Il faut être près de la porte intérieure ou du coffre de la banque."] spawn life_fnc_showPredefinedNotification;