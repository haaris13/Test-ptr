#include "..\..\script_macros.hpp"
/*
	File: fn_ticketGive.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives a ticket to the targeted player.
*/
private["_val"];

if(isNil {life_ticket_unit}) exitWith {["Error", localize "STR_Cop_TicketNil"] spawn life_fnc_showPredefinedNotification;};
if(isNull life_ticket_unit) exitWith {["Error", localize "STR_Cop_TicketExist"] spawn life_fnc_showPredefinedNotification;};

_val = ctrlText 2652;

if(!([_val] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_Cop_TicketNum"] spawn life_fnc_showPredefinedNotification;};
if((parseNumber _val) > 1000000) exitWith {["Error", localize "STR_Cop_TicketOver100"] spawn life_fnc_showPredefinedNotification;};

[
	0,
	"STR_Cop_TicketGive",
	true,
	[profileName,[(parseNumber _val)] call life_fnc_numberText,life_ticket_unit GVAR ["realname",name life_ticket_unit]]
] remoteExecCall ["life_fnc_broadcast", west];

[player,(parseNumber _val)] remoteExec ["life_fnc_ticketPrompt",life_ticket_unit];
closeDialog 0;