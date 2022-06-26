#include "..\..\script_macros.hpp"
/*
	File: fn_jail.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the initial process of jailing.
*/
params [
	["_unit",objNull,[objNull]],
	["_bad",false,[false]],
	["_timeJail",0,[0]],
	["_cop",objNull,[objNull]]
];

if (!_bad && isnull _cop) exitWith {diag_log "bad";};

if (!_bad && (player distance _cop) > 5) exitWith {};

if (!_bad && (((player distance (getMarkerPos "Trinunal_underscore_1") > 100) && (player distance (getMarkerPos "Tribunal_underscore_2") > 100)) && (player distance (getMarkerPos "jail_marker") > 300))) exitWith {};

diag_log ("_timeJail" + str(_timeJail));

if(isNull _unit) exitWith {}; //Dafuq?
if(_unit != player) exitWith {}; //Dafuq?
if(life_is_arrested) exitWith {}; //Dafuq i'm already arrested

player SVAR ["restrained",false,true];
player SVAR ["Escorting",false,true];
player SVAR ["transporting",false,true];

titleText[localize "STR_Jail_Warn","PLAIN"];
hint localize "STR_Jail_LicenseNOTF";
player setPos (getMarkerPos "jail_marker");

if(_bad) then {
	waitUntil {alive player};
	sleep 1;
};

//Check to make sure they goto check
if(player distance (getMarkerPos "jail_marker") > 40) then {
	player setPos (getMarkerPos "jail_marker");
};

if (!_bad) then {

	[1] call life_fnc_removeLicenses;

	_amountBank = (life_atmbank * 0.05);

	_message = "La prise en charge de votre incarcération est équivalent à 5% de votre compte en banque !";

	[_message] call life_fnc_dynamicText;

	life_atmbank = life_atmbank - _amountBank;
};

{
	_amount = ITEM_VALUE(_x);
	if(_amount > 0) then {
		[false,_x,_amount] call life_fnc_handleInv;
	};
} forEach ["heroin_unprocessed","heroin_processed","cannabis","marijuana","cocaine_unprocessed","cocaine_processed","turtle_raw"];

life_is_arrested = true;

removeAllWeapons player;
{player removeMagazine _x} forEach (magazines player);

[player,_bad,_timeJail,_cop] remoteExecCall ["life_fnc_jailSys",RSERV];
[1] call SOCK_fnc_updatePartial;
[5] call SOCK_fnc_updatePartial;
[9] call SOCK_fnc_updatePartial;