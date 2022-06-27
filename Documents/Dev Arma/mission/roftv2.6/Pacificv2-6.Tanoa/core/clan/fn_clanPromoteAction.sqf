#include "..\..\script_macros.hpp"
/*
	File: fn_clanPromoteAction.sqf

	Autor: IronBlade
*/

if ((lbCurSel 6602) == -1) exitWith {diag_log "-1";};

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {diag_log "Group null"; closeDialog 0;};

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");

_data = lbData [6602, (lbCurSel 6602)];
_cfgCurrent = (_cfgRank >> _data);

_levelWant = getNumber(_cfgCurrent >> "level");

_uid_current_member = life_clan_current_member select 0;

_currentRank = [] call life_fnc_clanGetRank;

_canPromoteList = getArray(_currentRank >> "canPromote");

if (count _canPromoteList == 0) exitWith {closeDialog 0};

_levelPlayer = getNumber(_currentRank >> "level");

_levelMember = life_clan_current_member select 2;
if !(_levelMember in _canPromoteList) exitWith {closeDialog 0; ["Error", "Vous ne pouvez pas modifier un membre ayant ce grade !"] spawn life_fnc_showPredefinedNotification;};
if !(_levelWant in _canPromoteList) exitWith {["Error", "Vous n'avez pas le droit d'appliquer ce grade !"] spawn life_fnc_showPredefinedNotification;};
if (_levelMember > _levelPlayer) exitWith {closeDialog 0; ["Error", "Vous ne pouvez pas modifier le grade d'un membre plus haut que vous !"] spawn life_fnc_showPredefinedNotification;};

diag_log format["UID: %1 Leve: %2", _uid_current_member, _levelWant];

[_uid_current_member, _group, _levelWant] remoteExec ["TON_fnc_clanUpdatePlayer", 2];

closeDialog 0;

uiSleep 0.3;

[] spawn life_fnc_clanMenuList;