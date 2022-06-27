#include "..\..\script_macros.hpp"
/*
	File: fn_requestReceivedMed.sqf
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

diag_log "---Received Med---";

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

//diag_log str (_this);

// 0: SteamId
// 1: ?
// 2: Cash
// 3: BankAcc
// 4: AdminLevel
// 5: Donator Lvl
// 6: Licenses
// 7: Medic Level ?
// 8: Gear
// 9: Reputation
// 10: Perks
// 11: Xp
// 12: Level
// 13: PlayTime
// 14: Stats
// 15: Storage
// 22: Keys

	// Init
CONST(life_coplevel, 0);
CONST(life_euLevel, 0);
CONST(life_depanLevel, 0);
CONST(life_ocasLevel, 0);
CONST(life_barLevel, 0);
CONST(life_pressLevel,0);

//Parse basic player information.
CASH = parseNumber (SEL(_this,2));
BANK = parseNumber (SEL(_this,3));

CONST(life_adminlevel, (SEL(_this,4)));
life_ftrNiv = (SEL(_this,4));

CONST(life_donator, (SEL(_this,5)));

//Licenses
if(count (SEL(_this,6)) > 0) then {
	{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,6));
};

CONST(life_medicLevel, (_this select 7));

//Gear
life_gear = SEL(_this,8);
[true] call life_fnc_loadGear;

diag_log "---SIDE---";

REPUTATION = parseNumber (SEL(_this,9));

//Perks
if(count (SEL(_this,10)) > 0) then {
	//{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,10));
	{
		life_activePerks pushBack _x;
	} foreach (SEL(_this,10));
};

PLAYERXP = parseNumber (SEL(_this,11));  
PLAYERLEVEL = parseNumber (SEL(_this,12));  
PLAYERPLAYTIME = parseNumber (SEL(_this,13));

_stats = (_this select 14);
[_stats] call life_fnc_setLifeStats;

life_storage = SEL(_this,15);

diag_log "---KEYS---";

//Check for keys
if(count (SEL(_this,22)) > 0) then {
	{life_vehicles pushBack _x;} foreach (SEL(_this,22));
};

diag_log "---END KEYS---";

[] call life_fnc_checkxp;

diag_log "---END---";

life_session_completed = true;
