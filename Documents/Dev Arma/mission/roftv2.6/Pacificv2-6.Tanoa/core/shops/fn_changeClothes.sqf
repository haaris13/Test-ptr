#include "..\..\script_macros.hpp"
/*
	File: fn_changeClothes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used in the clothing store to show a 'preview' of the piece of clothing.
*/
disableSerialization;
private["_control","_selection","_data","_price","_total","_totalPrice"];
_control = (_this select 0) select 0;
_selection = (_this select 0) select 1;

_data = _control lbData _selection;

_price = (findDisplay 3100) displayCtrl 3102;
_total = (findDisplay 3100) displayCtrl 3106;
_buyButt = (findDisplay 3100) displayCtrl 3104;
if(_selection == -1) exitWith {/*["Error", localize "STR_Shop_NoSelection"] spawn life_fnc_showPredefinedNotification;*/};
if(isNull _control) exitWith {["Error", localize "STR_Shop_NoDisplay"] spawn life_fnc_showPredefinedNotification;};
if(life_cMenu_lock) exitWith {};
life_cMenu_lock = true;

_array = switch(life_clothing_filter) do {
	case 0: {M_CONFIG(getArray,"Clothing",life_clothing_store,"uniforms");};
	case 1: {M_CONFIG(getArray,"Clothing",life_clothing_store,"headgear");};
	case 2: {M_CONFIG(getArray,"Clothing",life_clothing_store,"goggles");};
	case 3: {M_CONFIG(getArray,"Clothing",life_clothing_store,"vests");};
	case 4: {M_CONFIG(getArray,"Clothing",life_clothing_store,"backpacks");};
};

_cond = "";
_canBuy = true;

_condArray = [];

{

	_itemClass = _x select 0;

	if (_data isEqualTo _itemClass) exitWith {

		if (count _x == 5) then {
			_arrayCond = _x select 4;
			_condArray = _arrayCond;
			_cond = (_arrayCond select 0);
			if (_cond != "") then {
				_canBuy = [] call (compile _cond);
			};
		};
	};
} forEach _array;

[_data, _condArray] call life_fnc_updateInfoClothing;

_legal = getNumber(missionConfigFile >> "Clothing" >> life_clothing_store >> "legal");
_priceShow = (_control lbValue _selection);
if (_legal == 1) then { // shop_civil
	_priceShow = round(["shop_civil", _priceShow] call life_fnc_gouvTaxesCalc);
};

if (_canBuy) then {
	life_clothing_purchase set[life_clothing_filter,(_control lbValue _selection)];
} else {
	life_clothing_purchase set[life_clothing_filter,-2];
};

if(EQUAL(_data,"NONE")) then {
	_item = switch(life_clothing_filter) do {
		case 0: {uniform player};
		case 1: {headGear player};
		case 2: {goggles player};
		case 3: {vest player};
		case 4: {backpack player};
	};
	
	[_item,false] call life_fnc_handleItem;
} else {
	[_data,true,nil,nil,nil,nil,nil,true] call life_fnc_handleItem;
};

life_cMenu_lock = false;

[] call life_fnc_playerSkins;
[] call life_fnc_updateClothing;


if (!_canBuy) exitWith {
	_buyButt ctrlEnable false;
	_price ctrlSetStructuredText parseText format ["<t color='#ff0000'>Non Débloqué</t>"];
};

_buyButt ctrlEnable true;

_price ctrlSetStructuredText parseText format [(localize "STR_GNOTF_Price")+ " <t color='#8cff9b'>$%1</t>",[_priceShow] call life_fnc_numberText];

_totalPrice = 0;
{
	if(_x != -1 && _x != -2) then {
		_totalPrice = _totalPrice + _x;
	};
} foreach life_clothing_purchase;

if (_legal == 1) then { // shop_civil
	_totalPrice = round(["shop_civil", _totalPrice] call life_fnc_gouvTaxesCalc);
};

_total ctrlSetStructuredText parseText format [(localize "STR_Shop_Total")+ " <t color='#8cff9b'>$%1</t>",[_totalPrice] call life_fnc_numberText];

