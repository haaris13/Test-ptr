/*
	File: fn_reportPlayer.sqf

	Autor: Iron
	Date: 09 Mar 2020 22:09:10
	Version: 0.1
*/
_player = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_uid = getPlayerUID _player;

closeDialog 0;

if (_uid in life_reportPlayerUids) exitWith {};
life_reportPlayerUids pushBack _uid;

[player, _player] remoteExec ["TON_fnc_insertPlayerReport", 2];