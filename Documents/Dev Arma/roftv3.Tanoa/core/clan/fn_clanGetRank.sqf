/*
	File: fn_clanGetRank.sqf

	Autor: IronBlade
*/

_group = group player;

_clanMembers = _group getVariable ["clan_members", []];

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRankGlobal = (_cfgClan >> "Rank");

_cfgRank = "";

{
	_uid = _x select 0;
	_level = _x select 2;

	if (_uid == getPlayerUID player) exitWith {
		_cfgRank = (format["getnumber (_x >> 'level') == %1", _level] configClasses (_cfgRankGlobal)) select 0;
	};
} forEach _clanMembers;

_cfgRank;