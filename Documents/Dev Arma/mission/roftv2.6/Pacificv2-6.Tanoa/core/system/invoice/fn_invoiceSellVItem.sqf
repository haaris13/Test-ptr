/*
	File: fn_invoiceSellVItem.sqf
	
	Author: Iron
*/
_vItem = [_this,0,"",[""]] call BIS_fnc_param;
_nb = [_this,1,0,[0]] call BIS_fnc_param;
_amoutPrice = [_this,2,0,[0]] call BIS_fnc_param;

if (playerSide != civilian) exitWith {};

_cfgIllegal = (missionConfigFile >> "CfgIllegal");
_cfgItem = (_cfgIllegal >> "VirtualItems" >> _vItem);

if (!(isClass _cfgItem)) exitWith {};

_xpFactor = getNumber(_cfgItem >> "xpFactor");

if (_xpFactor > 0) then {
	_xp = floor(((_xpFactor * _nb) / 100) * 13);
	["sellVItem", _xp] call life_fnc_addXP;
};

if (getNumber(_cfgItem >> "legal") == 0) exitWith {
	[_vItem, _amoutPrice] spawn life_fnc_invoiceAddIllegalProfit;
};

if (getNumber(_cfgItem >> "invoiceOnSell") == 0) exitWith {};

_invoice = getText(_cfgItem >> "invoiceType");

if (_invoice == "") exitWith {};

_cfgInvoice = (_cfgIllegal >> "Invoices" >> _invoice);

_can = true;
_cond = getText(_cfgInvoice >> "condition");

if (_cond != "") then {
	_can = call (compile _cond);
};

if (!_can) exitWith {
	[_vItem, _amoutPrice] spawn life_fnc_invoiceAddIllegalProfit;
};

life_bank_can_depose = life_bank_can_depose + _amoutPrice;
[14] call SOCK_fnc_updatePartial;

_papierCont = getText(_cfgInvoice >> "text");
_papierTitle = getText(_cfgInvoice >> "title");
_papierSign = getText(_cfgInvoice >> "signature");

_itemName = getText(missionConfigFile >> "VirtualItems" >> _type >> "displayName");
_time = [true] call life_fnc_realTimeToStr;

_papierCont = format[_papierCont, _nb, localize _itemName, _amoutPrice, _time];

life_papiers_list pushBack [_papierTitle, _papierCont, _papierSign, (getPlayerUID player)];
[] spawn life_fnc_papierSave;

["Info", "La facture de la vente à été ajouté dans les papiers."] spawn life_fnc_showPredefinedNotification;
