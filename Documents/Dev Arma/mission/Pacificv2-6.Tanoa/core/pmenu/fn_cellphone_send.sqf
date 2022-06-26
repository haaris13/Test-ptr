#include "..\..\script_macros.hpp"
/*
File: fn_cellphone_send.sqf
	
Author: IronBlade
    
Description:
	- Check listbox selection to determine which kind of message is sent
	- Using TON messaging system for now

Parameter(s):

Usage: 
	
	0 = private message
	1 = police message
	2 = message to admin
	3 = message from admin
	4 = admin message to all
	5 = ems request
	6 = taxi request
	7 = mechanic request

*/

private ["_type","_toSend","_includeLocation","_fnc"];
_type = CONTROL_DATA(3004);

switch (_type) do {

	case "COP" : {_toSend = "textcop"};
	case "STAFF" : {_toSend = "textadmin"};
	case "MED" : {_toSend = "emsrequest"};
	case "CIV" : {_toSend = "textciv"};
	default {_toSend = "textmsg"};
};

if (isNil "_toSend") exitWith {"An error occured."};

_msg = "Action Impossible dans cette position !";

if(player getVariable ["restrained",false]) exitWith {hint _msg; closeDialog 0;};
if(player getVariable ["escorting",false]) exitWith {hint _msg; closeDialog 0;};
if(player getVariable ["ziptied",false]) exitWith {hint _msg; closeDialog 0;};
if(player getVariable ["playerSurrender",false]) exitWith {hint _msg; closeDialog 0;};
if(animationState player == "incapacitated") exitWith {hint _msg; closeDialog 0;};

_fnc = call compile format ["TON_fnc_cell_%1",_toSend];

_includeLocation = cbChecked ((finddisplay 3000) displayctrl 3050);
if (_includeLocation) then {

	_posText = [position player, true, true] call life_fnc_getNearLocation;

	[mapGridPosition player, _posText] call _fnc;
} else {
	["","Inconnue"] call _fnc;
};


