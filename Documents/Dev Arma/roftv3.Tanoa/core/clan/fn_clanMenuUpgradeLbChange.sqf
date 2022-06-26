#include "..\..\script_macros.hpp"
/*
	File: fn_clanMenuUpgradeLbChange.sqf

	Autor: IronBlade
*/

disableSerialization;

_list = CONTROL(6500, 6502);
_button = CONTROL(6500, 6501);
_info = CONTROL(6500, 6504);


if ((lbCurSel _list) == -1) exitWith {_button ctrlEnable false;};
_group = group player;
if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

_clan_bank = _group getVariable "clan_bank";

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgUpgrade = (_cfgClan >> "Upgrade");

_data = _list lbData (lbCurSel _list);
_value = _list lbValue (lbCurSel _list);

if (_value == 0) then {
	_button ctrlEnable false;
} else {
	_button ctrlEnable true;	
};

_badColor = "<t color='#b70000'>%1</t>";
_goodColor = "<t color='#b2ec00'>%1</t>";

_cfgSelect = (_cfgUpgrade >> _data);

_price = getNumber(_cfgSelect >> "price");
_needLevel = getNumber(_cfgSelect >> "needLevel");
_maxMembers = getNumber(_cfgSelect >> "maxMembers");
_trunk = getNumber(_cfgSelect >> "trunk");
_garageNb = getNumber(_cfgSelect >> "garageNb");

_level = [] call life_fnc_clanGetLevelByXP;

_priceText = "";
_levelText = "";

if (_price > _clan_bank) then {
	_priceText = format[_badColor, format["%1$", [_price] call life_fnc_numberText]];
	_button ctrlEnable false;
} else {
	_priceText = format[_goodColor, format["%1$", [_price] call life_fnc_numberText]];
};

if (_needLevel > _level) then {
	_levelText = format[_badColor, _needLevel];
	_button ctrlEnable false;
} else {
	_levelText = format[_goodColor, _needLevel];
};


_info ctrlSetStructuredText parseText format [
	"Information Clan: " + "<br/>" +
	"Prix: %1" + "<br/>" +
	"Niveau de Gang Nécésaire: %2" + "<br/>" +
	"Nombre Membres Max: %3" + "<br/>" +
	"<br/>" +
	"Information Maison Clan: " + "<br/>" +
	"Taille Garage: %4" + "<br/>" +
	"Taille Coffre: %5",
	_priceText,
	_levelText,
	_maxMembers,
	_garageNb,
	_trunk
];