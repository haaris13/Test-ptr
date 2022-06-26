#include "..\..\script_macros.hpp"
/*
	File: fn_clanKick.sqf

	Autor: IronBlade
*/

disableSerialization;

_listMembers = CONTROL(6400, 6411);

if ((lbCurSel _listMembers) == -1) exitWith { hint "Aucun Membre sélectionné !"};

_group = group player;

_members = _group getVariable "clan_members";

_data = _listMembers lbData (lbCurSel _listMembers);
_data = parseNumber (_data);

if (count _members <= _data) exitWith {closeDialog 0; hint "Erreur !";};

life_clan_current_member = (_members select _data);

if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

_currentRank = [] call life_fnc_clanGetRank;
_canDo = getArray(_currentRank >> "canDo");

if !("kickPlayer" in _canDo) exitWith {hint "Vous ne pouvez pas faire cela !"};

_levelPlayer = getNumber(_currentRank >> "level");

_levelMember = life_clan_current_member select 2;
if (_levelMember > _levelPlayer) exitWith {hint "Vous ne pouvez pas virer un membre plus haut que vous !"; playSound "addItemFailed";};

_uid = life_clan_current_member select 0;

if (_uid == (_group getVariable "clan_owner")) exitWith {closeDialog 0; hint "Erreur !"};

_playerGood = objNull;
{
	_player = _x;
	if (getPlayerUID _player == _uid) exitWith {_playerGood = _player;};
} forEach (units (group player));

if !(isNull _playerGood) then {
	[] remoteExec ["life_fnc_clanLeave", _playerGood];
} else {
	[_uid, group player, 0] remoteExec ["TON_fnc_clanUpdatePlayer", 2];
};

[] spawn life_fnc_clanMenuList;