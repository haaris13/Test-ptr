#include "..\..\script_macros.hpp"
/*
	File:fn_houseVehicleMenu.sqf

	Author: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

closeDialog 0;

disableSerialization;

createDialog "Dialog_House_Vehicle";

_list = CONTROL(16200,16201);

_cfgHouses = (missionConfigFile >> "CfgHouses");

_classGarage = getArray(_cfgHouses >> "garage_whitelist_veh");

_cfgBuilding = (_cfgHouses >> "CfgBuild");
_currentConfig = (_cfgBuilding >> typeOf _house);

_nearVehicles = nearestObjects [getPos _house, ["Car","Truck","Air"], 20];

life_house_current = _house;

{
	_veh = _x;
	_db = _veh getVariable ["dbInfo",["",""]];

	if (alive _veh && (_db select 0) isEqualTo (getPlayerUID player) && (typeOf _veh in _classGarage)) then {
		_className = typeOf _veh;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_list lbAdd _displayName;
		_list lbSetData [(lbSize _list)-1, str(_forEachIndex)];
		_list lbSetPicture [(lbSize _list)-1, _picture];
	};

} forEach _nearVehicles;

CONTROL(16200,16203) ctrlEnable false;