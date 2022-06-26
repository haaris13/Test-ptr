#include "..\..\script_macros.hpp"
/*
	File: fn_adminTpHere.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Teleport selected player to you.
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0;};

private["_target"];
_target = lbData[2902,lbCurSel (2902)];
_target = call compile format["%1", _target];
if(isNil "_target") exitwith {};
if(isNull _target) exitWith {};

_target setPos (getPos player);

hint format["Vous avez téléporté %1 à votre position",_target getVariable["realname",name _target]];