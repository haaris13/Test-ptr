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

if((lbCurSel 3502) == -1) exitWith {hint localize "STR_Civ_SelectItem";};
_ctrl = CONTROL_DATA(3502);
_num = ctrlText 3505;
_safeInfo = life_safeObj GVAR ["safe",0];

//Error checks
if(!([_num] call TON_fnc_isnumber)) exitWith {hint localize "STR_MISC_WrongNumFormat";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint localize "STR_Cop_VaultUnder1";};



if(_num > _safeInfo) exitWith {hint format["There isn't enough of that item in the safe."];};

//Secondary checks
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_num,0)) exitWith {hint localize "STR_NOTF_InvFull"};


//Take it
if(!([true,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_CouldntAdd";};
life_safeObj SVAR ["safe",_safeInfo - _num,TRUE];

_filter = uiNamespace getVariable ["safe_filter",""];
[life_safeObj,_filter] call life_fnc_safeInventory;