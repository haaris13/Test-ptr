#include "..\..\script_macros.hpp"
/*
	File:fn_admindebugExec.sqf

	Autor:IronBlade
*/
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint "Vous ne disposer pas des droits";};

_display = findDisplay 316000;
_textZone = _display displayCtrl 12284;

_code = ctrlText _textZone;

if (_code == "") exitWith {};

_result = call (compile _code);

diag_log "exec";