#include "..\..\script_macros.hpp"
/*
	File: fn_adminFreeze.sqf
	Author: ColinM9991

	Description: Freezes selected player
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};

private["_unit"];
_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];
if(isNil "_unit") exitWith {};
if(isNull _unit) exitWith {};
if(_unit == player) exitWith {["Error", localize "STR_ANOTF_Error"] spawn life_fnc_showPredefinedNotification;};

[player] remoteExec ["life_fnc_freezePlayer",_unit];
