/*
	File: fn_narcosCheckZone.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:15:02
	Version: 0.1
*/

if (license_civ_narcos) exitWith {};

_isOnZone = false;

while {true} do {
	if (license_civ_narcos) exitWith {};
	uiSleep 20;

	if (!_isOnZone) then {
		if (player distance (getMarkerPos "narcos_base_center") <= 400 && !life_mode_admin) then {
			_isOnZone = true;
			[0] remoteExec ["life_fnc_narcosZoneMsg", 0];
		};
	} else {
		if (player distance (getMarkerPos "narcos_base_center") > 450 && !life_mode_admin) then {
			_isOnZone = false;
			[1] remoteExec ["life_fnc_narcosZoneMsg", 0];
		};
	};
};