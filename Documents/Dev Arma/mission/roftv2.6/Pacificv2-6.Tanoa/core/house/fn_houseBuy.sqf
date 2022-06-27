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
if ((_house getVariable ["house_owned",false])) exitWith {["Error", localize "STR_House_Already_Bought_Process"] spawn life_fnc_showPredefinedNotification;};
if(!isNil {(_house getVariable "house_sold")}) exitWith {["Error", localize "STR_House_Sell_Process"] spawn life_fnc_showPredefinedNotification;};
if(!license_civ_home) exitWith {["Error", localize "STR_House_License"] spawn life_fnc_showPredefinedNotification;};

_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];
if (_lock == 1) exitWith {["Error", localize "STR_House_Already_Bought_Process"] spawn life_fnc_showPredefinedNotification;};

_exit = false;
_text = "";
if (["housePlus"]call life_fnc_hasPerk) then {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit") + 1)) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit") + 1]};
} else {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit"))) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
};

if (_exit) exitWith {hint _text};
closeDialog 0;

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");

if !(isClass (_cfgBuilding >> typeOf _house)) exitWith {};
_currentConfig = (_cfgBuilding >> typeOf _house);

_price = getNumber(_currentConfig >> "price");
_upgrade = getNumber(_currentConfig >> "upgradeMax");

if (["housePrice"] call life_fnc_hasPerk) then {
	_price = _price - (_price * 0.1);
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
	
	[1] call SOCK_fnc_updatePartial;

	["house"] spawn life_fnc_achievementLearn;

	[_uid,_house, player] remoteExec ["TON_fnc_houseAdd",RSERV];
	_house setVariable ["house_owner",[_uid,profileName],true];
	_house setVariable ["locked",true,true];
	_house setVariable ["uid",floor(random 99999),true];

	life_vehicles pushBack _house;
	life_houses pushBack [str(getPosATL _house),[]];
	_marker = createMarkerLocal [format["house_%1",(_house getVariable "uid")],getPosATL _house];

	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
	//_marker setMarkerTextLocal _houseName;
	//_marker setMarkerColorLocal "ColorBlue";
	//_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house),"numberOfDoors");
	
	for "_i" from 1 to _numOfDoors do {
		_house setVariable [format["bis_disabled_Door_%1",_i],1,true];
	};
};