/*
	File: fn_insurgeCheckZone.sqf

	Autor: Iron
	Date: 23 Mar 2020 20:49:53
	Version: 0.1
*/

waitUntil {!(isNil "license_civ_insurge")};

if (license_civ_insurge) exitWith {};

_isOnZone = false;

while {true} do {
	if (license_civ_insurge) exitWith {};
	uiSleep 20;

	if (!_isOnZone) then {
		if (player distance (getMarkerPos "narcos_base_center") <= 400 && !life_mode_admin) then {
			_isOnZone = true;

			if (playerSide != west) then {
				["<t shadow='1' size='1.6' color='#ff0000' font='PuristaBold'>Vous entrez dans une zone dangereuse.</t><br/><t shadow='1' size='1' color='#ff0000' font='PuristaBold'>A vos risques et périls !</t>", -1, -1, 2, 0.5, 0, 788] spawn BIS_fnc_dynamicText;
			};

			[0] remoteExec ["life_fnc_insurgeZoneMsg", 0];
		};
	} else {
		if (player distance (getMarkerPos "narcos_base_center") > 450 && !life_mode_admin) then {
			_isOnZone = false;
			[1] remoteExec ["life_fnc_insurgeZoneMsg", 0];
		};
	};
};