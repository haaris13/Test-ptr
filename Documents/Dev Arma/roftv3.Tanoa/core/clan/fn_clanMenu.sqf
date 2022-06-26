#include "..\..\script_macros.hpp"
/*
	File:fn_clanMenu.sqf

	Autor:IronBlade
*/

disableSerialization;

createDialog "Dialog_Clan";

_displayIDD = 6400;

_btnLeave = CONTROL(_displayIDD, 6421);
_btnMoneyAction = CONTROL(_displayIDD, 6423);
_btnKick = CONTROL(_displayIDD, 6424);
_btnPromote = CONTROL(_displayIDD, 6425);
_btnUpgrade = CONTROL(_displayIDD, 6426);
_btnDelete = CONTROL(_displayIDD, 6427);

_editXPTaxe = CONTROL(_displayIDD, 6428);
_editMoneyTaxe = CONTROL(_displayIDD, 6429);
_btnTaxeXP = CONTROL(_displayIDD, 6430);
_btnTaxeMoney = CONTROL(_displayIDD, 6431);

_group = group player;

_clanId = _group getVariable ["clan_id", 0];
_clanName = _group getVariable ["clan_name", ""];
_clanMembers = _group getVariable ["clan_members", []];
_clanBanque = _group getVariable ["clan_bank", 0];
_clanOwner = _group getVariable ["clan_owner", ""];
_clanUpgradeID = _group getVariable ["clan_upgradeID", 0];

_curentLevel = 0;

_btnMoneyAction ctrlEnable false; // Emmett : Désactive pour tout le monde la possibilité de retirer de l'argent dans le clan

{
	if (getPlayerUID player == (_x select 0)) exitWith {
		_curentLevel = _x select 2;
	};
} forEach _clanMembers;

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");

_gradeCfg = (format["getnumber (_x >> 'level') == %1", _curentLevel] configClasses (_cfgRank)) select 0;

_canDo = getArray(_gradeCfg >> "canDo");

if (_clanOwner == getPlayerUID player) then {
	_btnLeave ctrlEnable false;
};

if (_clanOwner != getPlayerUID player) then {
	_btnDelete ctrlEnable false;
};

if !("takeMoney" in _canDo) then {
	_btnMoneyAction ctrlEnable false;
};

if !("kickPlayer" in _canDo) then {
	_btnMoneyAction ctrlEnable false;
};

if !("upgradeClan" in _canDo) then {
	_btnUpgrade ctrlEnable false;
};

if !("modifyTaxeXP" in _canDo) then {
	_btnTaxeXP ctrlEnable false;
	_editXPTaxe ctrlEnable false;
};

if !("modifyTaxeMoney" in _canDo) then {
	_btnTaxeMoney ctrlEnable false;
	_editMoneyTaxe ctrlEnable false;
};

_btnKick ctrlEnable false;
_btnPromote ctrlEnable false;

[] spawn life_fnc_clanMenuList;