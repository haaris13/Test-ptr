#include "..\..\script_macros.hpp"
/*
	File: fn_clanMenuUpgrade.sqf

	Autor: IronBlade
*/

disableSerialization;
createDialog "Dialog_Clan_Upgrade";

_list = CONTROL(6500, 6502);
_button = CONTROL(6500, 6501); 

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

_button ctrlEnable false;
lbClear _list;

_clanUpgradeID = _group getVariable["clan_upgradeID", 0];
_cfgClan = (missionConfigFile >> "CfgClan");
_cfgUpgrade = (_cfgClan >> "Upgrade");


_upgrades = (format["getnumber (_x >> 'level') > %1", _clanUpgradeID] configClasses (_cfgUpgrade));

{
	_cfg = _x;
	_levelUp = getNumber(_x >> "level");

	_list lbAdd format["Amélioration %1", _levelUp];
	_list lbSetData [(lbSize _list)-1, configName _cfg];

	if (_forEachIndex != 0) then {
		_list lbSetColor [(lbSize _list)-1,[1,0,0,1]];
		_list lbSetValue [(lbSize _list)-1, 0];
	} else {
		_list lbSetValue [(lbSize _list)-1, 1];
	};

} forEach _upgrades;