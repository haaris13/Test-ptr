#include "..\..\script_macros.hpp"
/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells the selected vehicle off.
*/
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(39400,39402);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop,["Car","Truck","Air"],25];
_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

if((time - life_action_delay) < 5) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

hint localize "STR_Shop_ChopShopSelling";
life_action_inUse = true;
_price = M_CONFIG(getNumber,CONFIG_LIFE_VEHICLES,(typeOf _vehicle),"insurance");
_price2 = CASH + _price;
[player,_vehicle,_price,_price2] remoteExecCall ["TON_fnc_chopShopSell",RSERV];
closeDialog 0;