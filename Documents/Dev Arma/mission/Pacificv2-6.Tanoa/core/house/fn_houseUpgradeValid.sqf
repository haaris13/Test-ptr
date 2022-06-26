#include "..\..\script_macros.hpp"
/*
	File: fn_houseUpgradeValid.sqf

	Autor:IronBlade
*/
_type = CONTROL_DATA(16101);
_price = CONTROL_VALUE(16101);

if (_price > life_atmbank) exitWith {};

life_atmbank = life_atmbank - _price;
[1] call SOCK_fnc_updatePartial;

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");
_upgradeID = getNumber(_cfgHouses >> "Upgrades" >> _type >> "id");

_index = life_vehicles find (life_house_upgrade getVariable ["container", objNull]);
life_vehicles deleteAt _index;

[getPlayerUID player, life_house_upgrade, _upgradeID] remoteExec ["TON_fnc_houseUpgrade", RSERV];

["Info", "Mise à jour en cours..."] spawn life_fnc_showPredefinedNotification;
closeDialog 0;

waitUntil {sleep 0.1; (life_house_upgrade getVariable["house_upgrade", 0] == _upgradeID)};

life_vehicles pushBack (life_house_upgrade getVariable ["container", objNull]);