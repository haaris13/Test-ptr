#include "..\..\script_macros.hpp"
/*
	File: fn_giveDiff.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	??A?SD?ADS?A
*/
private["_unit","_item","_val","_from","_bool"];
_unit = SEL(_this,0);
if(_unit != player) exitWith {};
_item = SEL(_this,1);
_val = SEL(_this,2);
_from = SEL(_this,3);
_bool = if(count _this > 4) then {true} else {false};
_type = M_CONFIG(getText,"VirtualItems",_item,"displayName");

if(_bool) then {
	if(([true,_item,(parseNumber _val)] call life_fnc_handleInv)) then {
		["Warning", format["Vous avez essayé de donner %1 %2 mais il n'a pas assez de place et vous à tout redonné.", _val, (localize _type)]] spawn life_fnc_showPredefinedNotification;
	};
} else {
	if(([true,_item,(parseNumber _val)] call life_fnc_handleInv)) then {
		["Warning", format["On vous a redonné %1 %2 parce qu'ils ne pouvaient pas en tenir autant.", _val, (localize _type)]] spawn life_fnc_showPredefinedNotification;
	};
};