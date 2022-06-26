#include "..\..\script_macros.hpp"
/*
	File: fn_freezePlayer.sqf
	Author: ColinM9991

	Description: Freezes selected player
*/
private["_admin"];
_admin = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(life_frozen) then {
	["Warning", localize "STR_NOTF_Unfrozen"] spawn life_fnc_showPredefinedNotification;
	[1,format[localize "STR_ANOTF_Unfrozen",profileName]] remoteExecCall ["life_fnc_broadcast",_admin];
	disableUserInput false;
	life_frozen = false;
} else {
	["Warning", localize "STR_NOTF_Frozen"] spawn life_fnc_showPredefinedNotification;
	[1,format[localize "STR_ANOTF_Frozen",profileName]] remoteExecCall ["life_fnc_broadcast",_admin];
	disableUserInput true;
	life_frozen = true;
};
