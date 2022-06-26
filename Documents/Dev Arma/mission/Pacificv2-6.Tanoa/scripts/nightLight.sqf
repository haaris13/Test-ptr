if (isServer) exitWith {};

[] spawn {
	_adjustLight = {
		NightLight_adjustBrightness = NightLight_adjustBrightness max 0 min 2;
		_brightness = if (NightLight_adjustBrightness > 0) then {200 * abs (1 - (2 ^ NightLight_adjustBrightness))} else {0};
		NightLight_light setLightAttenuation [10e10,(30000 / (_brightness max 10e-10)),4.31918e-005,4.31918e-005];
		NightLight_light setLightAmbient NightLight_adjustColor;
	};
	
	waitUntil {time > 0};
	if (missionNamespace getVariable ["NightLight_running",false]) exitWith {diag_log "night already running;"};
	NightLight_running = true;
	
	NightLight_adjustBrightness = missionNamespace getVariable ["NightLight_adjustBrightness", 0.4];
	NightLight_adjustColor = missionNamespace getVariable ["NightLight_adjustColor",[0.3,0.5,1]];

	if (!isNil "NightLight_light") then {deleteVehicle NightLight_light};
	NightLight_light = "#lightpoint" createVehicleLocal [0,0,0];
	NightLight_light setLightBrightness 1;
	NightLight_light setLightDayLight false;
	call _adjustLight;

	while {true} do {
		_adjustBrightness = NightLight_adjustBrightness;
		_adjustColor = NightLight_adjustColor;

		waitUntil {
			uiSleep 1;
			!(_adjustBrightness isEqualTo NightLight_adjustBrightness) || !(_adjustColor isEqualTo NightLight_adjustColor);
		};

		call _adjustLight;
	};
};
