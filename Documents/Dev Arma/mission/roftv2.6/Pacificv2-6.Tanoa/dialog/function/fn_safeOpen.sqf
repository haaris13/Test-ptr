#include "..\..\script_macros.hpp"
/*
	File: fn_safeOpen.sqf
		
	Author: Tonic, IronBlade
	    
	Description:
		- Opens safe inventory window
		- Adapated for heist system
	this addAction[""Open Safe"",life_fnc_safeOpen,""smallbank"",0,false,false,"""",' playerSide == civilian && {_target getVariable[""safe_open"",false]} '];  this addAction[""Fix Safe"",life_fnc_safeFix,"""",0,false,false,"""",' playerSide == west && {_target getVariable [""safe_open"",false]} ' ];

*/

private ["_safeType"];
if(dialog) exitWith {}; //A dialog is already open.
life_safeObj = param [0,ObjNull,[ObjNull]];
_safeType = SEL(_this,3);

if(isNull life_safeObj) exitWith {};
if(playerSide != civilian) exitWith {};
if((life_safeObj GVAR ["safe",-1]) < 1) exitWith {["Error", localize "STR_Civ_VaultEmpty"] spawn life_fnc_showPredefinedNotification;};
if((life_safeObj GVAR ["inUse",false])) exitWith {["Error", localize "STR_Civ_VaultInUse"] spawn life_fnc_showPredefinedNotification;};

//if({side _x == west} count playableUnits < 5) exitWith {["Error", localize "STR_Civ_NotEnoughCops"] spawn life_fnc_showPredefinedNotification;};
if(!createDialog "SafeStorage") exitWith {localize "STR_MISC_DialogError"};

disableSerialization;
ctrlSetText[3501,(localize "STR_Civ_SafeInv")];

[life_safeObj,_safeType] call life_fnc_safeInventory;
life_safeObj SVAR ["inUse",true,true];
[life_safeObj] spawn {
	waitUntil {isNull (findDisplay 3500)};
	SEL(_this,0) SVAR ["inUse",false,true];
};

/*
cursorTarget setVariable["safe_open",true,true];
cursorTarget setVariable["safe",44,true]; 