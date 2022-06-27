#include "..\..\script_macros.hpp"
/*
	File: fn_weaponshopfiltershop.sqf
		
	Author: IronBlade, Tonic
	    
	Description:
		- 
	    
	Parameter(s):

	Usage: 

*/

private["_playerInvList","_itemList","_index","_type","_config","_priceTag","_weaponClass","_weaponConfig","_compatibleItems"];
_shop = uiNamespace getVariable ["Weapon_Shop",""];
_index = [_this,1,-1,[0]] call BIS_fnc_param;

uiNamespace setVariable["Weapon_Shop_Filter",_index];
if(_index isEqualTo -1 OR _shop isEqualTo "") exitWith {systemChat "Bad Data Filter"; closeDialog 0;}; 

_priceTag = ((findDisplay 38400) displayCtrl 38407);
_priceTag ctrlSetStructuredText parseText "";
_itemList = ((findDisplay 38400) displayCtrl 38403);
((findDisplay 38400) displayCtrl 38405) ctrlSetText "Acheter";

lbClear _itemList;

// -- Check which filter is active
switch (_index) do {
	case 0: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"primary");};
	case 1: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"secondary");};
	case 2: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"ammo");};	
	case 3: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"attachments");};	
	case 4: {_config = M_CONFIG(getArray,"WeaponShops",_shop,"other");};	
};

_legal = getNumber(missionConfigFile >> "WeaponShops" >> _shop >> "legal");

// -- Check ammo, attachments etc that fit the players weapon
/*_compatibleItems = [];
{
	_weaponClass = _x;
	if !(_weaponClass isEqualTo "") then {

		_weaponConfig = configFile >> "CfgWeapons" >> _weaponClass;
		_compatibleItems append getArray (_weaponConfig >> "magazines");

		{
			if (isClass (_weaponConfig >> "WeaponSlotsInfo" >> _x)) then {
				_compatibleItems append getArray (_weaponConfig >> "WeaponSlotsInfo" >> _x >> "compatibleItems");
			};
		}forEach ["CowsSlot", "PointerSlot", "MuzzleSlot", "UnderBarrelSlot"];
		
		{
			if !(_x isEqualTo "this") then {
				_compatibleItems append getArray (_weaponConfig >> _x >> "magazines");
			};
		}forEach getArray (_weaponConfig >> "muzzles");
	};
} forEach [primaryWeapon player, secondaryWeapon player, handgunWeapon player];
*/

_compatibleItems = [];
{
	_weaponClass = _x;
	if !(_weaponClass isEqualTo "") then {

		_getcompatibleItems = [_weaponClass] call CBA_fnc_compatibleItems;
		_compatibleItems append _getcompatibleItems;

		_weaponConfig = configFile >> "CfgWeapons" >> _weaponClass;
		_compatibleItems append getArray (_weaponConfig >> "magazines");
	
		{
			if (isClass (_weaponConfig >> "WeaponSlotsInfo" >> _x)) then {
				_compatibleItems append getArray (_weaponConfig >> "WeaponSlotsInfo" >> _x >> "compatibleItems");
			};
		} forEach ["CowsSlot", "PointerSlot", "MuzzleSlot", "UnderBarrelSlot"];
		
		{
			if !(_x isEqualTo "this") then {
				_compatibleItems append getArray (_weaponConfig >> _x >> "magazines");
			};
		}forEach getArray (_weaponConfig >> "muzzles");
	};
} forEach [primaryWeapon player, secondaryWeapon player, handgunWeapon player];

//-- Add items to the shop list
{

	//krep
	_class = _x select 0;
	_customDisplayName = _x select 1;

	// Calc Price
	_newPrice = [(_x select 2)] call life_fnc_priceRepCalc;

	if (_legal == 1) then {
		_newPrice = (["shop_civil", _newPrice] call life_fnc_gouvTaxesCalc);
	};

	_canBuy = true;
	_cond = false;

	// Condition
	if ((count _x) == 4) then {
		_code = (_x select 3) select 0;
		if (_code != "") then {
			_canBuy = [] call (compile _code);
			_cond = true;
		};
	};

	_itemInfo = [_class] call life_fnc_fetchCfgDetails;
	_itemList lbAdd format["%1",if(_customDisplayName != "") then {_customDisplayName} else {_itemInfo select 1}];
	_itemList lbSetData[(lbSize _itemList)-1,_itemInfo select 0];
	_itemList lbSetPicture[(lbSize _itemList)-1,_itemInfo select 2];
	_itemList lbSetValue[(lbSize _itemList)-1,_newPrice];

	if ((_index in [2,3]) && (_class in _compatibleItems)) then {
		_itemList lbSetColor [(lbSize _itemList)-1,[1,0.7,0,1]];
	};

	switch (true) do {
		case (_canBuy && _cond) : {_itemList lbSetColor [(lbSize _itemList)-1,[0,0.7,0,1]];};
		case (!_canBuy && _cond) : {_itemList lbSetColor [(lbSize _itemList)-1,[1,0,0,1]];};
		default {}; 
	};
	
} foreach (_config);



if !(isNil {_this select 0}) then {_itemList lbSetCurSel 0;};

/**********************************************/
//      Init System Show Info Weapons
/**********************************************/

_dialogID = 38400;

(CONTROL(_dialogID,38409)) ctrlSetStructuredText parseText format[ 
	"Nom:<br/>" +
	"Type:<br/>" +
	"Calibre:<br/>" +
	"Niveau:<br/>"+
	"Compétence:"
];
	
_controlStartID = 38501;
_controlEndID = 38505;

for "_i" from _controlStartID to _controlEndID do {
	CONTROL(_dialogID, _i) ctrlShow false;
	CONTROL(_dialogID, _i + 10) ctrlShow false;
};

// End 