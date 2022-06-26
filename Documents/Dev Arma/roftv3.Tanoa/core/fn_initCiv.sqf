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

createTrigger ["EmptyDetector", [0,0,0], false]
setTriggerStatements [
	"!triggerActivated thisTrigger", 
	"thisTrigger setTriggerTimeout [30,30,30,false]",
	"{if (markerShape _x == 'POLYLINE') then {deleteMarker _x}} forEach allMapMarkers"
];

// For now : 

ach_temple addAction [localize"STR_Shops_ExtracteurBuy",life_fnc_virt_menu,"extracteurBuy"];
vend_temple addAction [localize"STR_MAR_Temple",life_fnc_virt_menu,"temple"];
/*
if ((FETCH_CONST(life_euLevel)) > 0) then {
	player setVariable["rankEu", (FETCH_CONST(life_euLevel)), true];
	player setVariable["onuLevel", 1];
	player setVariable["ACE_IsEngineer", 1, true];
	player setVariable["ACE_isEOD", true, true];
	player setVariable["ace_medical_medicClass", 2, true];

	player addAction ["<t color='#e14f34'>Gestion Frontiére</t>", life_fnc_onuFrontOpenMenu, [], -9, false, true, "", "(player distance2D getMarkerPos 'onu_front_spawn') < 500"];

	[] spawn {
		while {true} do {
		  uiSleep 60;
		  player enableFatigue false;
		};
	};
};


if ((FETCH_CONST(life_erpLevel)) > 0) then {
	player setVariable["rankErp",(FETCH_CONST(life_erpLevel)), true];
	//[] spawn life_fnc_fourriereInit;
	player setVariable["ACE_IsEngineer", 1, true];

	if ((FETCH_CONST(life_erpLevel)) >= 2) then {
		player setVariable["ACE_IsEngineer", 2, true];
	};
};
*/
_nb_cops = (west countSide playableUnits);

diag_log str(life_level_gendarme);

if (life_mode_cop) then {
	if ((FETCH_CONST(life_adminlevel) == 0) && _nb_cops >= 5 && life_level_gendarme >= 1 && life_level_gendarme <= 6) then {
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
	[] call life_fnc_updateMarkers;
} else {
	//Load the main menu
	[] spawn life_fnc_initMainMenu;
	[] call life_fnc_updateMarkers;
};

[] spawn {
	uiSleep (1 * 60);

	if (license_civ_rebel) then {
		license_civ_rebel = false;
		life_atmbank = life_atmbank + 5000000;

		_result = ["AH ! Vous Voila, Je me présente, je suis membre du Syndikat, Ce groupe est maintenant au pouvoir de tout mouvement insurgé ! A partir de maintenant votre entrainement est plus actif ! Si vous voulez rejoindre le mouvement, faudra étre Ingénieux...", "Message Téléphone"] call BIS_fnc_guiMessage;

		[1] call SOCK_fnc_updatePartial;
		[2] call SOCK_fnc_updatePartial;
	};
};