#include "..\..\script_macros.hpp"
/*
	File: fn_ticketPay.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pays the ticket.
*/
if(isNil "life_ticket_val" OR isNil "life_ticket_cop") exitWith {};
if(CASH < life_ticket_val) exitWith {
	if(BANK < life_ticket_val) exitWith {
		["Error", localize "STR_Cop_Ticket_NotEnough"] spawn life_fnc_showPredefinedNotification;
		[1,"STR_Cop_Ticket_NotEnoughNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
		closeDialog 0;
	};

	[player, life_ticket_val] remoteExecCall ["TON_fnc_gouvTaxesPay", 2];
	
	hint format[localize "STR_Cop_Ticket_Paid",[life_ticket_val] call life_fnc_numberText];
	SUB(BANK,life_ticket_val);
	life_ticket_paid = true;
	[true,100] call life_fnc_changeRep;
	
	[0,"STR_Cop_Ticket_PaidNOTF",true,[profileName,[life_ticket_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
	[1,"STR_Cop_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
	[life_ticket_val,player,life_ticket_cop] remoteExecCall ["life_fnc_ticketPaid",life_ticket_cop];
	[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
	closeDialog 0;
};

[player, life_ticket_val] remoteExecCall ["TON_fnc_gouvTaxesPay", 2];

SUB(CASH,life_ticket_val);
life_ticket_paid = true;
[true,100] call life_fnc_changeRep;

[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
[0,"STR_Cop_Ticket_PaidNOTF",true,[profileName,[life_ticket_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
closeDialog 0;
[1,"STR_Cop_Ticket_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_ticket_cop];
[life_ticket_val,player,life_ticket_cop] remoteExecCall ["life_fnc_ticketPaid",life_ticket_cop];