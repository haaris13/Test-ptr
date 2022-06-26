#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File:fn_furnaceListLeftLbChange.sqf

	Autor:IronBlade
*/
diag_log "fn_furnaceListLeftLbChange";

disableSerialization;

_cfgData = CONTROL_DATA(Listleft);

if (_cfgData == "") exitWith {diag_log "_cfgData is nil";};

_cfgFurnace = (missionConfigFile >> "CfgFurnace");

_itemRequiredArrayD = getArray(_cfgFurnace >> _cfgData >> "Required");
_itemRequiredCfgD = (_itemRequiredArrayD select 0);
_itemRequiredQtyD = (_itemRequiredArrayD select 1);
_displayName = getText(_cfgItems >> _itemRequiredCfgD >> "displayName");
_price = getNumber(_cfgFurnace >> _cfgData >> "Cost");

_amountD = ITEM_VALUE(_itemRequiredCfgD);

if (_itemRequiredQtyD > _amountD) exitWith {
	(CONTROL(Dialog_Furnace,CostArea)) ctrlSetStructuredText parseText format["<t size='0.9' color='#b70000'>Quantité insuffisante (%1/%2).</t>", _amountD, _itemRequiredQtyD];
};

_price = _price * _amountD;

if (_price > CASH) then {
	(CONTROL(Dialog_Furnace,CostArea)) ctrlSetStructuredText parseText format ["<t size='0.9'>Coût: <t color='#b70000'>$%1</t>",[(_price)] call life_fnc_numberText];
} else {
	(CONTROL(Dialog_Furnace,CostArea)) ctrlSetStructuredText parseText format ["<t size='0.9'>Coût: <t color='#b2ec00'>$%1</t>",[(_price)] call life_fnc_numberText];
};