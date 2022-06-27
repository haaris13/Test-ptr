/*
	File: fn_clanHouseBuy.sqf

	Autor: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {["Error", "Il vous faut un clan pour faire cela !"] spawn life_fnc_showPredefinedNotification;};
if !(isNil {_house getVariable "clan_group"}) exitWith {["Error", "Cette Maison de clan appartient à un autre clan !"] spawn life_fnc_showPredefinedNotification;};
if (((group player) getVariable "clan_owner") != getPlayerUID player) exitWith {};
_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];
if (_lock == 1) exitWith {["Error", "Maison déja Acheté !"] spawn life_fnc_showPredefinedNotification;};

if !(isNil {_group getVariable "clan_build"}) exitWith {["Error", "Une Maison de Clan Maximum !"] spawn life_fnc_showPredefinedNotification;};

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

if(life_cash < _price) exitWith {["Error", "Il n'y a pas assez d'argent sur vous !"] spawn life_fnc_showPredefinedNotification;};

life_cash = life_cash - _price;

[1, player] remoteExec ["TON_fnc_clanUpdate", 2];

[_group, _house] remoteExec ["TON_fnc_clanBuyHouse", 2];
["Accepted", "Achat en cours..."] spawn life_fnc_showPredefinedNotification;