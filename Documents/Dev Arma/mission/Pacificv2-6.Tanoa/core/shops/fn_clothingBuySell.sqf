#include "..\..\script_macros.hpp"
/*
	File: fn_buyClothes.sqf
	Author: Bryan "Tonic" Boardwine, IronBlade
	
	Description:
	Buys the current set of clothes and closes out of the shop interface.
*/
private["_type","_price","_hidden","_itemInfo"];
_type = [_this,0,-1,[0]] call BIS_fnc_param; // 0 = buy, 1 = sell


if (_type isEqualTo 1) then {
	["Error", "Un des Vêtements que vous avez choisi n'est pas encore débloqué !"] spawn life_fnc_showPredefinedNotification;
	if(EQUAL((lbCurSel 3110),-1)) exitWith {["Error", "Vous devez sélectionner un objet à vendre."] spawn life_fnc_showPredefinedNotification;};
	_item = lbData[3110,(lbCurSel 3110)];
	_price = lbValue[3110,(lbCurSel 3110)];
	_itemInfo = [_item] call life_fnc_fetchCfgDetails;
	if(isNil "_price") then {_price = 0;};
	ADD(CASH,_price);
	[_item,false] call life_fnc_handleItem;
	["Accepted", format[localize "STR_Shop_Weapon_Sold",_itemInfo select 1,[_price] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

	
	[] call life_fnc_clothingRefreshInventory;
} else {

	_canBuy = true;

	{
		if (_x isEqualTo -2) exitWith {
			_canBuy = false;
		};
	} forEach life_clothing_purchase;

	if (!_canBuy) exitWith {["Error", "Un des Vêtements que vous avez choisi n'est pas encore débloqué !"] spawn life_fnc_showPredefinedNotification;};

	_legal = getNumber(missionConfigFile >> "Clothing" >> life_clothing_store >> "legal");
	
	_priceCheck = 0;
	_priceTotal = 0;
	{
		if(!(EQUAL(_x,-1))) then {
			_priceTotal = _priceTotal + _x;
		};
	} foreach life_clothing_purchase;
	_priceCheck = _priceTotal;

	if (_legal == 1) then { // shop_civil
		_priceCheck = round(["shop_civil", _priceCheck] call life_fnc_gouvTaxesCalc);
	};

	if(_priceCheck == 0) exitWith {["Error", localize "STR_Shop_NoClothes"] spawn life_fnc_showPredefinedNotification;};

	_canBuy = true;
	if (life_clothing_store_payment_type == "cash") then {
		if(_priceCheck > life_cash) exitWith {
			["Error", "Vous n'avez pas assez d'argent sur vous !"] spawn life_fnc_showPredefinedNotification;
			_canBuy = false;
		};
	} else {
		if(_priceCheck > life_atmbank) exitWith {
			["Error", "Vous n'avez pas assez d'argent sur votre compte !"] spawn life_fnc_showPredefinedNotification;
			_canBuy = false;
		};
	};

	if (!_canBuy) exitWith {};

	if (_legal == 1) then { // shop_civil
		_priceTotal = round(["shop_civil", _priceTotal] call life_fnc_gouvTaxesPay);
	};

	if (life_clothing_store_payment_type == "cash") then {
		life_cash = life_cash - _priceTotal;
		[0] call SOCK_fnc_updatePartial;
	} else {
		life_atmbank = life_atmbank - _priceTotal;
		[1] call SOCK_fnc_updatePartial;
	};

	life_clothesPurchased = true;
	[] call life_fnc_playerSkins;

	//Need to reset saved backpack textues, so if the player buys a bacpack it wont fuckup the hide backpack function.
	life_backpack_textures = [];
	
	["achatdevetement"] spawn life_fnc_achievementLearn;

	closeDialog 0;
};