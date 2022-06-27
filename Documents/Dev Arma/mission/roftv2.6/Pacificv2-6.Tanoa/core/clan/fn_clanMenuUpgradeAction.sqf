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
_level = _level select 0;

if (_level < _needLevel || _price > life_atmbank) exitWith {["Error", "Vous n'avez pas le nécesaire sur votre compte !"] spawn life_fnc_showPredefinedNotification;};

uiSleep random(1);

_clan_bank = _group getVariable "clan_bank";
_clan_upgradeID = _group getVariable "clan_upgradeID";

if (_upgradeLevel <= _clan_upgradeID) exitWith {diag_log "_upgradeLevel <= _clan_upgradeID";};
if (_price > life_atmbank) exitWith {diag_log "_price > _clan_bank";};

life_atmbank = life_atmbank - _price;
[1] call SOCK_fnc_updatePartial;

//_group setVariable ["clan_bank", _clan_bank, true];

[player, _group, _upgradeLevel] remoteExec ["TON_fnc_clanUpgrade", 2];

["Accepted", "Amélioration en cours !"] spawn life_fnc_showPredefinedNotification;

closeDialog 0;

uiSleep 0.3;

[] spawn life_fnc_clanMenuList;