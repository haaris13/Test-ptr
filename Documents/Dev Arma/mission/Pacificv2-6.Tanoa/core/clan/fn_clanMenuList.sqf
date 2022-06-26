#include "..\..\script_macros.hpp"
/*
	File:fn_clanMenuList.sqf

	Autor:IronBlade
*/

disableSerialization;

_list = CONTROL(6400, 6411);
_ctrlInfo = CONTROL(6400, 6413);

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");
_cfgUpgrade = (_cfgClan >> "Upgrade");

_group = group player;

lbClear _list;

{
	_uid = _x select 0;
	_name = _x select 1;
	_level = _x select 2;

	_gradeCfg = (format["getnumber (_x >> 'level') == %1", _level] configClasses (_cfgRank)) select 0;

	_gradeDisplay = getText(_gradeCfg >> "displayName");

	_list lbAdd format["%1 - %2", _name, _gradeDisplay];
	_list lbSetData [(lbSize _list)-1,str(_forEachIndex)];
	_list lbSetValue [(lbSize _list)-1,_level];

	if (_uid == getPlayerUID player) then {
		_list lbSetColor [(lbSize _list)-1, [0,0.7,0,1]];
	};
} forEach (_group getVariable["clan_members",[]]);

_clanId = _group getVariable ["clan_id", 0];
_clanName = _group getVariable ["clan_name", ""];
_clanMembers = _group getVariable ["clan_members", []];
_clanBanque = _group getVariable ["clan_bank", 0];
_clanOwner = _group getVariable ["clan_owner", ""];
_clanUpgradeID = _group getVariable ["clan_upgradeID", 0];
_clanXp = _group getVariable ["clan_xp", 0];
_clanTaxe = _group getVariable ["clan_taxe", [0,0]];
_garageNbActual = _group getVariable ["clan_garage", 0];

_clanTaxeMoney = _clanTaxe select 0;
_clanTaxeXP = _clanTaxe select 1;

_curentUpgrade = (format["getnumber (_x >> 'level') == %1", _clanUpgradeID] configClasses (_cfgUpgrade)) select 0;

_garageNb = getNumber(_curentUpgrade >> "garageNb");
_maxMembers = getNumber(_curentUpgrade >> "maxMembers");
_maxMoney = getNumber(_curentUpgrade >> "maxBank");

_levelInfo = [] call life_fnc_clanGetLevelByXP;
_currLevel = _levelInfo select 0;
_xpForNext = _levelInfo select 1;
_xpTowardsNext = _levelInfo select 2;

_xpText = format["%1 (%2/%3)", _currLevel, _xpTowardsNext, _xpForNext];

_ctrlInfo ctrlSetStructuredText parseText format [
	"<t size='0.8'>" +
	"Informations Générales:" + "<br/>" +
	"Clan: %1" + "<br/>" +
	"Membres: %2" + "<br/>" +
	"Banque: %3$/%10$" + "<br/>" +
	"Niveau: %4" + "<br/>" +
	"Amélioration: Niveau %5" + "<br/>" +
	"Membres Maximum: %6" + "<br/>" +
	"Taille du Garage: %7" + "<br/>" +
	"Véhicules dans le Garage: %8" + "<br/>" +
	"Taxe XP: %9%11" + "<br/>" +
	/*"Taxe Argent: %11%12" + */ "</t>",
	_clanName,
	count _clanMembers,
	[_clanBanque] call life_fnc_numberText,
	_xpText,
	_clanUpgradeID,
	_maxMembers,
	_garageNb,
	_garageNbActual,
	_clanTaxeXP,
	_maxMoney,
	"%"
];