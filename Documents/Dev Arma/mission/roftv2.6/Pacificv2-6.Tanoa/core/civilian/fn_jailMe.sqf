#include "..\..\script_macros.hpp"
/*
	Author Bryan "Tonic" Boardwine
	
	Description:
	Once word is received by the server the rest of the jail execution is completed.
*/
private["_time","_bail","_esc","_countDown"];

params [
	["_ret",[],[[]]],
	["_bad",false,[false]],
	["_timeToJail",0,[0]],
	["_cop",objNull,[objNull]]
];

if (!_bad && isnull _cop) exitWith {
	diag_log "bad";
	life_is_arrested = false;
};

_time = time + (_timeToJail * 60);

if(_bad) then { _time = time + (30*60); };

_esc = false;
_bail = false;
_admin = false;

[_bad] spawn {
	life_canpay_bail = false;
	if(_this select 0) then {
		sleep (10 * 60);
	} else {
		sleep (5 * 60);
	};
	life_canpay_bail = nil;
};

while {true} do {
	if((round(_time - time)) > 0) then {
		_countDown = [(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString;
		hintSilent parseText format[(localize "STR_Jail_Time")+ "<br/> <t size='2'><t color='#FF0000'>%1</t></t><br/><br/>" +(localize "STR_Jail_Pay")+ " %3<br/>" +(localize "STR_Jail_Price")+ " $%2",_countDown,[life_bail_amount] call life_fnc_numberText,if(isNil "life_canpay_bail") then {"Yes"} else {"No"}];
	};

	if ((player distance (getMarkerPos "jail_marker") > 100)) then {
		if (vehicle player != player && (vehicle player) isKindOf "Air") exitWith {
			_esc = true;
		};

		if ((FETCH_CONST(life_adminlevel) > 0)) exitWith {
			_esc = true;
		};

		player setPos (getMarkerPos "jail_marker");
		["Error", "Pas de Glitch !"] spawn life_fnc_showPredefinedNotification;
	};
	
	if(life_bail_paid) exitWith {
		_bail = true;
	};

	if (player getVariable ["jail_admin",false]) exitWith {
		_admin = true;
	};

	if (_esc) exitWith {};
	if((round(_time - time)) < 1) exitWith {["Error", "La durée d'emprisonnement n'est pas suffisante"] spawn life_fnc_showPredefinedNotification;};
	if(!alive player && ((round(_time - time)) > 0)) exitWith {};
	sleep 0.1;
};


switch (true) do {

	case (_admin): {
		life_is_arrested = false;
		player setVariable ["jail_admin", nil, true];
		serv_wanted_remove = [player];
		player setPos (getMarkerPos "jail_release");
		[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
		[5] call SOCK_fnc_updatePartial;
		[8] call SOCK_fnc_updatePartial;
	};

	case (_bail): {
		life_is_arrested = false;
		life_bail_paid = false;
		["Accepted", localize "STR_Jail_Paid"] spawn life_fnc_showPredefinedNotification;
		serv_wanted_remove = [player];
		player setPos (getMarkerPos "jail_release");
		[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
		[5] call SOCK_fnc_updatePartial;
		[8] call SOCK_fnc_updatePartial;
	};
	
	case (_esc): {
		life_is_arrested = false;
		["escjail"] call life_fnc_addXP;
		[false,50] call life_fnc_changeRep;
		["Accepted", localize "STR_Jail_EscapeSelf"] spawn life_fnc_showPredefinedNotification;
		//[0,"STR_Jail_EscapeNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		[getPlayerUID player,profileName,"901"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		[5] call SOCK_fnc_updatePartial;
		[8] call SOCK_fnc_updatePartial;

		["jail"] spawn life_fnc_achievementLearn;
	};
	
	case (alive player && !_esc && !_bail && !_admin): {
		life_is_arrested = false;
		[true,50] call life_fnc_changeRep;
		["stayjail"] call life_fnc_addXP;
		["InfoWithSound", localize "STR_Jail_Released"] spawn life_fnc_showPredefinedNotification;
		[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
		player setPos (getMarkerPos "jail_release");
		[5] call SOCK_fnc_updatePartial;
		[8] call SOCK_fnc_updatePartial;
	};
};