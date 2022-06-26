#include "..\..\script_macros.hpp"
/*
	File: fn_weaponShopMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	
*/
private["_shopCfg","_shopSide","_shopSide","_license","_itemInfo","_itemList","_license","_flag","_exit","_level","_levelAssert","_levelName","_levelType","_levelValue","_levelMsg"];
_exit = false;
_shopCfg = [_this,3,"",[""]] call BIS_fnc_param; 

if (_shopCfg isEqualTo "gun" && life_playerlevel < 5) exitWith {
	closeDialog 0;
	hint "Vous n'étes pas niveau 5 !";
};
if ((_shopCfg == "depan_basic") && !license_civ_dep) exitWith {};
if (_shopCfg isEqualTo "security" && !('security' in life_entreprises)) exitWith {closeDialog 0;};

if (_shopCfg isEqualTo "sud" && ((group player) getVariable ["clan_id", -1]) != 90) exitWith {
	hint "Vous ne faites pas Parti du Sud !";
};

//Auto retrieve your cop level shop
if ((_shopCfg isEqualTo "cop_EQUIPMENT") && (playerSide == west)) then {
	 _shopCfg = format ["cop%1",FETCH_CONST(life_coplevel)];
};

_shopTitle = M_CONFIG(getText,"WeaponShops",_shopCfg,"name");
_shopSide = M_CONFIG(getText,"WeaponShops",_shopCfg,"side");
_license = M_CONFIG(getText,"WeaponShops",_shopCfg,"license");
_levelAssert = M_CONFIG(getArray,"WeaponShops",_shopCfg,"level");
_flag = switch(playerSide) do {case west: {"cop"}; case independent: {"med"}; default {"civ"};};
if(!(EQUAL(_flag,_shopSide))) exitWith {hint "Vous ne pouvez pas accéder à cette boutique."};

_levelName = SEL(_levelAssert,0);
_levelType = SEL(_levelAssert,1);
_levelValue = SEL(_levelAssert,2);
_levelMsg = SEL(_levelAssert,3);


if(!(EQUAL(_license,""))) then {
	_flag = M_CONFIG(getText,"Licenses",_license,"side");
	if(!(LICENSE_VALUE(_license,_flag))) exitWith {hint localize "STR_Shop_Veh_NoLicense"; _exit = true;};
};
if(_exit) exitWith {};


if(!(EQUAL(_levelValue,-1))) then {
	_level = GVAR_MNS _levelName;
	if(typeName _level == typeName {}) then {_level = FETCH_CONST(_level);};

	_flag = switch(_levelType) do {
		case "SCALAR": {_level >= _levelValue};
		case "BOOL": {_level};
		case "EQUAL": {EQUAL(_level,_levelValue)};
		default {false};
	};
	if(!(_flag)) then {
		_exit = true;
		if(EQUAL(_levelMsg,"")) then {
			_levelMsg = (localize "STR_Shop_Veh_NotAllowed");
		};
	};
};
if(_exit) exitWith {hint _levelMsg;};


//Open the shop dialog
//Some shops use an item only dialog
uiNamespace setVariable ["Weapon_Shop",_shopCfg];

[] spawn life_fnc_initInfoWeapons;

if (_shopCfg in ["genstore","civ_mechanic"]) then {

	if(!(createDialog "life_weapon_shop_noweapons")) exitWith {};
	disableSerialization;
	[0,4] call life_fnc_weaponShopFilterShop;
	[] call life_fnc_weaponShopRefreshInventory;	

} else {	

	if(!(createDialog "life_weapon_shop")) exitWith {};
	disableSerialization;
	[0,0] call life_fnc_weaponShopFilterShop;
	[] call life_fnc_weaponShopRefreshInventory;
	
	["Shop","Weapons",true] spawn life_fnc_showHelp;
};
if(!isClass(missionConfigFile >> "WeaponShops" >> _shopCfg)) exitWith {}; //Bad config entry.

ctrlSetText[38401,_shopTitle];



