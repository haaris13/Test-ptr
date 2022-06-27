#include "..\..\script_macros.hpp"
/*
	File:fn_clanMenuLbChange.sqf

	Autor:IronBlade
*/

disableSerialization;

_displayIDD = 6400;

_list = CONTROL(_displayIDD, 6411);
_ctrlInfo = CONTROL(_displayIDD, 6412);
_btnKick = CONTROL(_displayIDD, 6424);
_btnPromote = CONTROL(_displayIDD, 6425);

if ((lbCurSel _list) == -1) exitWith {};

_data = _list lbData (lbCurSel _list);
_data = parseNumber (_data);

_group = group player;

_members = _group getVariable "clan_members";
_current = _members select _data;

_uidP = _current select 0;
_name = _current select 1;
_level = _current select 2;

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");

_currentRank = (format["getnumber (_x >> 'level') == %1", _level] configClasses (_cfgRank)) select 0;
_displayName = getText(_currentRank >> "displayName");

_currentRankPlayer = [] call life_fnc_clanGetRank;

_canDo = getArray(_currentRankPlayer >> "canDo");

if ("promotePlayer" in _canDo && _uidP != getPlayerUID player) then {
	_btnPromote ctrlEnable true;
} else {
	_btnPromote ctrlEnable false;	
};

if ("kickPlayer" in _canDo && _uidP != getPlayerUID player) then {
	_btnKick ctrlEnable true;
} else {
	_btnKick ctrlEnable false;
};

_present = "Non";
{
	_player = _x;
	if (getPlayerUID _player == _uidP) exitWith {_present = "Oui";};
} forEach (units (group player));

_ctrlInfo ctrlSetStructuredText parseText format [
	"Information du Membre:" + "<br/>" +
	"Nom: %1" + "<br/>" +
	"Grade: %2" + "<br/>" +
	"En Service: %3",
	_name,
	_displayName,
	_present
];