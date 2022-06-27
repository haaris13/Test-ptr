/*
	File: fn_clanHouseSell.sqf

	Autor: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};

_group = group player;

if !((_house getVariable "clan_group") isEqualTo _group) exitWith {["Error", "Cette Maison ne vous appartient pas !"] spawn life_fnc_showPredefinedNotification;};
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

life_cash = life_cash + _price;
[0] call SOCK_fnc_updatePartial;

[_group, _house] remoteExec ["TON_fnc_clanSellHouse", 2];