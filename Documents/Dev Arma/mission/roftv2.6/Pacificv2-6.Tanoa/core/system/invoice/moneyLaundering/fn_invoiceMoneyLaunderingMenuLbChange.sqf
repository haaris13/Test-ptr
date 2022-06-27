/*
	File: fn_invoiceMoneyLaunderingMenuLbChange.sqf
		
	Author: IronBlade
*/

private["_display","_list","_type","_amount"];

disableSerialization;
_display = findDisplay 16300;
_list = _display displayCtrl 16301;
_info = _display displayCtrl 16302;
_btn = _display displayCtrl 16303;

_type = (_list lbData (lbCurSel _list));
_amount = (_list lbValue (lbCurSel _list));

_moneyLaundering = (missionConfigFile >> "CfgIllegal" >> "MoneyLaundering" >> "CasesLaundering" >> _type);

if (!isClass(_moneyLaundering)) exitWith {diag_log format["Not class %1", _type];};
_price = getNumber(_moneyLaundering >> "moneyResult");

_info ctrlSetStructuredText parseText format ["<t size='1'>Gains: <t color='#b2ec00'>$%1</t>",[(_price)] call life_fnc_numberText];
_btn ctrlEnable true;