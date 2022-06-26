/*
	File: fn_atoutsApply.sqf

	Autor: Iron
	Date: 10 Mar 2020 19:12:01
	Version: 0.1
*/
private ["_cfg", "_class", "_isOnBar"];
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;

_class = (missionConfigFile >> "Atouts" >> _cfg);
_isOnBar = getNumber(_class >> "onBar");

if (_isOnBar == 1) then {
	[_cfg] spawn life_fnc_atoutsBarCheck;
};

switch ( _cfg) do { 
	case "testAtouts" : {
		life_testAtouts = true;
	};

	case "juice" : {
		life_thirst = 100;
		[] call life_fnc_hudUpdate;
	};

	case "beer" : {
		["beer"] spawn life_fnc_alcoolUse;
		life_thirst = 100;
		[] call life_fnc_hudUpdate;
	};

	case "vodka" : {
		["vodka"] spawn life_fnc_alcoolUse;
		life_thirst = 100;
		[] call life_fnc_hudUpdate;
	};

	case "cocktail": {
		["cocktail"] spawn life_fnc_alcoolUse;
		life_thirst = 100;
		[] call life_fnc_hudUpdate;

		[] spawn {
			while {true} do {
				uiSleep 60;
				if !(["cocktail"] call life_fnc_hasAtouts) exitWith {};

				["cocktail", 180] call life_fnc_addXP;
			};
		};
	};

	case "specialDonuts": {
		life_hunger = 100;
		life_thirst = 100;
		[] call life_fnc_hudUpdate;
	};

	case "joint3" : {
		life_training_target_stats_calc = true;
	};
};