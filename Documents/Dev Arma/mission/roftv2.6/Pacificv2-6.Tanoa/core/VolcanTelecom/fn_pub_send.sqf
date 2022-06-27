#include "..\..\script_macros.hpp"
/* ------------------------------------------------------------------------------
File: 
	
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

-----------------------------------------------	*/

private ["_type","_toSend","_includeLocation","_fnc"];
_type = CONTROL_DATA(9004);

switch (_type) do {

	case "COP" : {_toSend = "textcop"};
	case "STAFF" : {_toSend = "textadmin"};
	case "MED" : {_toSend = "emsrequest"};
	case "CIV" : {_toSend = "textciv"};
	default {_toSend = "textmsg"};
};

if (isNil "_toSend") exitWith {"An error occured."};

_fnc = call compile format ["TON_fnc_pub_%1",_toSend];

_includeLocation = cbChecked ((finddisplay 9000) displayctrl 9050);

diag_log str _includeLocation;

if (_includeLocation) then {
	["null"] call _fnc;
} else {
	["player"] call _fnc;
};

closeDialog 0;