/*
	File: fn_bankAlarm.sqf

	Autor: Iron
	Date: 29 Mar 2020 05:31:01
	Version: 0.1
*/
_param1 = [_this, 0, 0, [0]] call BIS_fnc_param;

uiSleep (random 2);

if (life_bank_doors != 0) exitWith {};

life_bank_doors = life_bank_doors + 1;
publicVariable "life_bank_doors";

if (_param1 == 0) then {
	["L'alarme de la banque est activé ! Des intrus pirate la banque !"] remoteExecCall ["life_fnc_dynamicText", west];
};

[] spawn {
	uiSleep 8;

	_markAlert = "bank_simple_mrk_alert";
	_markZone = "bank_simple_mrk_zone";
	_posDoor1 = getMarkerPos "lbank_1";

	_bankMarkerAlert = createMarker [_markAlert, _posDoor1];
	_bankMarkerAlert setMarkerShape "ICON";
	_bankMarkerAlert setMarkerType "mil_warning";
	_bankMarkerAlert setMarkerColor "ColorRed";
	_bankMarkerAlert setMarkerText format[" - Braquage en cours -"];

	_bankMarkerZone = createMarker [_markZone, _posDoor1];
	_bankMarkerZone setMarkerShape "ELLIPSE";
	_bankMarkerZone setMarkerSize [300, 300];
	_bankMarkerZone setMarkerColor "ColorRed";
	_bankMarkerZone setMarkerAlpha 0.4;

	for "_i" from 0 to 5 do {
		[bank_bat, "A3\Sounds_F\sfx\alarm_independent.wss", 2000] spawn life_fnc_playSound3DNear2;
		uiSleep 6.6;
	};	
};

