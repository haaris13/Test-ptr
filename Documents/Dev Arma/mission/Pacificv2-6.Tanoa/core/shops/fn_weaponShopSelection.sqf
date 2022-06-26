#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopSelection.sqf

	Autor: IronBlade
		
	UPDATES BUY/SELL PRICE IN EQUIPMENT SHOP BASED ON WHICH TYPE IS BEING SELECTEDD

*/

private["_shopPriceTag","_inventoryPriceTag","_control","_index","_priceTag","_price","_item","_sellArray","_config"];

_control = [_this,0,controlNull,[controlNull]] call BIS_fnc_param;
_index = [_this,1,-1,[0]] call BIS_fnc_param;

if(isNull _control) exitWith {closeDialog 0;}; //Bad data

_inventoryPriceTag = CONTROL(38400,38408);
_shopPriceTag = CONTROL(38400,38407);
_shopButtonBuy = CONTROL(38400,38405);
_item = CONTROL_DATAI(_control,_index);
_sellArray = LIFE_SETTINGS(getArray,"sellableweapons");
_iS = -1;

if((ctrlIDC _control) isEqualTo 38420) then {
	_iS = [_item,_sellArray] call TON_fnc_index;
	if(EQUAL(_iS,-1)) then {
		_price = 0;
	} else {

		if (playerSide == civilian) then {	
			_price = SEL(SEL(_sellArray,_iS),1);
		} else {
			_price = SEL(SEL(_sellArray,_iS),2);
		};

	};
	_inventoryPriceTag ctrlSetStructuredText parseText format ["<t size='1'>Vente: <t color='#8cff9b'>$%1</t></t>",[(_price)] call life_fnc_numberText];
	_control lbSetValue[_index,_price];
	
} else {

	_shop = uiNamespace getVariable ["Weapon_Shop",""];
	_index = uiNamespace getVariable["Weapon_Shop_Filter",0];

	switch (_index) do {
		case 0: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"primary");};
		case 1: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"secondary");};
		case 2: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"ammo");};	
		case 3: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"attachments");};	
		case 4: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"other");};	
	};

	_canBuy = true;
	_cond = "";
	{
		_class = (_x select 0);
	  	if (_item isEqualTo _class) exitWith {
	  		if ((count _x) == 4) then {
	  			_cond = (_x select 3) select 0;
	  		};
	  	};
	} forEach _config;

	if (_cond != "") then {
		_canBuy = [] call (compile _cond);
	};

	if (!_canBuy) then {
		_shopPriceTag ctrlSetStructuredText parseText format ["<t size='1' color='#ff0000'>Non Débloqué</t>"];
		_shopButtonBuy ctrlEnable false;
	} else {
		_price = lbValue[38403,(lbCurSel 38403)];

		_canBuy  = true;
		if (life_weapon_shop_payment_type == "cash") then {
			if (_price > life_cash) then {
				_canBuy = false;
			};
		} else {
			if (_price > life_atmbank) then {
				_canBuy = false;
			};
		};

		if(!_canBuy) then {
			_shopPriceTag ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#ff0000'>$%1</t>",[(_price)] call life_fnc_numberText];
		} else {
			_shopPriceTag ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='#8cff9b'>$%1</t></t>",[(_price)] call life_fnc_numberText];
		};
		
		_shopButtonBuy ctrlEnable true;
	};
};

/**********************************************/
//       System Show Info Weapons
/**********************************************/
_dialogID = 38400;

_textCond = "Niveau: Aucun<br/>Compétence: aucune";

if ((ctrlIDC _control) isEqualTo 38420) then {
	_textCond = "";
} else {
	{
		_class = (_x select 0);
	  	if (_item isEqualTo _class) exitWith {
	  		if ((count _x) == 4) then {
	  			_textCond = (_x select 3) select 1;
	  		};
	  	};
	} forEach _config;
};

_path = "";

if (isClass (configFile >> "CfgWeapons" >> _item)) then {
	_path = (configFile >> "CfgWeapons" >> _item);

	_category = [_item] call life_fnc_weaponFindCategory;
	_categoryLabel = getText(missionConfigFile >> "CfgWeaponsCategories" >> "Categories" >> _category >> "displayName");

	_categoryText = "";

	if (_categoryLabel != "") then {
		_categoryText = format["Categorie: %1<br/>", _categoryLabel];
	};

	(CONTROL(_dialogID,38409)) ctrlSetStructuredText parseText format[ 
		"Nom: %1<br/>" +
		"%2" +
		//"Type: %3<br/>" +
		"%3<br/>",
		getText(_path >> "displayName"),
		_categoryText,
		//getText(_path >> "descriptionShort"),
		_textCond
	];
} else {
	_path = (configFile >> "CfgMagazines" >> _item);

	(CONTROL(_dialogID,38409)) ctrlSetStructuredText parseText format[ 
		"Nom: %1<br/>" +
		"Type: %2<br/>" +
		"%3<br/>",
		getText(_path >> "displayName"),
		getText(_path >> "descriptionShort"),
		_textCond
	];
};


_indexShop = uiNamespace getVariable["Weapon_Shop_Filter",0];

if (_indexShop in [2,3,4]) exitWith { // Bad Categ Shop

	_controlStartID = 38501;
	_controlEndID = 38505;

	for "_i" from _controlStartID to _controlEndID do {
		CONTROL(_dialogID, _i) ctrlShow false;
		CONTROL(_dialogID, _i + 10) ctrlShow false;
	};
}; 

_statsWeapon = [_item] call life_fnc_getInfoWeapons;

if (count _statsWeapon > 0) then {

	_controlStartID = 38501;
	_controlEndID = 38505;

	{
		if (count _x > 0) then {
			_statValue = _x select 0;
			_statText = _x select 1;

			CONTROL(_dialogID,_controlStartID) progressSetPosition _statValue;
			CONTROL(_dialogID,_controlStartID + 10) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t>",_statText];

			CONTROL(_dialogID, _controlStartID) ctrlShow true;
			CONTROL(_dialogID,_controlStartID + 10) ctrlShow true;

			_controlStartID = _controlStartID + 1;
		};
	} forEach _statsWeapon;

	if (_controlStartID < _controlEndID) then {
		for "_i" from _controlStartID to _controlEndID do {
			CONTROL(_dialogID, _i) ctrlShow false;
			CONTROL(_dialogID, _i + 10) ctrlShow false;
		};
	};

} else {

	_controlStartID = 38501;
	_controlEndID = 38505;

	for "_i" from _controlStartID to _controlEndID do {
		CONTROL(_dialogID, _i) ctrlShow false;
		CONTROL(_dialogID, _i + 10) ctrlShow false;
	};
	
};