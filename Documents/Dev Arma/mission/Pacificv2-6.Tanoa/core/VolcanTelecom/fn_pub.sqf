#include "..\..\script_macros.hpp"
/*
	File: fn_cellphone.sqf
	Author: IronBlade 
*/
private["_display","_units","_type"];

disableSerialization;
waitUntil {!isNull findDisplay 9000};
_display = findDisplay 9000;
_units = _display displayCtrl 9004;
_filter = 1;
_ctrlSearchEdit = CONTROL(9000,9005);
ctrlSetText [9003, ""];

//Will automatically filter this list when typing in the edit box
_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_pubFilterContacts;}];

[] call life_fnc_pubFilterContacts;

