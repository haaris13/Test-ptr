/*
	File: fn_searchAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the searching process.
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};
if (playerSide == civilian) exitWith {["Error", "Civilians cannot do this!"] spawn life_fnc_showPredefinedNotification;};
["Info", localize "STR_NOTF_Searching"] spawn life_fnc_showPredefinedNotification;
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {["Error", localize "STR_NOTF_CannotSearchPerson"] spawn life_fnc_showPredefinedNotification;};
[player] remoteExec ["life_fnc_searchClient",_unit];
life_action_inUse = true;