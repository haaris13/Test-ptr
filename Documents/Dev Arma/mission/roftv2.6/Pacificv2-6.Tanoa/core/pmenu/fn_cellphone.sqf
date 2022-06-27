#include "..\..\script_macros.hpp"
/*
	File: fn_cellphone.sqf
	Author: IronBlade
*/
private["_display","_units","_type"];

disableSerialization;
waitUntil {!isNull findDisplay 3000};
_display = findDisplay 3000;
_units = _display displayCtrl 3004;
_filter = 1;
_ctrlSearchEdit = CONTROL(3000,3005);
ctrlSetText [3003, ""];

if((FETCH_CONST(life_adminlevel) < 1)) then {
	ctrlShow[3020,false];
	ctrlShow[3021,false];
};



//filter text:
_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_cellphoneFilterContacts;}];

[] call life_fnc_cellphoneFilterContacts;

