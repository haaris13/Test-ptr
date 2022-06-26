#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith {
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

[] spawn {
	while {true} do {
		uiSleep 60;
		[] call life_fnc_updateClothing;

		if ((player ammo (handgunWeapon player)) > 3) then {

			if ((handgunWeapon player) in ["DDOPP_X26_b"] && playerSide == west) then {
				player setAmmo [handgunWeapon player, 3];
			};
		};
	};
};

[] spawn life_fnc_showTracers;

player setVariable["copLevel", (FETCH_CONST(life_coplevel))];
player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
player setVariable["team",(FETCH_CONST(life_copUlevel)),true];
//Load the main menu
[] spawn life_fnc_initMainMenu;

_illegalmarkers = [
					"camp_insurge",
					"turtle_1_name_1",
					"Dealer_1",
					"turle_dealer_1",
					"weed_1",
					"heroin_1",
					"cocaine_processing",
					"turtle_2",
					"turtle_1_name_2",
					"cocaine_1",
					"weed_p",
					"heroin_p",
					"coca_p",
					"Dealer_3",
					"pollos_1",
					"straw_1",
					"straw_p",
					"serpent_p",
					"serpent_1",
					"trafique_p_1",
					"khat_p_1",
					"khat_1"
];

/*
_nbCiv = (civilian countSide playableUnits);
_nb_cop = (west countSide playableUnits);

_ratio = round(_nbCiv / 2);

if (_nb_cop > _ratio && (FETCH_CONST(life_adminlevel) == 0) && life_mode_copCiv && _nb_cop > 3 && (FETCH_CONST(life_coplevel)) < 10)  then {
	["NOTEnougthCiv",false,true] call BIS_fnc_endMission;
	sleep 35;
};*/

[] spawn life_fnc_checkFront;

/*
_nb_cop = (west countSide playableUnits);
if (_nb_cop > 10) exitWith {
	["NOTEnougthCiv",false,true] call BIS_fnc_endMission;
	sleep 35;
};
*/

{_x setMarkerAlphaLocal 0; } forEach _illegalmarkers;

[] spawn life_fnc_copMarkers;
[] spawn life_fnc_initCopShareMarkers;

box_bank addAction["Fermer la banque",life_fnc_fixBank,"",0,false,false,"",'playerSide == west && player distance box_bank < 5 ']; //de base 5 modifié par alharis