#include "..\..\script_macros.hpp"
/*
	File: fn_houseUpgradeValid.sqf

	Autor:IronBlade
*/
_type = CONTROL_DATA(16101);
_price = CONTROL_VALUE(16101);

if (_price > CASH) exitWith {};

life_cash = life_cash - _price;

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");
_upgradeID = getNumber(_cfgHouses >> "Upgrades" >> _type >> "id");

_index = life_vehicles find (life_house_upgrade getVariable ["container", objNull]);
life_vehicles deleteAt _index;

[getPlayerUID player, life_house_upgrade, _upgradeID] remoteExec ["TON_fnc_houseUpgrade", RSERV];

hint "Mise à jour en cours !";

closeDialog 0;

waitUntil {sleep 0.1; (life_house_upgrade getVariable["house_upgrade", 0] == _upgradeID)};

life_vehicles pushBack (life_house_upgrade getVariable ["container", objNull]);