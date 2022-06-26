/*
	File: fn_clanHouseBuy.sqf

	Autor: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {hint "Il vous faut un clan pour faire cela !"};
if !(isNil {_house getVariable "clan_group"}) exitWith {hint "Cette Maison de clan appartient a un autre clan !"};
if (((group player) getVariable "clan_owner") != getPlayerUID player) exitWith {};
_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];
if (_lock == 1) exitWith {hint "Maison déja Acheté !"};

if !(isNil {_group getVariable "clan_build"}) exitWith { hint "Une Maison de Clan Maximum !"};

closeDialog 0;

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgBuilding = (_cfgClan >> "Building");

if !(isClass (_cfgBuilding >> typeOf _house)) exitWith {};
_currentConfig = (_cfgBuilding >> typeOf _house);

_price = getNumber(_currentConfig >> "price");

_action = [
	format[localize "STR_HouseClan_BuyMSG",
	[_price] call life_fnc_numberText
	],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (!_action) exitWith {};

_clanMoney = _group getVariable "clan_bank";

if(_clanMoney < _price) exitWith {hint "Il n'y à pas assez d'argent dans le clan !"};

_clanMoney = _clanMoney - _price;

_group setVariable ["clan_bank", _clanMoney, true];

[1, player] remoteExec ["TON_fnc_clanUpdate", 2];

[_group, _house] remoteExec ["TON_fnc_clanBuyHouse", 2];

hint "Achat en cours...";