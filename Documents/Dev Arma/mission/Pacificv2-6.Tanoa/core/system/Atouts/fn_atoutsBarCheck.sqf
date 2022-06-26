/*
	File: fn_atoutsBarCheck.sqf

	Autor: Iron
	Date: 19 Mar 2020 23:40:30
	Version: 0.1
*/
private ["_cfg", "_class"];
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;
_class = (missionConfigFile >> "Atouts" >> _cfg);

["InfoWithSound", "Restez dans la zone du bar le temps que ça fasse effet."] spawn life_fnc_showPredefinedNotification;

while {true} do {
	uiSleep 1;

	if !([_cfg] call life_fnc_hasAtouts) exitWith {};
	if (player distance (getMarkerPos "bar_pos") > 100) exitWith {
		["Error", "Vous étes parti du bar."] spawn life_fnc_showPredefinedNotification;
		[_cfg, true] spawn life_fnc_atoutsStop;
	};
};