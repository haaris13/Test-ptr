#include "..\..\script_macros.hpp"
/*
	File: fn_syncData.sqf
	Author: Bryan "Tonic" Boardwine"
	
	Description:
	Used for player manual sync to the server.
*/
_fnc_scriptName = "Player Synchronization";
if(isNil "life_session_time") then {life_session_time = false;};
if(!life_session_completed) exitWith {};
if(life_session_time) exitWith {["Error", localize "STR_Session_SyncdAlready"] spawn life_fnc_showPredefinedNotification;};

[] call SOCK_fnc_updateRequest;

//[] call life_fnc_saveFarms;
["Accepted", localize "STR_Session_SyncData"] spawn life_fnc_showPredefinedNotification;
[] spawn {
	life_session_time = true;
	sleep (5 * 60);
	life_session_time = false;
};