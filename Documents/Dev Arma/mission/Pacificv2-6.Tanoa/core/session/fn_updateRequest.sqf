#include "..\..\script_macros.hpp"
/*
	File: fn_updateRequest.sqf
	Author: Tonic
*/
private["_packet","_array","_flag","_arraySkills", "_perks"];

if (life_mode_admin) exitWith {["Error", "Impossible Mode Admin !"] spawn life_fnc_showPredefinedNotification;};
if(!life_session_completed) exitWith {};

saveProfileNamespace;

_packet = [getPlayerUID player,(profileName),playerSide,CASH,BANK];
_array = [];
_arraySkills = [];
_flag = switch(playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};};

//Update playtime
_currentSessionPlayTime = serverTime - life_join_time;
life_join_time = serverTime; 
life_play_time = life_play_time + _currentSessionPlayTime;

// -- License stuff
{
	_varName = LICENSE_VARNAME(configName _x,_flag);
	_array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
} foreach (format["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

_packet pushBack _array;

[] call life_fnc_saveGear;
_packet pushBack life_gear;

// -- Profession stuff
{
	_varName = PROFESSION_VARNAME(configName _x);
	_arraySkills pushBack [_varName,PROFESSION_VALUE(configName _x)];
} foreach ("true" configClasses (missionConfigFile >> "Professions"));
_packet pushBack _arraySkills;

_packet pushback REPUTATION;
_packet pushback life_activePerks;
_packet pushback PLAYERXP;
_packet pushback PLAYERLEVEL;
_packet pushback PLAYERPLAYTIME;

_packet pushback (position player);

_packet pushback life_bank_can_depose;

// Stats
_damage = (getDammage player);
_damage = round(100 - (_damage * 100));

if (_damage > 100) then {
	_damage = 100;
};

if (_damage < 5) then {
	_damage = 5;
};

_array = [];
_array pushBack life_hunger;
_array pushBack life_thirst;
_array pushBack _damage;
_packet pushBack _array;

diag_log _packet;

_packet remoteExecCall ["DB_fnc_updateRequest",RSERV];

if !(isNil {(group player) getVariable "clan_id"}) then {
	[0, player] remoteExec ["TON_fnc_clanUpdate", 2];
	[1, player] remoteExec ["TON_fnc_clanUpdate", 2];
};