#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File:fn_furnaceActionDrop.sqf

	Autor:IronBlade
*/

_cfgData = CONTROL_DATA(Listleft);

if (_cfgData == "") exitWith {};

disableSerialization;

// Init Config
_cfgFurnace = (missionConfigFile >> "CfgFurnace");
_cfgItems = (missionConfigFile >> "VirtualItems");

_itemRequiredArrayD = getArray(_cfgFurnace >> _cfgData >> "Required");
_itemRequiredCfgD = (_itemRequiredArrayD select 0);
_itemRequiredQtyD = (_itemRequiredArrayD select 1);
_displayName = getText(_cfgItems >> _itemRequiredCfgD >> "displayName");
_price = getNumber(_cfgFurnace >> _cfgData >> "Cost");

_amountD = ITEM_VALUE(_itemRequiredCfgD);

_price = _price * _amountD;

if (_itemRequiredQtyD > _amountD) exitWith {
	["Error", format["Il est nécessaire d'avoir au moins %1 %2 pour pouvoir y mettre dans le four !", _itemRequiredQtyD, localize _displayName]] spawn life_fnc_showPredefinedNotification;
};

if (!(life_furnace_config isEqualTo [])) exitWith {
	["Error", "Le Four est déja plein !"] spawn life_fnc_showPredefinedNotification;
};

if (_price > CASH) exitWith {
	["Error", "Vous n'avez pas l'argent nécessaire sur vous."] spawn life_fnc_showPredefinedNotification;
};

if (_amountD == 0) exitWith {diag_log "bad amount";};

if(!([false, _itemRequiredCfgD, _amountD] call life_fnc_handleInv)) exitWith {["Error", "Vous n'avez pas le nécessaire !"] spawn life_fnc_showPredefinedNotification;};

(CONTROL(Dialog_Furnace,CostArea)) ctrlSetStructuredText parseText "";

life_cash = life_cash - _price;
[0] call SOCK_fnc_updatePartial;

[] call life_fnc_furnaceSetupDiag;

[[_itemRequiredCfgD, _amountD], life_furnace_temp] call life_fnc_furnaceSetDiag;

[[_itemRequiredCfgD, _amountD], _cfgData] spawn life_fnc_furnaceSystem;