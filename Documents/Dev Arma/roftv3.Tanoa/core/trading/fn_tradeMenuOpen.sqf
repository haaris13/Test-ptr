#include "..\..\script_macros.hpp"
/*
	File: fn_trademenuopen.sqf
		

	    
	Description:
		- Open trade window with a player
		- Sort this shitlater
*/

private ["_myInvItems","_myInvMoney"];
disableSerialization;
_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_recievingRequest = [_this,1,0,[0]] call BIS_fnc_param;

//Checks
if (isNull _target) exitWith {["Error", "Une erreur est survenue ! :c"] spawn life_fnc_showPredefinedNotification;};
if (!(_target isKindOf "Man")) exitWith {["Error", "Une erreur est survenue ! :c"] spawn life_fnc_showPredefinedNotification;};

//Does target allow trades?
_targetAllowed = _target getVariable ["allowTrades",false];
if ((!_targetAllowed) && (_recievingRequest isEqualTo 0)) exitWith {[1, "That player has disabled incoming trade requests.", ["Trading", "#B9401F"]] call life_fnc_hint};

//Open the trade window on the target
if ((_recievingRequest isEqualTo 0)) then {
		[player,1] remoteExec ["life_fnc_tradeMenuOpen",_target];
};

life_trade_target = _target;
createDialog "tradingDialog";

//Who are you trading with
_targetName = life_trade_target getVariable ["realname",""];

if (_targetName isEqualTo "") then {
	CONTROL(13000,13050) ctrlSetStructuredText parseText format["AN ERROR HAS OCCURED, PLEASE CLOSE THE TRADE WINDOW"];
		} else { 
	CONTROL(13000,13050) ctrlSetStructuredText parseText format["<t align = 'center' size = '1'>Trading with %1</t>",_targetName];
};

//Update status CTRL
CONTROL(13000,13001) ctrlSetStructuredText parseText format["YOUR STATUS:<t color = '#FF4500'> DECIDING... </t>"];	//Your trade status
CONTROL(13000,13012) ctrlSetStructuredText parseText format["THEIR STATUS:<t color = '#FF4500'> DECIDING... </t>"];	//Target trade status

//Disable accept/declinebuttons
CONTROL(13000,13030) ctrlEnable false; //Accept
CONTROL(13000,13031) ctrlEnable false; 	//Decline

//Fill your inventory
CONTROL(13000,13021) ctrlSetText format ["$%1",[life_cash] call life_fnc_numberText]; //Your money
_myInvItems = CONTROL(13000,13020); 

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


//Wait until dialog is closed
//Always force close the other client trade window if you close yours
waitUntil {isNull (findDisplay 13000)};
if(life_trade_forceClose) then {
	//If your client closes due to both players accepting, close the target's
	//client with that info
	[life_trade_bothAccepted] remoteExec ["life_fnc_tradeMenuClose",_target];
};

if (life_trade_bothAccepted) then {
		[true] call life_fnc_tradeMenuComplete;
	} else {
		[false] call life_fnc_tradeMenuComplete;
};