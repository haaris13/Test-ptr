#include "..\..\script_macros.hpp"
/*
	File: fn_trademenumoveitem.sqf
		
	Author: IronBlade
	For use by Enddays.co.uk only, don't be a cunt.
	    
	Description:
		- Move virtual items to the offer box and temporarily delete from inventory
	
*/


private ["_itemToMove","_amountToMove","_amountInInventory"];
disableSerialization;

_itemToMove = CONTROL_DATA(13020);
_amountInInventory = CONTROL_VALUE(13020);
_itemOfferList = CONTROL(13000,13004);
_amountToMove = ctrlText CONTROL(13000,13023);
if(!([_amountToMove] call TON_fnc_isnumber)) exitWith {};
_amountToMove = parseNumber (_amountToMove);
if (_amountToMove > _amountInInventory) exitWith {["Error", "You don't have that many to trade!"] spawn life_fnc_showPredefinedNotification;};
if (_amountToMove isEqualTo 0) exitWith {};

//Remove item from virtual inventory
[false,_itemToMove,_amountToMove] call life_fnc_handleInv;

//Add it to saved inv array
_arr = [_itemToMove,_amountToMove];
life_trade_yourItemOffer pushBack _arr;

//Add item to new list
_icon = M_CONFIG(getText,"VirtualItems",_itemToMove,"icon");
_displayName = M_CONFIG(getText,"VirtualItems",_itemToMove,"displayName"); 

_itemOfferList lbAdd format["%2 [x%1]",_amountToMove,localize _displayName];
_itemOfferList lbSetData [(lbSize _itemOfferList)-1,_itemToMove];
if(!(EQUAL(_icon,""))) then {
	_itemOfferList lbSetPicture [(lbSize _itemOfferList)-1,_icon];
};

//Refresh Your ivnentory list
_myInvItems = CONTROL(13000,13020);
lbClear _myInvItems;
{
	if(ITEM_VALUE(configName _x) > 0) then {
		_myInvItems lbAdd format["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
		_myInvItems lbSetData [(lbSize _myInvItems)-1,configName _x];
		_myInvItems lbSetValue [(lbSize _myInvItems)-1,ITEM_VALUE(configName _x)];
		_icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
		if(!(EQUAL(_icon,""))) then {
			_myInvItems lbSetPicture [(lbSize _myInvItems)-1,_icon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));


