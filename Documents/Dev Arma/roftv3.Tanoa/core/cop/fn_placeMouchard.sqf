/*
	File: fn_placeMouchard.sqf

	Autor:IronBlade
*/
_player = [_this,0,objNull,[objNull]] call BIS_fnc_param;

[false,"mouchard",1] call life_fnc_handleInv;

[player] remoteExec ["life_fnc_clientMouchard", _player];

_log = format ["%1 Pose Mouchard %2", name player, name _player];

[getPlayerUID player, 4, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

["Mouchard posé !"] spawn life_fnc_dynamicText;