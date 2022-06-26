#include "..\..\script_macros.hpp"
/*
	File:fn_admindebugExec.sqf

	Autor:IronBlade
*/
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; ["Error", "Vous n'avez pas le droit d'utiliser ceci"] spawn life_fnc_showPredefinedNotification;};

_display = findDisplay 316000;
_textZone = _display displayCtrl 12284;

_code = ctrlText _textZone;

if (_code == "") exitWith {};

_result = call (compile _code);

diag_log "exec";