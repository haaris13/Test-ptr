#include "..\..\script_macros.hpp"
/*
	File:fn_houseVehicle.sqf

	Author: IronBlade
*/
_type = param [0,0,[0]];
_house = param [1,ObjNull,[ObjNull]];

_houseCfg = (missionConfigFile >> "CfgHouses" >> "CfgBuild" >> (typeOf _house));
_garagePos = getArray(_houseCfg >> "garagePos");
_garageDir = getNumber(_houseCfg >> "dirGarage");

_garagePos = _house modelToWorld _garagePos;
_garageDir = (getDir _house) + _garageDir;

closeDialog 0;

switch (_type) do { 
	case 0 : {
		if(count(nearestObjects[_garagePos,["Car","Ship","Air"], 5]) > 0) exitWith {hint "Des véhicules sont présent sur la zone !"};

		_vid = _house getVariable["house_garage", 0];

		if (_vid == 0) exitWith {};

		_house setVariable["house_garage", 0, true];

		[_vid, getPlayerUID player, _garagePos, player, 0, _garageDir, 0] remoteExec ["TON_fnc_spawnVehicle", 2];

		[_house, player] remoteExec ["TON_fnc_houseTakeVeh", 2];
	};

	case 1 : {
		[_house] spawn life_fnc_houseVehicleMenu;
	};
};