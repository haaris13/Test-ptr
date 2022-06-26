#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine, IronBlade

	Description:
	Sends specific information to the server to update on the player,
	meant to keep the network traffic down with large sums of data flowing
	through remoteExec
*/
private["_mode","_packet","_array","_flag", "_varName"];
_mode = param [0,0,[0]];
_packet = [steamid,playerSide,nil,_mode];
_array = [];
_flag = switch(playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};};

if(!life_session_completed) exitWith {};

switch(_mode) do {
	case 0: {
		_packet set[2,CASH];
	};

	case 1: {
		_packet set[2,BANK];
	};

	case 2: {
		{
			_varName = LICENSE_VARNAME(configName _x,_flag);
			_array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
		} foreach (format["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

		_packet set[2,_array];
	};

	case 3: {
		[] call life_fnc_saveGear;
		_packet set[2,life_gear];
	};

	case 4: {
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
		_packet set[2,_array];
	};

	case 5: {
		_packet set[2,life_is_arrested];
	};

	case 6: {
		_packet set[2,CASH];
		_packet set[4,BANK];
	};

	case 7: {
		// Tonic is using for keychain..?
	};

	case 8: {
		_packet set[2,(position player)];
	};
	
	case 9: {
		_packet set[2,[]];
	};

	case 10: {

		_arraySkills = [];

		{
			_varName = PROFESSION_VARNAME(configName _x);
			_arraySkills pushBack [_varName, PROFESSION_VALUE(configName _x)];
		} foreach ("true" configClasses (missionConfigFile >> "Professions"));

		_packet set[2, _arraySkills];
	};

	case 11: {
		_packet set[2, life_current_nb_share];
		_packet set[4, life_nb_supress];
	};

	case 12: {
		_packet set[2, life_playerxp];
	};

	case 13: {
		_packet set[2, life_achievement];
	};

	case 14: {
		if (playerSide != civilian) exitWith {diag_log "not civ";};
		_packet set[2, life_bank_can_depose];
	};

	case 15: {
		if (playerSide != civilian) exitWith {diag_log "not civ";};
		_packet set[2, life_illegal_profit];
	};

	case 16: {
		if (playerSide != civilian) exitWith {diag_log "not civ";};
		_packet set[2, life_money_laundering];
	};
};


if (life_mode_admin && _mode == 3) exitWith {["Error", "Impossible Mode Admin !"] spawn life_fnc_showPredefinedNotification;};

_packet remoteExecCall ["DB_fnc_updatePartial",RSERV];
