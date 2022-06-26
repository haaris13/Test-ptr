#include "..\..\script_macros.hpp"
/*
	File: fn_clanPromote.sqf

	Autor: IronBlade
*/

disableSerialization;

_listMembers = CONTROL(6400, 6411);

if ((lbCurSel _listMembers) == -1) exitWith {["Error", "Aucun Membre sélectionné !"] spawn life_fnc_showPredefinedNotification;};

_group = group player;

_members = _group getVariable "clan_members";

_data = _listMembers lbData (lbCurSel _listMembers);
_data = parseNumber (_data);

if (count _members <= _data) exitWith {closeDialog 0; ["Error", "Vous ne pouvez pas faire cela (action impossible)"] spawn life_fnc_showPredefinedNotification;};

life_clan_current_member = (_members select _data);

if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");

_currentRank = [] call life_fnc_clanGetRank;

_canPromoteList = getArray(_currentRank >> "canPromote");

if (count _canPromoteList == 0) exitWith {closeDialog 0};

_levelPlayer = getNumber(_currentRank >> "level");

_levelMember = life_clan_current_member select 2;
if !(_levelMember in _canPromoteList) exitWith {["Error", "Vous ne pouvez pas modifier un membre ayant ce grade !"] spawn life_fnc_showPredefinedNotification;};
if (_levelMember > _levelPlayer) exitWith {["Error", "Vous ne pouvez pas modifier le grade d'un membre plus haut que vous !"] spawn life_fnc_showPredefinedNotification;};

disableSerialization;
createDialog "Dialog_Clan_Promote";

_listPromote = CONTROL(6600, 6602);
_button = CONTROL(6600, 6601); 

_button ctrlEnable false;
lbClear _listPromote;

_ranks = ("true" configClasses (missionConfigFile >> "CfgClan" >> "Rank"));

{
	_cfg = _x;
	_level = getNumber(_cfg >> "level");
	_displayName = getText(_cfg >> "displayName");

	if (_level in _canPromoteList) then {
		_listPromote lbAdd _displayName;
		_listPromote lbSetData [(lbSize _listPromote)-1, configName(_cfg)];

		if (_level == _levelMember) then {
			_listPromote lbSetValue [(lbSize _listPromote)-1, 0];
			_listPromote lbSetColor [(lbSize _listPromote)-1, [0,0.7,0,1]];
		} else {
			_listPromote lbSetValue [(lbSize _listPromote)-1, 1];
		};
	};
} forEach _ranks;