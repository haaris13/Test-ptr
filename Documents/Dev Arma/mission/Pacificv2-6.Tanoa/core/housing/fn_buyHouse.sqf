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
if ((_house GVAR ["house_owned",false])) exitWith {["Error", "Cette maison appartient déjà à quelqu'un et vous ne devriez pas voir ce message..."] spawn life_fnc_showPredefinedNotification;};
if(!isNil {(_house GVAR "house_sold")}) exitWith {["Error", localize "STR_House_Sell_Process"] spawn life_fnc_showPredefinedNotification;};
if(!license_civ_home) exitWith {["Error", localize "STR_House_License"] spawn life_fnc_showPredefinedNotification;};

_lock = _house getVariable [format["bis_disabled_Door_%1",1],0];

if (_lock == 1) exitWith {["Error", "Cette maison appartient déjà à quelqu'un et vous ne devriez pas voir ce message..."] spawn life_fnc_showPredefinedNotification;};

_exit = false;
_text = "";
if (["housePlus"]call life_fnc_hasPerk) then {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit") + 1)) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit") + 1]};
} else {
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit"))) exitWith {_exit = true; _text = format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
};

if (_exit) exitWith {hint _text;};

closeDialog 0;

_houseCfg = [(typeOf _house)] call life_fnc_houseConfig;
if(EQUAL(count _houseCfg,0)) exitWith {};

_price = _houseCfg select 0;

if (["housePrice"] call life_fnc_hasPerk) then {
	_price = _price - (_price * 0.1);
};

_action = [
	format[localize "STR_House_BuyMSG",
	[_price] call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(BANK < _price) exitWith {hint format [localize "STR_House_NotEnough"]};

	[_price, 0.3] call life_fnc_buything;

	SUB(BANK,_price);

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
	//_marker = createMarkerLocal [format["house_%1",(_house GVAR "uid")],getPosATL _house];
	_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
	//_marker setMarkerTextLocal _houseName;
	//_marker setMarkerColorLocal "ColorBlue";
	//_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house),"numberOfDoors");
	for "_i" from 1 to _numOfDoors do {
		_house SVAR [format["bis_disabled_Door_%1",_i],1,true];
	};
};