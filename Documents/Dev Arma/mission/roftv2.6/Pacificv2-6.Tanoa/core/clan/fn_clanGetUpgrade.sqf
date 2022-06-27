/*
	File: fn_clanGetUpgrade.sqf

	Autor:IronBlade
*/
_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {};

_clanUpgradeID = _group getVariable["clan_upgradeID", 0];
_cfgClan = (missionConfigFile >> "CfgClan");
_cfgUpgrade = (_cfgClan >> "Upgrade");

_curentUpgrade = (format["getnumber (_x >> 'level') == %1", _clanUpgradeID] configClasses (_cfgUpgrade)) select 0;

_curentUpgrade;