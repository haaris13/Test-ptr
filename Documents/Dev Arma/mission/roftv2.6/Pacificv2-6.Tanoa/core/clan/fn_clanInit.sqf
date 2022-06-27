/*
	File: fn_clanInit

	Autor:IronBlade
*/

if(playerSide != civilian) exitWith { life_session_clan = true; };
[player] join (createGroup civilian);

_wait = round(random(8));
sleep _wait;

_goodGrp = grpNull;

_find = false;
{
	_group = _x;
	_clanID = _group getVariable "clan_id";

	if !(isNil "_clanID") then {
		_members = _group getVariable "clan_members";

		{
			_uid = _x select 0;
			if (_uid == getPlayerUID player) exitWith {
				_find = true;
			};
		} forEach _members;
	};

	if (_find) exitWith {_goodGrp = _group;};
} forEach allGroups;

if (!_find) then {
	[player] remoteExec ["TON_fnc_clanPlayerGetClan", 2];
} else {
	[player] join _goodGrp;

	life_group = _goodGrp;

	_owner = _goodGrp getVariable "clan_owner";

	if (_owner == getPlayerUID player) then {
		_goodGrp selectLeader player;
		[player,_goodGrp] remoteExecCall ["TON_fnc_clientGangLeader",(units _goodGrp)];
	};
	[0, (_goodGrp getVariable ["clan_build", objNull])] spawn life_fnc_clanHouseUpdate;

	life_session_clan = true;
};