/*
	File: fn_clanHouseSell.sqf

	Autor: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};

_group = group player;

if !((_house getVariable "clan_group") isEqualTo _group) exitWith {hint "Cette Maison ne vous appartien pas !"};
if (((group player) getVariable "clan_owner") != getPlayerUID player) exitWith {};

closeDialog 0;

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgBuilding = (_cfgClan >> "Building");

if !(isClass (_cfgBuilding >> typeOf _house)) exitWith {};
_currentConfig = (_cfgBuilding >> typeOf _house);

_price = round(getNumber(_currentConfig >> "price") / 2);

_action = [
	format["Voulez vous vraiment la vendre pour %1",
	[_price] call life_fnc_numberText
	],localize "STR_House_Purchase","Vendre",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (!_action) exitWith {};

_clanMoney = _group getVariable "clan_bank";
_clanMoney = _clanMoney + _price;
_group setVariable ["clan_bank", _clanMoney, true];

[_group, _house] remoteExec ["TON_fnc_clanSellHouse", 2];