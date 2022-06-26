#include "..\..\script_macros.hpp"
/*
	File: fn_adminTpHere.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Teleport selected player to you.
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

private["_target"];
_target = lbData[2902,lbCurSel (2902)];
_target = call compile format["%1", _target];
if(isNil "_target") exitwith {};
if(isNull _target) exitWith {};

_target setPos (getPos player);

["Accepted", format["Vous avez téléporté %1 sur votre position",_target getVariable["realname",name _target]]] spawn life_fnc_showPredefinedNotification;