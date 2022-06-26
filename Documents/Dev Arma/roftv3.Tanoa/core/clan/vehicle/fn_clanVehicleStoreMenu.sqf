#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleStoreMenu.sqf

	Autor: IronBlade
*/
_house = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (vehicle player != player) exitWith {};

_clan_garage = (group player) getVariable ["clan_garage", 0];
_group =  group player;
_clan = _group getVariable "clan_id";
_currentUpgrade = [] call life_fnc_clanGetUpgrade;

_maxVeh = getNumber(_currentUpgrade >> "garageNb");

if (_clan_garage >= _maxVeh) exitWith {
	hint "Il n'y a plus de place dans le Garage";
};

life_clan_house = _house;

disableSerialization;

if(!(createDialog "Dialog_Clan_Veh_Near")) exitWith {};

_listVeh = CONTROL(6800,6802);
_btn = CONTROL(6800,6803);

_btn ctrlEnable false;

_nearVehicles = nearestObjects [position life_clan_house, ["Car","Truck"],25];

lbClear _listVeh;

{
	_veh = _x;

	_db = _veh getVariable ["dbInfo",["",""]];
	_clanI = _veh getVariable ["clan",0];

	if (alive _veh && ((_db select 0) isEqualTo (getPlayerUID player) || (_clan == _clanI)) && (getDammage _veh) == 0) then {
		_className = typeOf _veh;

		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_listVeh lbAdd _displayName;
		_listVeh lbSetPicture [(lbSize _listVeh)-1, _picture];
		_listVeh lbSetValue [(lbSize _listVeh)-1, _forEachIndex];
	};

} forEach _nearVehicles;