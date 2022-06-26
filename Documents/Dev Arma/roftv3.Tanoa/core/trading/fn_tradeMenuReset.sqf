#include "..\..\script_macros.hpp"
/*
	File: fn_trademenureset.sqf
		
	
	    
	Description:
		- Recieve either an offer from the target or a accept request
	    
	Parameter(s):

	Usage: 

*/
private ["_recievedMoneyOffer","_recievedItemOffer","_type"];

disableSerialization;
_type = [_this,0,0,[0]] call BIS_fnc_param;

switch (_type) do {

	case 0: {

		//You reset your offer
		//Reset offer list & money box
		lbClear CONTROL(13000,13004);
		CONTROL(13000,13002) ctrlSetText format["$0"];

		//Re add removed items
		{[true,_x select 0,_x select 1] call life_fnc_handleInv;}forEach life_trade_yourItemOffer;

		//Refresh inventory
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

		//Reset affected life vars
		life_trade_yourItemOffer = [];
		life_trade_yourMoneyOffer = 0;


	};

	case 1: {

		//Offer failed as target does not have enough space
		[1, "Your target does not have enough space for those items!", ["Trading", "#B9401F"]] call life_fnc_hint;

		//Reset offer list & money box
		lbClear CONTROL(13000,13004); 
		CONTROL(13000,13002) ctrlSetText format["$0"];

		//Re add removed items
		{[true,_x select 0,_x select 1] call life_fnc_handleInv;}forEach life_trade_yourItemOffer;

		//Refresh inventory
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

		//Reset affected life vars
		life_trade_yourItemOffer = [];
		life_trade_yourMoneyOffer = 0;

	};
};	