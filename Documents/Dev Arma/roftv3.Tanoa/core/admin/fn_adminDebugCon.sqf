#include "..\..\script_macros.hpp"
/*
	File: fn_adminDebugCon.sqf
	Author: ColinM9991, IronBlade

	Description:
	Opens the Debug Console.
*/
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint "Vous ne disposer pas des droits";};

[format ["%1 Ouvre Debug",profileName], getPlayerUID player,13] remoteExecCall ["TON_fnc_logsAdmin",2];

disableSerialization;

createDialog "RscDisplayDebugPublic";

_display = findDisplay 316000;

_title = _display displayCtrl 11884;
_execLocal = _display displayCtrl 1;
_btnGlobal = _display displayCtrl 13285;
_btnServer = _display displayCtrl 13286;
_btnCheck = _display displayCtrl 13284;

_title ctrlSetText "Débug Pay Or Die";
_btnGlobal ctrlEnable true;
_btnServer ctrlEnable false;
_btnCheck ctrlEnable false;

_execLocal buttonSetAction "[] call admin_fnc_admindebugExec;";

_btnGlobal ctrlSetText "Info";
_btnGlobal buttonSetAction "[] spawn admin_fnc_adminShowDebugInfo;";