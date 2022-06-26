#include "..\..\..\script_macros.hpp"
/*
	File: fn_craftingmenuopen.sqf
		
	Author: IronBlade
	   
	Description:
		- l2read
	    
	Parameter(s):

	Usage: 
*/

createDialog "craftingDialog";
disableSerialization;

if (playerSide != civilian) exitWith {}; //how did u get here

private ["_filter"];
_filter = SEL(_this,0);
[0,_filter] call life_fnc_craftingMenuFilter;

//Disable edit for now
//CONTROL(12500,12502) ctrlEnable false;

//Add filters to listbox
_filterCombo = CONTROL(12500,12504);
_filterCombo lbAdd "MacGyver";
_filterCombo lbAdd "Cueillette";
_filterCombo lbAdd "Minage";
_filterCombo lbAdd "Chasse au trésor";
_filterCombo lbAdd "Chimie";

_filterCombo lbSetCurSel (_filter);

CONTROL(12500,12505) ctrlEnable false; //disable craft button
CONTROL(12500,12502) ctrlEnable false; //disable craft listbox