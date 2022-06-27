#include "..\..\script_macros.hpp"
/*
	File: fn_adminCompensate.sqf
	Author: ColinM9991
	
	Description:
	Figure it out.
*/
private["_value","_action"];
if(FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};
_value = parseNumber(ctrlText 9922);
if(_value < 0) exitWith {};
if(_value > 9999999) exitWith {["Error", localize "STR_ANOTF_Fail"] spawn life_fnc_showPredefinedNotification;};
//if(!([str(_value)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_AIM_notnumeric"] spawn life_fnc_showPredefinedNotification;};

_action = [
	format [localize "STR_ANOTF_CompWarn",[_value] call life_fnc_numberText],
	localize "STR_Admin_Compensate",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	life_cash = life_cash + _value;
	[format ["%1 Se Give %2$",profileName,str(_value)], getPlayerUID player,8] remoteExecCall ["TON_fnc_logsAdmin",2];
	["Accepted", format [localize "STR_ANOTF_Success",[_value] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
} else {
	["Error", localize "STR_NOTF_ActionCancel"] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
};