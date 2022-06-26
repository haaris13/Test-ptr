#include "..\..\script_macros.hpp"
/*
	File:fn_houseUpgradeMenu.sqf

	Autor:IronBlade
*/
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (isNull _house) exitWith {};
closeDialog 0;

life_house_upgrade = _house;

disableSerialization;
createDialog "Dialog_House_Upgrade";

_list = CONTROL(16100,16101);

_cfgHouses = (missionConfigFile >> "CfgHouses");
_cfgBuilding = (_cfgHouses >> "CfgBuild");
_currentConfig = (_cfgBuilding >> typeOf _house);

_cond = format ["(getnumber (_x >> 'id') > %1) && (getnumber (_x >> 'id') <= %2)", _house getVariable["house_upgrade", 0], getNumber(_currentConfig >> "upgradeMax")];

_arrayList = (_cond configClasses (_cfgHouses >> "Upgrades"));

{
	_cfg = _x;

	_displayName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(configName _cfg),"displayName");

	_price = getNumber(_cfg >> "price");
	_trunk = getNumber(_cfg >> "trunk");

	_list lbAdd format["%1 - %2 Places", _displayName, _trunk];
	_list lbSetData[(lbSize _list)-1, configName _cfg];
	_list lbSetValue[(lbSize _list)-1, _price];

	_pic = getText(configFile >> "CfgVehicles" >> (configName _cfg) >> "picture");

	if(!(EQUAL(_pic,""))) then {
		_list lbSetPicture [(lbSize _list)-1,_pic];
	};

} forEach _arrayList;

CONTROL(16100,16103) ctrlEnable false;