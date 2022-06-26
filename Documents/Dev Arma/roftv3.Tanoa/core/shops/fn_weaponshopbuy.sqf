#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopBuy.sqf
	Author: IronBlade
	
	Description:
	Master handling of the weapon shop for buying / selling an item.
*/
disableSerialization;
private["_priceBase","_item","_itemInfo","_bad","_type","_addItem","_config"];
if((lbCurSel 38403) == -1) exitWith {hint localize "STR_Shop_Weapon_NoSelect"};
_priceBase = lbValue[38403,(lbCurSel 38403)]; 
_item = lbData[38403,(lbCurSel 38403)];
_addItem = false;
if(isNil "_priceBase") exitWith {hint "An error occured"};

if((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
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

_illegal = getNumber(missionConfigFile >> "WeaponShops" >> _shop >> "legal");

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

if (!_found) exitWith {playSound "addItemFailed";};
if (!_canBuy) exitWith {hint "Vous n'avez pas débloqué cette arme !";};

//Check if player has space to add	
_bad = "";
if((_itemInfo select 6) != "CfgVehicles") then {
	if((_itemInfo select 4) in [4096,131072]) then {
		if(!(player canAdd _item) && (uiNamespace getVariable["Weapon_Shop_Filter",0]) != 1) exitWith {_bad = (localize "STR_NOTF_NoRoom")};
	};
};
if(_bad != "") exitWith {hint _bad};

if (_priceBase > CASH) exitWith {playSound "addItemFailed"; hint localize "STR_NOTF_NotEnoughMoney"};

// Calc Price:
_newPrice = [_price] call life_fnc_priceRepCalc;

if (_illegal == 1) then {
	_newPrice = (["shop_civil", _newPrice] call life_fnc_gouvTaxesPay);
};

if ((["weaponsPrix"] call life_fnc_hasPerk)) then {
	_newPrice =  _newPrice - round(_newPrice * 0.15);
};

//Check for hideout/gang

hint parseText format[localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_newPrice] call life_fnc_numberText];
CASH = CASH - _newPrice;
_addItem = true;

playSound "addItemOK";
_handle = [_item,true] spawn life_fnc_handleItem;
waitUntil {scriptDone _handle};
[] call life_fnc_weaponShopRefreshInventory;
[] call life_fnc_saveGear;
[0] call SOCK_fnc_updatePartial;
["achatdunearme"] spawn life_fnc_achievementLearn;