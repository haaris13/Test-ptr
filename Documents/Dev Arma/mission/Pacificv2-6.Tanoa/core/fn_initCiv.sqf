#include "..\script_macros.hpp"
/*
	File: fn_initCiv.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the civilian.
*/
private["_spawnPos"];


waitUntil {!(isNull (findDisplay 46))};

waitUntil{!isNil "life_server_code"};


//[] spawn life_fnc_checkposBank;
[] spawn life_fnc_antiCamp;
[] spawn life_fnc_checkHelp;

[] spawn {
	while {true} do {
	  uiSleep 60;
	  [] call life_fnc_updateClothing;
	};
};

/*
createTrigger ["EmptyDetector", [0,0,0], false]
setTriggerStatements [
	"!triggerActivated thisTrigger", 
	"thisTrigger setTriggerTimeout [30,30,30,false]",
	"{if (markerShape _x == 'POLYLINE') then {deleteMarker _x}} forEach allMapMarkers"
];
*/

// For now : 

ach_temple addAction [localize"STR_Shops_ExtracteurBuy",life_fnc_virt_menu,"extracteurBuy",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];
vend_temple addAction [localize"STR_MAR_Temple",life_fnc_virt_menu,"temple",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];

//player addAction ["<t color='#0099FF'>S asseoir</t>",life_fnc_sitDown,"",0,FALSE,FALSE,"",'{if (isNull cursorObject) exitWith {false;}; (typeOf cursorObject) in life_chairs_sit;}']; 

/*
if ((FETCH_CONST(life_euLevel)) > 0) then {
	player setVariable["rankEu", (FETCH_CONST(life_euLevel)), true];
	player setVariable["onuLevel", 1];
	//player setVariable["ACE_IsEngineer", 1, true];
	//player setVariable["ACE_isEOD", true, true];
	//player setVariable["ace_medical_medicClass", 2, true];

	player addAction ["<t color='#e14f34'>Gestion Frontiére</t>", life_fnc_onuFrontOpenMenu, [], -9, false, true, "", "(player distance2D getMarkerPos 'onu_front_spawn') < 500"];

	[] spawn {
		while {true} do {
		  uiSleep 60;
		  player enableFatigue false;
		};
	};
};
*/


if ((FETCH_CONST(life_depanLevel)) > 0) then {
	player setVariable["rankDepan",(FETCH_CONST(life_depanLevel)), true];
	[] spawn life_fnc_fourriereInit;
	//player setVariable["ACE_IsEngineer", 1, true];

	if ((FETCH_CONST(life_depanLevel)) >= 2) then {
		//player setVariable["ACE_IsEngineer", 2, true];
	};
};

_nb_cops = (west countSide playableUnits);
_nb_civ = (civilian countSide playableUnits);

diag_log str(life_level_gendarme);

if (life_mode_cop) then {
	if ((FETCH_CONST(life_adminlevel) == 0) && _nb_cops >= 3 && _nb_cops <= 10 && life_level_gendarme >= 1 && life_level_gendarme <= 8 && _nb_civ >= 20) then {
		["NOTEnougthCop",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};
//[] spawn life_fnc_checkPlayerName;

//["Personal"] spawn life_fnc_shellInitComp;

[] spawn life_fnc_checkFront;

player addRating 9999999;

if(life_is_arrested) then {
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
} else {
	//Load the main menu
	[] spawn life_fnc_initMainMenu;
};

[] spawn life_fnc_updateMarkers;