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
	if(EQUAL((lbCurSel 3110),-1)) exitWith {hint "You must select an item to sell."};
	_item = lbData[3110,(lbCurSel 3110)];
	_price = lbValue[3110,(lbCurSel 3110)];
	_itemInfo = [_item] call life_fnc_fetchCfgDetails;
	if(isNil "_price") then {_price = 0;};
	ADD(CASH,_price);
	[_item,false] call life_fnc_handleItem;
	hint parseText format[localize "STR_Shop_Weapon_Sold",_itemInfo select 1,[_price] call life_fnc_numberText];

	
	[] call life_fnc_clothingRefreshInventory;
} else {

	_canBuy = true;

	{
		if (_x isEqualTo -2) exitWith {
			_canBuy = false;
		};
	} forEach life_clothing_purchase;

	if (!_canBuy) exitWith {playSound "addItemFailed"; hint "Un des Vétements que vous avez choisi n'est pas encore débloqué !";};

	_price = 0;
	{
		if(!(EQUAL(_x,-1))) then {
			_price = _price + _x;
		};
	} foreach life_clothing_purchase;

	if(_price == 0) exitWith {playSound "addItemFailed"; hint (localize "STR_Shop_NoClothes");};

	if(_price > CASH) exitWith {playSound "addItemFailed"; hint (localize "STR_Shop_NotEnoughClothes");};
	CASH = CASH - _price;
	life_clothesPurchased = true;
	[] call life_fnc_playerSkins;

	//Need to reset saved backpack textues, so if the player buys a bacpack it wont fuckup the hide backpack function.
	life_backpack_textures = []; 

	["achatdevetement"] spawn life_fnc_achievementLearn;

	closeDialog 0;
};