#include "..\..\script_macros.hpp"
/*
	File: fn_houseSell.sqf

	Author: IronBlade
*/
_house = param [0,ObjNull,[ObjNull]];

if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F")) exitWith {};
if(isNil {_house getVariable "house_owner"}) exitWith {["Error", "There is no owner for this house."] spawn life_fnc_showPredefinedNotification;};
closeDialog 0;

if (_house getVariable ["house_sold", false]) exitWith {};
if((time - life_action_delay) < (5)) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");

if !(isClass(_cfgBuilding >> typeOf _house)) exitWith {};

_currentConfig = (_cfgBuilding >> typeOf _house);
_price = getNumber(_currentConfig >> "price");

_action = [
	format[localize "STR_House_SellHouseMSG",
	(round(_price/2)) call life_fnc_numberText],
	localize "STR_pInAct_SellHouse",localize "STR_Global_Sell",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	_house setVariable ["house_sold",true,true];
	[getPlayerUID player, _house] remoteExecCall ["TON_fnc_houseSell",RSERV];
	_house setVariable ["locked",false,true];
	_house setVariable ["containers",nil,true];
	deleteMarkerLocal format["house_%1",_house GVAR "uid"];
	_house setVariable ["uid",nil,true];

	_housePrice = (round(_price / 2));

	life_atmbank = life_atmbank + _housePrice;
	_index = life_vehicles find _house;

	[1] call SOCK_fnc_updatePartial;

	if(_index != -1) then {
		life_vehicles set[_index,-1];
		life_vehicles = life_vehicles - [-1];
	};

	_index = [str(getPosATL _house),life_houses] call TON_fnc_index;
	if(_index != -1) then {
		life_houses set[_index,-1];
		life_houses = life_houses - [-1];
	};
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house), "numberOfDoors");
	for "_i" from 1 to _numOfDoors do {
		_house setVariable [format["bis_disabled_Door_%1",_i],0,true];
	};
	_containers = [getPosATL _house, ["Box_IND_Grenades_F","B_supplyCrate_F"], 9] call life_fnc_nearestObjects;
	if (count _containers > 0) then {
		{
			_x SVAR ["Trunk",nil,true];
			[_x] remoteExecCall ["TON_fnc_sellHouseContainer",RSERV];
		} forEach _containers;
	};
};
