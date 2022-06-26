/*
	File: fn_invoiceMoneyLaunderingOpenMenu.sqf
		
	Author: IronBlade
*/

private["_amount","_available","_side","_list","_displayName","_price"];

if (playerSide != civilian) exitWith {
	["Error", "Hum."] spawn life_fnc_showPredefinedNotification;
};

if (life_money_laundering_processing) exitWith {};

if (!life_money_laundering_enable) exitWith {
	["Error", "Je ne vous connais pas vous."] spawn life_fnc_showPredefinedNotification;
};

if (!life_money_laundering_mrk_state) exitWith {
	["Error", "Blanchir à cette horaire ? Tu blagues j'espere ? Va cacher ton argent dans la forêt en attendant la nuit."] spawn life_fnc_showPredefinedNotification;
};

_moneyLaundering = (missionConfigFile >> "CfgIllegal" >> "MoneyLaundering" >> "CasesLaundering");

_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (isNull _vendor) exitWith {diag_log "Null _vendor";};

life_vendortarget = _vendor;

disableSerialization;
createDialog 'MoneyLaunderingDialog';

_display = findDisplay 16300;
_list = _display displayCtrl 16301;

{
	_cfg = _x;
	_name = configName(_x);
	_itemName = getText(_x >> "item");
	_moneyResult = getNumber(_x >> "moneyResult");

	_cfgItem = (missionConfigFile >> "VirtualItems" >> _itemName);
	_varItem = getText(_cfgItem >> "variable");

	_var = format["life_inv_%1", _varItem];
	_nbItem = missionNamespace getVariable[_var, 0];

	if (_nbItem > 0) then {
		_icon = getText(_cfgItem >> "icon");
		_displayName = getText(_cfgItem >> "displayName");

		_list lbAdd format["%1 [x%2]", localize _displayName, _nbItem];
		_list lbSetData[(lbSize _list)-1, _name];
		_list lbSetValue[(lbSize _list)-1, _moneyResult];

		if (_icon != "") then {
			_list lbSetPicture [(lbSize _list)-1, _icon];
		};
	};
} forEach ("true" configClasses _moneyLaundering);

_btn = _display displayCtrl 16303;
_btn ctrlEnable false;