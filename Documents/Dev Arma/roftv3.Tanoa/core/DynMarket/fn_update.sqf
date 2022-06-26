/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/
_mode = _this select 0;
_itemArray = [_this,1,[]] call BIS_fnc_param;
_time = 3;
if (isNil "DYNAMICMARKET_boughtItems") then {DYNAMICMARKET_boughtItems=[];};

switch (_mode) do {
	case 0:
	{
		[[DYNAMICMARKET_boughtItems],"TON_fnc_getUpdate",false,false] spawn life_fnc_MP;
		if (DYNMARKET_UserNotification) then {
		//	systemChat format[localize "STR_Bourse",_time];
		};
		DYNAMICMARKET_boughtItems = [];
	};
	case 1:
	{
		_needToUpdate = false;
		if (!isNil "DYNMARKET_prices") then {DYNMARKET_pricesOld = DYNMARKET_prices;} else {_needToUpdate=true;};
		sell_array = _itemArray;
		DYNMARKET_prices = _itemArray;
		if (DYNMARKET_UserNotification) then {
			systemChat format[localize "STR_Bourse",_time];
		};
		if (_needToUpdate) then {DYNMARKET_pricesOld = DYNMARKET_prices;};
	};
};