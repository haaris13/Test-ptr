#include "..\..\script_macros.hpp"
/*
	File: fn_weaponsshopsell.sqf
		
	Author: IronBlade
	    
	Description:
		- Sells the selected inventory item

*/

disableSerialization;
private["_price","_item","_itemInfo","_bad","_type"];
if((lbCurSel 38420) isEqualTo -1) exitWith {["Error", localize "STR_Shop_Weapon_NoSelect"] spawn life_fnc_showPredefinedNotification;};

_price = lbValue[38420,(lbCurSel 38420)];
_item = lbData[38420,(lbCurSel 38420)];
if(isNil "_price") then {_price = 0;};

//Extra check to prevent a few bugs
if !(_item in life_playerEquipment) exitWith {};

_itemInfo = [_item] call life_fnc_fetchCfgDetails;

ADD(CASH,_price);

["Accepted", format[localize "STR_Shop_Weapon_Sold",_itemInfo select 1,[_price] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;


[_item] spawn {
	_item = _this select 0;
	_handle = [_item,false] spawn life_fnc_handleItem;
	waitUntil {scriptDone _handle};
	[] call life_fnc_weaponShopRefreshInventory;
	[] call life_fnc_saveGear;
};
