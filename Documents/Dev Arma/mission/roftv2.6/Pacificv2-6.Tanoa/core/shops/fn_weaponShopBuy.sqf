#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopBuy.sqf
	Author: IronBlade
	
	Description:
	Master handling of the weapon shop for buying / selling an item.
*/
disableSerialization;
private["_priceBase","_item","_itemInfo","_bad","_type","_addItem","_config"];
if((lbCurSel 38403) == -1) exitWith {["Error", localize "STR_Shop_Weapon_NoSelect"] spawn life_fnc_showPredefinedNotification;};
_priceBase = lbValue[38403,(lbCurSel 38403)]; 
_item = lbData[38403,(lbCurSel 38403)];
_addItem = false;
if(isNil "_priceBase") exitWith {["Error", "Une erreur est survenue !"] spawn life_fnc_showPredefinedNotification;;};

if((time - life_action_delay) < 0.2) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_itemInfo = [_item] call life_fnc_fetchCfgDetails;

_shop = uiNamespace getVariable ["Weapon_Shop",""];
_index = uiNamespace getVariable["Weapon_Shop_Filter",0];

switch (_index) do {
	case 0: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"primary");};
	case 1: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"secondary");};
	case 2: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"ammo");};	
	case 3: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"attachments");};	
	case 4: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"other");};	
};

_legal = getNumber(missionConfigFile >> "WeaponShops" >> _shop >> "legal");

_canBuy = true;
_found = false;
_cond = "";
_price = 0;

{
	_class = (_x select 0);
  	if (_item isEqualTo _class) exitWith {
  		_found = true;
  		if ((count _x) == 4) then {
  			_cond = (_x select 3) select 0;
  		};

  		_price = (_x select 2);
  	};
} forEach _config;

if (_cond != "") then {
	_canBuy = [] call (compile _cond);
};

if (!_found) exitWith {["Error", "L'objet recherché n'a pas été trouvé !"] spawn life_fnc_showPredefinedNotification;};
if (!_canBuy) exitWith {["Error", "Vous n'avez pas débloqué cette arme !"] spawn life_fnc_showPredefinedNotification;};

//Check if player has space to add	
_bad = "";
if((_itemInfo select 6) != "CfgVehicles") then {
	if((_itemInfo select 4) in [4096,131072]) then {
		if(!(player canAdd _item) && (uiNamespace getVariable["Weapon_Shop_Filter",0]) != 1) exitWith {_bad = (localize "STR_NOTF_NoRoom")};
	};
};

if(_bad != "") exitWith {["Error", _bad] spawn life_fnc_showPredefinedNotification;};

// Calc Price:
_newPrice = [_price] call life_fnc_priceRepCalc;

_testPrice = _newPrice;
if (_legal == 1) then {
	_testPrice = round((["shop_civil", _testPrice] call life_fnc_gouvTaxesCalc));
};

_canBuy  = true;
if (life_weapon_shop_payment_type == "cash") then {
	if(_testPrice > life_cash) exitWith {
		["Error", "Vous n'avez pas assez d'argent sur vous !"] spawn life_fnc_showPredefinedNotification;
		_canBuy = false;
	};
} else {
	if(_testPrice > life_atmbank) exitWith {
		["Error", "Vous n'avez pas assez d'argent sur votre compte !"] spawn life_fnc_showPredefinedNotification;
		_canBuy = false;
	};
};

if (!_canBuy) exitWith {};

if (_legal == 1) then {
	_newPrice = round((["shop_civil", _newPrice] call life_fnc_gouvTaxesPay));
};

["Accepted", format[localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_newPrice] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

if (life_weapon_shop_payment_type == "cash") then {
	life_cash = life_cash - _newPrice;
	[0] call SOCK_fnc_updatePartial;
} else {
	life_atmbank = life_atmbank - _newPrice;
	[1] call SOCK_fnc_updatePartial;
};

_handle = [_item,true] spawn life_fnc_handleItem;
waitUntil {scriptDone _handle};
[] call life_fnc_weaponShopRefreshInventory;
[] call life_fnc_saveGear;
["achatdunearme"] spawn life_fnc_achievementLearn;