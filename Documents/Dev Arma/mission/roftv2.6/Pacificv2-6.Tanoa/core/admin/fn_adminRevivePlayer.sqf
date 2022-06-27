#include "..\..\script_macros.hpp"
/*
	File: fn_adminRevivePlayer.sqf
	Author: IronBlade

	[cursorTarget] spawn admin_fnc_adminRevivePlayer;

*/
_target = param [0,ObjNull,[ObjNull]];
if(isNull _target) exitWith {};

[format ["%1 Revive %2", profileName, name _target], getPlayerUID player, 6] remoteExecCall ["TON_fnc_logsAdmin",2];

closeDialog 0;

_revivable = _target GVAR ["Revive",FALSE];
if(_revivable) exitWith {};
if(_target GVAR ["Reviving",ObjNull] == player) exitWith {["Error", localize "STR_Medic_AlreadyReviving"] spawn life_fnc_showPredefinedNotification;};
if(player distance _target > 5) exitWith {}; //Not close enough.

_target setVariable ["Reviving",NIL,TRUE];
_target setVariable ["Revive",TRUE,TRUE];

[profileName, true] remoteExecCall ["life_fnc_revived",_target];

sleep 0.6;
player reveal _target;