#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Blah
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_shopTitle","_disableBuy"];
(SEL(_this,3)) params [
	["_shop","",[""]],
	["_sideCheck",sideUnknown,[civilian]],
	["_spawnPoints","",["",[]]],
	["_shopFlag","",[""]],
	["_shopTitle","",[""]],
	["_disableBuy",false,[true]]
];

disableSerialization;
//Long boring series of checks
if(dialog) exitWith {};
if(_shop == "") exitWith {};
if ((_shop == "civ_depan" || _shop == "narvalo_air") && !license_civ_dep) exitWith {};
if (_shop == "security_car" && !('security' in life_entreprises)) exitWith {};

if (_shop == "sud" && ((group player) getVariable ["clan_id", -1]) != 90) exitWith {
	hint "Vous ne faites pas Parti du Sud !";
};

if (_shop == "president_car" && (gouv_president_uid != (getPlayerUID player)) && ((call life_adminlevel) == 0)) exitWith {};
if(_sideCheck != sideUnknown && {playerSide != _sideCheck}) exitWith {hint localize "STR_Shop_Veh_NotAllowed"};
if(!createDialog "Life_Vehicle_Shop_v2") exitWith {};

["Shop","Vehicule",false] spawn life_fnc_showHelp;

life_veh_shop = [_shop,_spawnpoints,_shopFlag,_disableBuy]; //Store it so so other parts of the system can access it.

// Cam
life_shop_cam = "CAMERA" camCreate markerPos "markshow_vehicle";
showCinemaBorder false;
life_shop_cam cameraEffect ["Internal", "Back"];
life_shop_cam camSetTarget (shop_vehicle_markObj modelToWorld [0,0,2]); 
life_shop_cam camSetPos (shop_vehicle_markObj modelToWorld [6,12,5]); 
life_shop_cam camSetFOV 0.85; 
life_shop_cam camSetFocus [50, 0]; 
life_shop_cam camCommit 0;

ctrlSetText [2301,_shopTitle];

if(_disableBuy) then {
	//Disable the buy button.
	ctrlEnable [2309,false];
};

//Fetch the shop config.
_vehicleList = M_CONFIG(getArray,"CfgCarShops",_shop,"vehicles");

if (["preparateur"]call life_fnc_hasPerk && _shop == "reb_car") then {
	_vehicleList pushBack ["B_G_Offroad_01_armed_F", 800000, ["insurge"], ["", "", -1]];
	_vehicleList pushBack ["O_T_LSV_02_armed_F", 1200000, ["insurge"], ["", "", -1]];
};

_control = CONTROL(2300,2302);
lbClear _control; //Flush the list.
ctrlShow [2330,false];
ctrlShow [2304,false];

//Loop through
{
	_className = SEL(_x,0);
	_basePrice = SEL(_x,1);
	_levelAssert = SEL(_x,3);
	_levelName = SEL(_levelAssert,0);
	_levelType = SEL(_levelAssert,1);
	_levelValue = SEL(_levelAssert,2);
	_showall = true;

	if(!(EQUAL(_levelValue,-1))) then {
		_level = GVAR_MNS _levelName;
		if(typeName _level == typeName {}) then {_level = FETCH_CONST(_level);};

		_showall = switch(_levelType) do {
			case "SCALAR": {_level >= _levelValue};
			case "BOOL": {_level};
			case "EQUAL": {EQUAL(_level,_levelValue)};
			default {false};
		};
	};

	if(_showall) then {
		_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
		_control lbAdd (_vehicleInfo select 3);
		_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
		_control lbSetData [(lbSize _control)-1,_className];
		_control lbSetValue [(lbSize _control)-1,_ForEachIndex];

		_canBuy = true;
		_cond = false;

		// Condition
		if ((count _x) == 5) then {
			_code = (_x select 4) select 0;
			if (_code != "") then {
				_canBuy = [] call (compile _code);
				_cond = true;
			};
		};

		switch (true) do {
			case (_canBuy && _cond) : {_control lbSetColor [(lbSize _control)-1,[0,0.7,0,1]];};
			case (!_canBuy && _cond) : {_control lbSetColor [(lbSize _control)-1,[1,0,0,1]];};
			default {}; 
		};

	};
} foreach _vehicleList;


waitUntil {isNull (findDisplay 2300)};

life_shop_cam cameraEffect ["TERMINATE","BACK"];
camDestroy life_shop_cam;