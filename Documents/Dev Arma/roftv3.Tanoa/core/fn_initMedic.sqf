#include "..\script_macros.hpp"
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) == 0)) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

[] spawn {
	while {true} do {
	  uiSleep 60;
	  [] call life_fnc_updateClothing;
	};
};

[] spawn life_fnc_checkFront;
[] call life_fnc_aceCheckIsUnconscious;

player setVariable["rankMedic",(FETCH_CONST(life_medicLevel)),true];
player setVariable["ace_medical_allowSharedEquipmentAccess", 1, true];
player setVariable["ACE_IsEngineer", 1, true];

//Load the main menu
[] spawn life_fnc_initMainMenu;
