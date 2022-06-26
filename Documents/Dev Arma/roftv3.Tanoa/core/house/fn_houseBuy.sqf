#include "..\..\script_macros.hpp"
/*
	File: fn_houseBuy.sqf

	Author: IronBlade
*/

private ["_house","_uid","_action","_houseCfg"];
_house = param [0, objNull,[objNull]];
_uid = getPlayerUID player;

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};
if ((_house getVariable ["house_owned",false])) exitWith {hint "Maison déja Acheté !"};
if(!isNil {(_house getVariable "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
if(!license_civ_home) exitWith {hint localize "STR_House_License"};
_housemax = LIFE_SETTINGS(getNumber,"house_limit");
_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];
if (_lock == 1) exitWith {hint "Maison déja Acheté !"};
/*if (["Immobilier2"]call life_fnc_hasPerk) then {
		_housemax = _housemax + 1;
	}; */
if (count life_houses >= _housemax) exitWith {hint format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};

closeDialog 0;

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");

if !(isClass (_cfgBuilding >> typeOf _house)) exitWith {};
_currentConfig = (_cfgBuilding >> typeOf _house);

_price = getNumber(_currentConfig >> "price");
_upgrade = getNumber(_currentConfig >> "upgradeMax");
if (["Immobilier"]call life_fnc_hasPerk) then {
		_price = round(_price* 0.95);
	}; 
if (["Immobilier1"]call life_fnc_hasPerk) then {
		_price = round(_price* 0.95);
	}; 
_action = [
	format[localize "STR_House_BuyMSG",
	[_price] call life_fnc_numberText,
	_upgrade],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (_action) then {
	if(BANK < _price) exitWith {hint format [localize "STR_House_NotEnough"]};

	[_price, 0.3] call life_fnc_buything;

	SUB(BANK, _price);

	[0] call SOCK_fnc_updatePartial;
	[1] call SOCK_fnc_updatePartial;

	["house"] spawn life_fnc_achievementLearn;

	[_uid,_house, player] remoteExec ["TON_fnc_houseAdd",RSERV];
	_house setVariable ["house_owner",[_uid,profileName],true];
	_house setVariable ["locked",true,true];
	_house setVariable ["uid",floor(random 99999),true];

	life_vehicles pushBack _house;
	life_houses pushBack [str(getPosATL _house),[]];
	_marker = createMarkerLocal [format["house_%1",(_house GVAR "uid")],getPosATL _house];

	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house),"numberOfDoors");
	
	for "_i" from 1 to _numOfDoors do {
		_house setVariable [format["bis_disabled_Door_%1",_i],1,true];
	};
};