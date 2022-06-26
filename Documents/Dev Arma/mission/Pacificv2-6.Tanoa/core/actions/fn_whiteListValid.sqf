#include "..\..\script_macros.hpp"
/*
	File:fn_whiteListValid.sqf

	Autor:IronBlade

*/

if (isNull life_unit_whitelist) exitWith {};

disableSerialization;

_niv = 0;

if ((lbCurSel 9942) isEqualTo -1) then {
	_niv = 0;
	diag_log "Aucune Selection !";
} else {
	_niv = parseNumber(CONTROL_DATA(9942));
	diag_log "Selection !";
};

uiSleep 0.5;

closeDialog 0;

[life_unit_whitelist,player,_niv,life_type_whitelist] remoteExecCall ["TON_fnc_whiteList",2];
["Accepted", "WhiteList effectué !"] spawn life_fnc_showPredefinedNotification;