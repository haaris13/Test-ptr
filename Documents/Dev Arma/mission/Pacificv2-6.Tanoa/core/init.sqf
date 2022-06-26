#include "..\script_macros.hpp"
/*
	Master client initialization file
*/
life_firstSpawn = true;
life_session_completed = false;
private["_handle","_timeStamp"];
0 cutText["Paramétrage du client, patienter...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Tanoa Life Client Init ----------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
//[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile PreprocessFileLineNumbers "core\configuration.sqf";

//Set bank amount for new players
switch (playerSide) do {
	case west: {
		BANK = LIFE_SETTINGS(getNumber,"bank_cop");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
	};
	case civilian: {
		BANK = LIFE_SETTINGS(getNumber,"bank_civ");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
	};
	case independent: {
		BANK = LIFE_SETTINGS(getNumber,"bank_med");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
	};
};

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

diag_log "::Life Client:: Received server functions.";
0 cutText ["En attente du serveur...","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};

waitUntil{!isNil "life_server_code"};

waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};

if(!isNil "life_server_extDB_notLoaded" && {life_server_extDB_notLoaded != ""}) exitWith {
	diag_log life_server_extDB_notLoaded;
	999999 cutText [life_server_extDB_notLoaded,"BLACK FADED"];
	999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};

life_session_clan = false;
[] call life_fnc_claninit;
waitUntil {life_session_clan};

0 cutText["Finition client","BLACK FADED"];
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

switch (playerSide) do {
	case west: {
		_handle = [] spawn life_fnc_initCop;
		waitUntil {scriptDone _handle};
	};
	case civilian: {
		//Initialize Civilian Settings
		_handle = [] spawn life_fnc_initCiv;
		waitUntil {scriptDone _handle};
	};
	case independent: {
		//Initialize Medics and blah
		_handle = [] spawn life_fnc_initMedic;
		waitUntil {scriptDone _handle};
	};
};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Tanoa Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

life_sidechat = true;
//[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
0 cutText ["","BLACK IN"];

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_VehicleTags = ["LIFE_VehicleTags","onEachFrame","life_fnc_vehicleTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

//[] spawn life_fnc_speaking;

player SVAR ["steam64ID",steamid];
player SVAR ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
	life_disable_getIn = false;
	player moveInCargo (_this select 0);
	life_disable_getOut = true;

	['Vous avez été attaché et les menottes sont sanglé a la ceinture du véhicule.'] call life_fnc_dynamicText;
";

[] spawn life_fnc_survival;

[getPlayerUID player, player] remoteExecCall ["DB_fnc_getPlayerParam",RSERV];
[getPlayerUID player, player] remoteExecCall ["DB_fnc_getPlayerAchievement",RSERV];


/*
if (side player isEqualTo west) then {
	switch (FETCH_CONST(life_coplevel)) do {
			case 1:{life_paycheck = 150;};
			case 2:{life_paycheck = 150;};
			case 3:{life_paycheck = 150;};
			case 4:{life_paycheck = 150;};
			case 5:{life_paycheck = 150;};
			case 6:{life_paycheck = 150;};
			case 7:{life_paycheck = 150;};
			case 8:{life_paycheck = 150;};
			case 9:{life_paycheck = 150;};
			case 10:{life_paycheck = 150;};
			case 11:{life_paycheck = 150;};
		};
};
*/

//Make the paycheck static.
CONSTVAR(life_paycheck); 



if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};

[] spawn life_fnc_fuelStationInit;

[] spawn {

	waitUntil {!isNil "life_explorer_wreck"};

	life_current_explorer_wreck = objNull;

	while {true} do {

		//waitUntil {life_explorer_wreck != []};

		sleep 10;

		_explorer_wreck = objNull;
		life_explorer_dist = 100000;

		{
			if (player distance2D _x < life_explorer_dist) then {
				_explorer_wreck = _x;
				life_explorer_dist = (player distance2D _x);
			};
		} forEach life_explorer_wreck;	

		life_current_explorer_wreck = _explorer_wreck;
	};
};

[] spawn {
	_marker = createMarkerLocal [format["%1_marker","moi_map"], visiblePosition player];
	_marker setMarkerColorLocal "ColorCIV";
	_marker setMarkerTypeLocal "Mil_dot";
	_marker setMarkerTextLocal format["%1", "  Moi"];

	while {true} do {
		uiSleep (0.2);
		_marker setMarkerPosLocal (visiblePosition player);
	};	
};

[] spawn {
	
	while {true} do {

		uiSleep (20 * 60);

		systemChat "Sauvegarde automatique en cours..."; // Sync Data Auto
		[] call SOCK_fnc_updateRequest;
	};
};

//Move to main menu position
player setPos (getMarkerPos "mainscreen_location");
player setDir 210;

//Line drawing thing, please add a config setting for this :(

[getPlayerUID player,player getVariable["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];

[] spawn life_fnc_setupZoneGang;

[] spawn life_fnc_initSystem;

[] spawn life_fnc_initInfoWeapons;

[] spawn life_fnc_initInfoGear;

DYNAMICMARKET_boughtItems = [];
[[getPlayerUID player],"TON_fnc_playerLogged",false,false] spawn life_fnc_MP;

if ((call life_adminlevel) > 1) then {
	life_actions = life_actions + [player addAction["<t color='#FF0000'>Admin Ejection</t>", life_fnc_emergencyEject, [], -9, false, true, "", "((vehicle player) != player) && !((vehicle player) isKindOf 'ParachuteBase') && life_mode_admin"]];
};

[] spawn life_fnc_initRadio;

waitUntil {!isNull ([] call BIS_fnc_displayMission)};
waitUntil {markerIsConfig};

[] spawn life_fnc_smartMarkerInit;

_side = switch(playerSide) do {
	case west:{"cop"};
	case civilian: {"civ"};
	case independent: {"med"};
	default {"Error"};
};

// Init licenses
{
	_name = (configName _x);
	
	if(LICENSE_VALUE(_name,_side)) then {
		["init", _name] spawn life_fnc_licenseActionEvent;
	};
} foreach (format["getText(_x >> 'side') isEqualTo '%1'", _side] configClasses (missionConfigFile >> "Licenses"));