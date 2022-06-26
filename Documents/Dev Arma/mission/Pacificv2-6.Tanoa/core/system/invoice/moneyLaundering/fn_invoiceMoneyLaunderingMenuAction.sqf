/*
    File: fn_invoiceMoneyLaunderingMenuAction.sqf
        
    Author: IronBlade
*/

disableSerialization;
_display = findDisplay 16300;
_list = _display displayCtrl 16301;
_info = _display displayCtrl 16302;
_btn = _display displayCtrl 16303;

if (life_action_inUse) exitWith {};
if (life_is_processing) exitWith {};

if ((player distance life_vendortarget) > 8) exitWith {
    ["Error", "Vous étes trop loin.."] spawn life_fnc_showPredefinedNotification; 
}; 

_type = (_list lbData (lbCurSel _list));
_amount = (_list lbValue (lbCurSel _list));

//Error check
if (_type == "") exitWith {};

_moneyLaundering = (missionConfigFile >> "CfgIllegal" >> "MoneyLaundering" >> "CasesLaundering" >> _type);

if (!isClass(_moneyLaundering)) exitWith {diag_log format["Not class %1", _type];};

_itemName = getText(_moneyLaundering >> "item");
_moneyResult = getNumber(_moneyLaundering >> "moneyResult");
_needLaundering = getNumber(_moneyLaundering >> "needLaundering");
_xp = getNumber(_moneyLaundering >> "xp");

_cfgItem = (missionConfigFile >> "VirtualItems" >> _itemName);
_varItem = getText(_cfgItem >> "variable");

_var = format["life_inv_%1", _varItem];
_nbItem = missionNamespace getVariable[_var, 0];

if (_nbItem == 0) exitWith {
    ["Error", "Vous ne disposez pas de suffisamment d'objets !"] spawn life_fnc_showPredefinedNotification;
};

if (life_money_laundering < _needLaundering) exitWith {
    ["Error", "Je vous connais pas assez, je prend d'abord des sacs plus petit. Vous pourrez faire ça plus tard !"] spawn life_fnc_showPredefinedNotification;    
};

life_action_inUse = true;
closeDialog 0;

_upp = "Blanchiment de l'argent.";

//Setup our progress bar.
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.015;

life_is_processing = true;

for "_i" from 0 to 1 step 0 do {
    sleep  0.28;
    _cP = _cP + _cpRate;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
    if (_cP >= 1) exitWith {};
    if (player distance life_vendortarget > 10) exitWith {};
};

5 cutText ["","PLAIN"]; 
life_is_processing = false; 
life_action_inUse = false;

if (player distance life_vendortarget > 10) exitWith {
    ["Error", "Vous êtes parti trop loin"] spawn life_fnc_showPredefinedNotification;
};

_nbItem = missionNamespace getVariable[_var, 0];

if (_nbItem == 0) exitWith {
    ["Error", "Vous ne disposez pas de suffisamment d'objets !"] spawn life_fnc_showPredefinedNotification;
};

if(!([false,_varItem, _nbItem] call life_fnc_handleInv)) exitWith {};

_itemCaseCfg = (missionConfigFile >> "CfgCaseMoney" >> "Cases" >> _itemName);
_itemMoney = getNumber(_itemCaseCfg >> "maxMoney");

_cashAdd = _nbItem * _moneyResult;
life_cash = life_cash + _cashAdd;
life_bank_can_depose = life_bank_can_depose + _cashAdd;
life_money_laundering = life_money_laundering + (_nbItem * _itemMoney);

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
[14] call SOCK_fnc_updatePartial;
[16] call SOCK_fnc_updatePartial;

["MoneyLaundering", round(_nbItem * _xp)] call life_fnc_addXP;

_items = "true" configClasses (missionConfigFile >> "CfgIllegal" >> "VirtualItems");

_bad = true;
_item = selectRandom _items;

while {_bad} do {
    _name = configName(_item);

    if (!("Default" in _name) && (_name != "refuel_oil") && (getNumber(_item >> "invoiceOnSell") == 1)) exitWith {_bad = false;};
    
    _item = selectRandom _items; 
};

_invoice = getText(_item >> "invoiceType");

_cfgInvoice = (missionConfigFile >> "CfgIllegal" >> "Invoices" >> _invoice);

_papierCont = getText(_cfgInvoice >> "text");
_papierTitle = getText(_cfgInvoice >> "title");
_papierSign = getText(_cfgInvoice >> "signature");

_itemName = getText(missionConfigFile >> "VirtualItems" >> (configName(_item)) >> "displayName");
_time = [true] call life_fnc_realTimeToStr;

_nb = round(_cashAdd / 650);

if (_nb <= 0) then {
    _nb = 1;
};

_papierCont = format[_papierCont, _nb, localize _itemName, _cashAdd, _time];

life_papiers_list pushBack [_papierTitle, _papierCont, _papierSign, (getPlayerUID player)];
[] spawn life_fnc_papierSave;

["Info", "Ravis d'avoir fait affaire avec vous."] spawn life_fnc_showPredefinedNotification;
