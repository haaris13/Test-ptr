#include "..\..\script_macros.hpp"
/*
	File: fn_clanMenuUpgradeAction.sqf

	Autor: IronBlade
*/

disableSerialization;

_list = CONTROL(6500, 6502);
_button = CONTROL(6500, 6501);
_info = CONTROL(6500, 6504);

if ((lbCurSel _list) == -1) exitWith {};

_group = group player;
if (isNil {_group getVariable "clan_id"}) exitWith {diag_log "Group Null"; closeDialog 0;};

_clan_bank = _group getVariable "clan_bank";

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgUpgrade = (_cfgClan >> "Upgrade");

_data = _list lbData (lbCurSel _list);
_value = _list lbValue (lbCurSel _list);

if (_value == 0) exitWith {diag_log "value == 0"};

_cfgSelect = (_cfgUpgrade >> _data);

diag_log configName _cfgSelect;

_price = getNumber(_cfgSelect >> "price");
_needLevel = getNumber(_cfgSelect >> "needLevel");
_upgradeLevel = getNumber(_cfgSelect >> "level");

_level = [] call life_fnc_clanGetLevelByXP;

if (_level < _needLevel || _price > _clan_bank) exitWith {hint "Vous n'avez pas le nécésaire !"; playSound "addItemFailed";};

uiSleep random(1);

_clan_bank = _group getVariable "clan_bank";
_clan_upgradeID = _group getVariable "clan_upgradeID";

if (_upgradeLevel <= _clan_upgradeID) exitWith {diag_log "_upgradeLevel <= _clan_upgradeID";};
if (_price > _clan_bank) exitWith {diag_log "_price > _clan_bank";};

_clan_bank = _clan_bank - _price;

_group setVariable ["clan_bank", _clan_bank, true];

[player, _group, _upgradeLevel] remoteExec ["TON_fnc_clanUpgrade", 2];

hint "Amélioration en cours !";

closeDialog 0;

uiSleep 0.3;

[] spawn life_fnc_clanMenuList;