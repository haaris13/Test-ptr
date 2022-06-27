#include "..\..\script_macros.hpp"
/*
	File: fn_safeTake.sqf
		
	Author: Tonic, IronBlade
	    
	Description:
		- Take an item from a safe
		- Adapated for heist system

*/
private["_ctrl","_num","_safeInfo","_filter"];
disableSerialization;

if((lbCurSel 3502) == -1) exitWith {["Error", localize "STR_Civ_SelectItem"] spawn life_fnc_showPredefinedNotification;};
_ctrl = CONTROL_DATA(3502);
_num = ctrlText 3505;
_safeInfo = life_safeObj GVAR ["safe",0];

//Error checks
if(!([_num] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_MISC_WrongNumFormat"] spawn life_fnc_showPredefinedNotification;};
_num = parseNumber(_num);

if(_num < 1) exitWith {["Error", localize "STR_Civ_SelectItem"] spawn life_fnc_showPredefinedNotification;};



if(_num > _safeInfo) exitWith {hint format["There isn't enough of that item in the safe."];};

//Secondary checks
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_num,0)) exitWith {["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;};


//Take it
if(!([true,_ctrl,_num] call life_fnc_handleInv)) exitWith {["Error", localize "STR_NOTF_CouldntAdd"] spawn life_fnc_showPredefinedNotification;};
life_safeObj SVAR ["safe",_safeInfo - _num,TRUE];

_filter = uiNamespace getVariable ["safe_filter",""];
[life_safeObj,_filter] call life_fnc_safeInventory;