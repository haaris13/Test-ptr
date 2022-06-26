#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Buys the house?
*/
private["_house","_uid","_action","_houseCfg"];
_house = param [0,ObjNull,[ObjNull]];
_uid = getPlayerUID player;

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};
if ((_house GVAR ["house_owned",false])) exitWith {hint "This house is already owned even though you shouldn't be seeing this hint..."};
if(!isNil {(_house GVAR "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
if(!license_civ_home) exitWith {hint localize "STR_House_License"};

_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];

if (_lock == 1) exitWith {hint "This house is already owned even though you shouldn't be seeing this hint..."};

_exit = false;
_text = "";
if (["housePlus"]call life_fnc_hasPerk) then {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit") + 1)) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit") + 1]};
} else {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit"))) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
};

if (_exit) exitWith {hint _text};

closeDialog 0;

_houseCfg = [(typeOf _house)] call life_fnc_houseConfig;
if(EQUAL(count _houseCfg,0)) exitWith {};

_action = [
	format[localize "STR_House_BuyMSG",
	[(_houseCfg select 0)] call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(BANK < (_houseCfg select 0)) exitWith {hint format [localize "STR_House_NotEnough"]};

	[(_houseCfg select 0), 0.3] call life_fnc_buything;

	SUB(BANK,(SEL(_houseCfg,0)));

	[0] call SOCK_fnc_updatePartial;
	[1] call SOCK_fnc_updatePartial;

	["house"] spawn life_fnc_achievementLearn;

	[_uid,_house] remoteExec ["TON_fnc_addHouse",RSERV];
	_house SVAR ["house_owner",[_uid,profileName],true];
	_house SVAR ["locked",true,true];
	_house SVAR ["containers",[],true];
	_house SVAR ["uid",floor(random 99999),true];

	life_vehicles pushBack _house;
	life_houses pushBack [str(getPosATL _house),[]];
	_marker = createMarkerLocal [format["house_%1",(_house GVAR "uid")],getPosATL _house];
	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house),"numberOfDoors");
	for "_i" from 1 to _numOfDoors do {
		_house SVAR [format["bis_disabled_Door_%1",_i],1,true];
	};
};