#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopBuy.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something with vehicle purchasing.
*/

private["_mode","_spawnPoints","_className","_basePrice","_colorIndex","_spawnPoint","_vehicle","_shopSide","_licenses","_licensesName","_exit"];
_mode = SEL(_this,0);
_exit = false;
_shop = life_veh_shop select 0;
if((lbCurSel 2302) == -1) exitWith {hint localize "STR_Shop_Veh_DidntPick"};
_className = lbData[2302,(lbCurSel 2302)];
_vIndex = lbValue[2302,(lbCurSel 2302)];

_vehicleList = M_CONFIG(getArray,"CfgCarShops",SEL(life_veh_shop,0),"vehicles");
_shopSide = M_CONFIG(getText,"CfgCarShops",SEL(life_veh_shop,0),"side");

if (["preparateur"]call life_fnc_hasPerk && (SEL(life_veh_shop,0)) == "reb_car") then {
	_vehicleList pushBack ["B_G_Offroad_01_armed_F", 800000, ["insurge"], ["", "", -1]];
	_vehicleList pushBack ["O_T_LSV_02_armed_F", 1200000, ["insurge"], ["", "", -1]];
};

_basePrice = SEL(SEL(_vehicleList,_vIndex),1);
_licenses = SEL(SEL(_vehicleList,_vIndex),2);

if(_mode) then {_basePrice = round(_basePrice * 1.5)};

_basePrice = (["sop_vehicle", _basePrice] call life_fnc_gouvTaxesPay);

_basePrice = [_basePrice] call life_fnc_priceRepCalc; //krep

_colorIndex = lbValue[2304,(lbCurSel 2304)];
if (["Negociant"]call life_fnc_hasPerk) then {
		_baseprice = round(_baseprice* 0.9);
	}; 
//Series of checks (YAY!)
_licensesName = "";
{
	if(!(EQUAL(_x,"")) && {!(LICENSE_VALUE(_x,_shopSide))}) then {
		ADD(_licensesName,localize M_CONFIG(getText,"Licenses",_x,"displayName") + "<br/>");
		_exit = true;
	};
} foreach _licenses;
if(_exit) exitWith {hint parseText format[(localize "STR_Shop_Veh_NoLicense")+ "<br/><br/>%1",_licensesName];};

if(_basePrice < 0) exitWith {}; //Bad price entry
if(_shop != "civ_chopshop" && CASH < _basePrice) exitWith {playSound "addItemFailed"; hint format[localize "STR_Shop_Veh_NotEnough",[_basePrice - CASH] call life_fnc_numberText];};
if(_shop == "civ_chopshop" && ArgentSal < _basePrice) exitWith {hint format [localize "STR_Shop_Veh_NotEnoughS",[_basePrice - ArgentSal] call life_fnc_numberText];closeDialog 0;};
_spawnPoints = life_veh_shop select 1;
_spawnPoint = "";

if((SEL(life_veh_shop,0) == "med_air_hs")) then {
	if(count(nearestObjects[(getMarkerPos _spawnPoints),["Air"],35]) == 0) exitWith {_spawnPoint = _spawnPoints};
} else {
	//Check if there is multiple spawn points and find a suitable spawnpoint.
	if (_spawnPoints isEqualType []) then {
		//Find an available spawn point.
		{if(count(nearestObjects[(getMarkerPos _x),["Car","Ship","Air"],5]) == 0) exitWith {_spawnPoint = _x};} foreach _spawnPoints;
	} else {
		if(count(nearestObjects[(getMarkerPos _spawnPoints),["Car","Ship","Air"],5]) == 0) exitWith {_spawnPoint = _spawnPoints};
	};
};


if (_spawnPoint isEqualTo "") exitWith {hint localize "STR_Shop_Veh_Block";};
if (_shop == "civ_chopshop") then {
   SUB(ArgentSal,_basePrice);
   		[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
} else {
    SUB(CASH,_basePrice);
};
//SUB(CASH,_basePrice);

[_basePrice, 0.5] call life_fnc_buything;

hint format[localize "STR_Shop_Veh_Bought",getText(configFile >> "CfgVehicles" >> _className >> "displayName"),[_basePrice] call life_fnc_numberText];

//Spawn the vehicle and prep it.
if((life_veh_shop select 0) == "med_air_hs") then {
	_vehicle = createVehicle [_className,[0,0,999],[], 0, "NONE"];
	waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
	_vehicle allowDamage false;
	_hs = nearestObjects[getMarkerPos _spawnPoint,["Land_Hospital_side2_F"],50] select 0;
	_vehicle setPosATL (_hs modelToWorld [-0.4,-4,12.65]);
	sleep 0.6;
} else {

	if (_spawnPoint == "cop_air_g") then {

		_pos = (getMarkerPos _spawnPoint);

		_vehicle = createVehicle [_className, [_pos select 0,_pos select 1, 40.469], [], 0, "NONE"];
		waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
		_vehicle allowDamage false; //Temp disable damage handling..
		_vehicle setPosATL [_pos select 0,_pos select 1, 40.469];
		_vehicle setDir (markerDir _spawnPoint);
	} else {
			_vehicle = createVehicle [_className, (getMarkerPos _spawnPoint), [], 0, "NONE"];
			waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
			_vehicle allowDamage false; //Temp disable damage handling..
			_vehicle setPos (getMarkerPos _spawnPoint);
			_vehicle setVectorUp (surfaceNormal (getMarkerPos _spawnPoint));
			_vehicle setDir (markerDir _spawnPoint);
	};
};

_vehicle spawn life_fnc_spawnIndicator;
_vehicle spawn life_fnc_vehAddKit;

/*_donator = FETCH_CONST(life_donator);
if (_donator < 1) then {
	if (_vehicle isKindOf "Ship" && playerSide == civilian) then {
		_vehicle enableRopeAttach false;
	};
};*/

if ((life_veh_shop select 0) in ["civ_fuelStat", "civ_garage"]) exitWith {
	closeDialog 0;

	if (typeOf(_vehicle) == "ACE_Wheel") then {
        _vehicle disableCollisionWith player;
    };
};

_vehicle lock 2;
[_vehicle,_colorIndex] call life_fnc_colorVehicle;
[_vehicle,"info_life",12548,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
_vehicle setVariable ["ACE_isRepairVehicle", 0, true];
_vehicle setVariable ["ACE_medical_medicClass", 0, true];

if (isClass(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle))) then {

	_class = life_veh_shop select 0;

	if (_class in ["civ_chopshop","reb_truck","reb_car"]) then {
		_vehicle setVariable ["immatriculation", "NaI", true];
	} else {
		_vehicle setVariable ["immatriculation", "Na", true];
	};

	if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle) >> "isIllegal") isEqualTo 1) then {
		_vehicle setVariable ["immatriculation", "illegal", true];
	};
};

_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.

_dbAnims = [];

//Side Specific actions.
switch(playerSide) do {
	case west: {
		[_vehicle,"cop_offroad",true] spawn life_fnc_vehicleAnimate;
		_vehicle setVariable ["side", west, true];

		if ((FETCH_CONST(life_copUlevel)) == 3) then {
			_vehicle setVariable ["sideRadio", "fed", true];
		} else {
			_vehicle setVariable ["sideRadio", "gen", true];
		};
	};

	case civilian: {
		_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");

		if (count _anims > 0) then {
			{
				_anim = _x select 0;
				_etat = _x select 1;
				_vehicle animate [_anim, _etat, true];

				if (count _x > 3) then {
					_lock = false;

					if (_etat isEqualTo 0) then {
						_lock = true;
					};

					_locks = _x select 3;
					{
					  _vehicle lockCargo [_x, _lock];
					} forEach _locks;
				};

				_dbAnims pushBack [_anim, _etat];

			} forEach _anims;
		};
	};

	case independent: {
		[_vehicle,"med_offroad",true] spawn life_fnc_vehicleAnimate;

		_vehicle setVariable ["sideRadio", "med", true];
	};
};

[_vehicle] call life_fnc_clearVehicleAmmo;
[_vehicle] call life_fnc_vehAddPack;
//["ACE_Wheel", _vehicle] call ace_cargo_fnc_addCargoItem;

_vehicle allowDamage true;

//life_vehicles set[count life_vehicles,_vehicle]; //Add err to the chain.
life_vehicles pushBack _vehicle;
["Action","AchatVehicule",false] spawn life_fnc_showHelp;
["achatdevehicule"] spawn life_fnc_achievementLearn;
[getPlayerUID player,playerSide,_vehicle,1] remoteExecCall ["TON_fnc_keyManagement",RSERV];

if(_mode) then {
	if(!(_className in ["B_G_Offroad_01_armed_F","B_MRAP_01_hmg_F"])) then {
		[(getPlayerUID player),playerSide,_vehicle,_colorIndex, _vehicle getVariable ["immatriculation","Na"], _dbAnims] remoteExecCall ["TON_fnc_vehicleCreate",RSERV];
	};
};

[0] call SOCK_fnc_updatePartial;
closeDialog 0; //Exit the menu.
true;
