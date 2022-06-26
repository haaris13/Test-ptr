#include "..\..\script_macros.hpp"
/*
	File: fn_requestReceivedCiv.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called by the server saying that we have a response so let's 
	sort through the information, validate it and if all valid 
	set the client up.


	Please god have mercy

*/
life_session_tries = life_session_tries + 1;
if(life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
if(life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};
0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

diag_log "---Received Civ---";

//Error handling and junk..
if(isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(typeName _this,"STRING")) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(count _this,0)) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(SEL(_this,0),"Error")) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(!(EQUAL(steamid,SEL(_this,0)))) exitWith {[] call SOCK_fnc_dataQuery; ["Info", "Request Received Diag"] spawn life_fnc_showPredefinedNotification;};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if(!isServer && (!isNil "life_adminlevel" OR !isNil "life_coplevel" OR !isNil "life_donator")) exitWith {
	[profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
	[profileName,format["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donator: %3",life_adminlevel,life_coplevel,life_donator]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
	sleep 0.9;
	failMission "Blacklisted";
};

// diag_log str (_this);

// 0: SteamId
// 1: ?
// 2: Cash
// 3: BankAcc
// 4: AdminLevel
// 5: Donator Lvl
// 6: Licenses
// 7: Stats
// 8: Gear
// 9: Reputation
// 10: Perks
// 11: Profesions
// 12: Xp
// 13: Level
// 14: PlayTime
// 15: Press Level
// 16: Depan Level
// 17: Gendarme Level
// 18: Player position
// 19: BankAcc Can depose
// 20: illegal_profit
// 21: money_laundering
// 22: ocas_level
// 23: bar_level
// 24: Houses
// 25: Keys
// 26: Storage

// Init default

CONST(life_coplevel, 0);
CONST(life_medicLevel, 0);

// Player Information
CASH = parseNumber (SEL(_this,2));
BANK = parseNumber (SEL(_this,3));

CONST(life_adminlevel, (SEL(_this,4)));

life_ftrNiv = (SEL(_this,4));

CONST(life_donator, (SEL(_this,5)));

//Licenses
if(count (SEL(_this,6)) > 0) then {
	{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,6));
};

_stats = (_this select 7);
[_stats] call life_fnc_setLifeStats;

//Gear
life_gear = SEL(_this,8);
[true] call life_fnc_loadGear;

REPUTATION = parseNumber (SEL(_this,9)); 

//Perks
if(count (SEL(_this,10)) > 0) then {
	//{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,10));
	{
		life_activePerks pushBack _x;
	} foreach (SEL(_this,10));
};

//Profs
if(count (SEL(_this,11)) > 0) then {
	{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,11));
};

PLAYERXP = parseNumber (SEL(_this,12));  
PLAYERLEVEL = parseNumber (SEL(_this,13));
PLAYERPLAYTIME = parseNumber (SEL(_this,14));

CONST(life_euLevel,0);

CONST(life_pressLevel,(SEL(_this,15)));

CONST(life_depanLevel,(SEL(_this,16)));

life_level_gendarme = (SEL(_this,17));

_pos = (_this select 18);
if (count _pos > 0) then {
	life_pos_start = _pos;
};

diag_log "--- BANK_ACCOUNT_CAN_DEPOSE ---";
life_bank_can_depose = parseNumber (SEL(_this,19));

diag_log "--- ILLEGAL_PROFIT ---";
life_illegal_profit = parseNumber (SEL(_this,20));

diag_log "--- MONEY_LAUNDERING ---";
life_money_laundering = parseNumber (SEL(_this,21));

CONST(life_ocasLevel,(SEL(_this,22)));
CONST(life_barLevel,(SEL(_this,23)));
CONST(life_johnsonLevel,(SEL(_this,24)));

diag_log "---HOUSES---";


life_houses = SEL(_this,25);
{
	_house = (nearestObjects [_x, ["House", "Building"], 50] select 0);
	life_vehicles pushBack _house;
	life_vehicles pushBack (_house getVariable ["container", objNull]);
} foreach life_houses;

diag_log "---Entreprise---";

[] spawn life_fnc_initEntreprise;

[] spawn life_fnc_houseInit;

if ((getPlayerUID player) == gouv_president_uid) then {
	life_vehicles pushBack house_president;
	life_storage = gouv_president_arsenal;
};

diag_log "---KEYS---";

//Check for keys
if(count (SEL(_this,26)) > 0) then {
	{life_vehicles pushBack _x;} foreach (SEL(_this,26));
};

if ((call life_euLevel) > 0) then {
	life_storage = (SEL(_this, 27));
	player linkItem "tf_radio_ghost";
};

diag_log "---END KEYS---";

[] call life_fnc_checkxp;

diag_log "---END---";

life_nb_supress = profileNamespace getVariable ["pr_life_nb_supress", 0];

life_session_completed = true;