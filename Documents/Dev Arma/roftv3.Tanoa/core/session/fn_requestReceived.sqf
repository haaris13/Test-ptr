#include "..\..\script_macros.hpp"
/*
	File: fn_requestReceived.sqf
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

diag_log "---Received---";

//Error handling and junk..
if(isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(typeName _this,"STRING")) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(count _this,0)) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(EQUAL(SEL(_this,0),"Error")) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(!(EQUAL(steamid,SEL(_this,0)))) exitWith {[] call SOCK_fnc_dataQuery; hint "Request Received Diag";};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if(!isServer && (!isNil "life_adminlevel" || !isNil "life_coplevel" || !isNil "life_donator")) exitWith {
	[profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
	[profileName,format["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donator: %3",life_adminlevel,life_coplevel,life_donator]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
	sleep 0.9;
	failMission "Blacklisted";
};

//Parse basic player information.
CASH = parseNumber (SEL(_this,2));
BANK = parseNumber (SEL(_this,3));

CONST(life_adminlevel,(SEL(_this,4)));

life_ftrNiv = (SEL(_this,4));

CONST(life_donator,(SEL(_this,5)));

//Licenses
if(count (SEL(_this,6)) > 0) then {
	{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,6));
};

//Gear
life_gear = SEL(_this,8);
[true] call life_fnc_loadGear;

diag_log "---SIDE---";

//Parse side specific information.
switch(playerSide) do {
	case west: {
		CONST(life_coplevel,(SEL(_this,7)));

		CONST(life_medicLevel,0);

		life_blacklisted = SEL(_this,9);

		REPUTATION = parseNumber (SEL(_this,10));

		//Perks
		if(count (SEL(_this,11)) > 0) then {
			//{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,10));
			{
				life_activePerks pushBack _x;
			} foreach (SEL(_this,11));
		};

		PLAYERXP = parseNumber (SEL(_this,12));
		PLAYERLEVEL = parseNumber (SEL(_this,13));
		PLAYERPLAYTIME = parseNumber (SEL(_this,14));

		CONST(life_copUlevel,(SEL(_this,15)));

		life_storage = (SEL(_this,16));

		// SOS:
		CONST(life_euLevel,0);
		if ((FETCH_CONST(life_copUlevel)) == 3) then {
			player linkItem "tf_radio_fed";
		} else {
			player linkItem "tf_radio_gen";
		};
	};

	case civilian: {
		life_is_arrested = SEL(_this,7);
		CONST(life_coplevel, 0);
		CONST(life_medicLevel, 0);

		//Profs
		if(count (SEL(_this,11)) > 0) then {
			{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,11));
		};


		REPUTATION = parseNumber (SEL(_this,9));

		//Perks
		if(count (SEL(_this,10)) > 0) then {
			//{SVAR_MNS [SEL(_x,0),SEL(_x,1)];} foreach (SEL(_this,10));
			{
				life_activePerks pushBack _x;
			} foreach (SEL(_this,10));
		};

		PLAYERXP = parseNumber (SEL(_this,12));
		PLAYERLEVEL = parseNumber (SEL(_this,13));
		PLAYERPLAYTIME = parseNumber (SEL(_this,14));

		CONST(life_euLevel,(SEL(_this,15)));

		CONST(life_erpLevel, (SEL(_this,16)));

		life_level_gendarme = (SEL(_this,17));

		_pos = (_this select 18);

		if (count _pos > 0) then {
			life_pos_start = _pos;
		};

		diag_log "---HOUSES---";

		life_houses = SEL(_this,19);
		{
			_house = (nearestObjects [_x, ["House", "Building"], 50] select 0);
			life_vehicles pushBack _house;
			life_vehicles pushBack (_house getVariable ["container", objNull]);
		} foreach life_houses;

		diag_log "---HOUSES 2---";

		//[] spawn life_fnc_initEntreprise;

		[] spawn life_fnc_houseInit;

		if ((getPlayerUID player) == gouv_president_uid) then {
			life_vehicles pushBack house_president;
			life_storage = gouv_president_arsenal;
		};

		diag_log "---HOUSES 3---";

		if ((call life_euLevel) > 0) then {
			life_storage = (SEL(_this, 22));
			player linkItem "tf_radio_ghost";
		};
	};

	case independent: {

		CONST(life_medicLevel,(_this select 7));


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

		CONST(life_euLevel, 0);
		life_storage = SEL(_this,14);
	};
};

diag_log "---KEYS---";

//Check for keys
if(count (SEL(_this,21)) > 0) then {
	{life_vehicles pushBack _x;} foreach (SEL(_this,21));
};

diag_log "---END KEYS---";

[] call life_fnc_checkxp;

diag_log "---END---";

life_session_completed = true;
