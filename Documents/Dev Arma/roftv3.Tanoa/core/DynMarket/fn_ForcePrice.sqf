/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/
disableSerialization;
_dialog = findDisplay 7000;
_tochangeName = _dialog displayCtrl 7004;
_tochangePrice = _dialog displayCtrl 7005;

_tochangeNameText = ctrlText _tochangeName;
_tochangePriceText = ctrlText _tochangePrice;
_tochangePriceNumber = parseNumber _tochangePriceText;

if ((_tochangeNameText=="")||(_tochangePriceText=="")) exitWith {};

_exists = false;

{
	if (_tochangeNameText==_x select 0) then {_exists=true;};
} forEach DYNMARKET_prices;

if (_exists) then {
	[[_tochangeNameText,_tochangePriceNumber],"TON_fnc_changePrice",false,false] spawn life_fnc_MP;
} else {
};
