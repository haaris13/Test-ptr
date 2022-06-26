#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles various different ammo types being fired.
*/
private["_ammoType","_projectile"];
_ammoType = SEL(_this,4);
_projectile = SEL(_this,6);

if(EQUAL(_ammoType,"GrenadeHand_stone")) then {
	_projectile spawn {
		private "_position";
		while {!isNull _this} do {
			_position = ASLtoATL (visiblePositionASL _this);
			sleep 0.1;
		};
		[_position] remoteExec ["life_fnc_flashbang",RCLIENT];
	};
};


if (_ammoType in ["SmokeShellLacrymo"]) then {
	_projectile spawn {
		uiSleep 0.5;
		waitUntil {(speed _this) < 0.4;};
		[ASLtoATL (visiblePositionASL _this)] spawn life_fnc_lacrymoLaunch;
	};
};

if (_ammoType in ["SmokeShellVirus"]) then {
	_projectile spawn {
		private "_position";
		while {!isNull _this} do {
			_position = ASLtoATL (visiblePositionASL _this);
			sleep 0.1;
		};
		//[_position] spawn life_fnc_lacrymoLaunch;
	};
};

if (life_mode_admin) then {
	player setvehicleammo 1;
};
