#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	For the mean time it blocks the player from opening another persons backpack
*/
private["_container","_unit","_list"];

[player, "OpenInv", 6] spawn life_fnc_playSound3DNear;

if(EQUAL(count _this,1)) exitWith {
	false;
};

_unit = SEL(_this,0);
_container = SEL(_this,1);

_isPack = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,typeOf _container,"isBackpack");
if(EQUAL(_isPack,1) && playerSide != west) exitWith {
	["Error", localize "STR_MISC_Backpack"] spawn life_fnc_showPredefinedNotification;
	true;
};

if (!(isNil {_container getVariable "inventory"}) || !(isNil {_container getVariable "clan_inventory"})) exitWith {
	if (!(_container in life_vehicles)) then {
		["Error", localize "STR_House_ContainerDeny"] spawn life_fnc_showPredefinedNotification;
		true;
	} else {
		if (!(isNil {_container getVariable "clan_inventory"})) then {
			if !(["accessInv"] call life_fnc_clanCanDo) then {
				true;
			};
		};
	};
};

if (!(isNil {_container getVariable "container_ent"})) exitWith {
	_houses = (nearestObjects [getPosATL player, ["House", "Building"], 50]);
	_house = _houses select 0;

	{
		if (!(isObjectHidden _x)) exitWith {
			_house = _x;
		};
	} forEach _houses;

	if !(_house in life_vehicles) then {
		["Error", localize "STR_House_ContainerDeny"] spawn life_fnc_showPredefinedNotification;
		true;
	};
};

_list = ["LandVehicle","Ship","Air"];
if(KINDOF_ARRAY(_container,_list)) exitWith {

	if (playerSide == civilian) then {
		_can = false;

		switch (true) do { 
			case (_container in life_vehicles) : {_can = true;}; 
			case ((_container getVariable ["sideRadio", "civ"]) == "civ" && (locked _container) == 0) : {_can = true;};
		};

		if !(_can) exitWith {
			["Error", localize "STR_MISC_VehInventory"] spawn life_fnc_showPredefinedNotification;
			true;
		};
	};
};

//Allow alive players who've been knocked out to be looted, just not the dead ones
if (_container isKindOf "Man" && !alive _container && playerSide == civilian && !life_mode_admin && ((_container getVariable ["steam64id", "x"]) != (getPlayerUID player))) exitWith {
	["Error", localize "STR_NOTF_NoLootingPerson"] spawn life_fnc_showPredefinedNotification;
	true;
};


if((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"] && playerSide != west) exitWith {
	_owners = _container getVariable ["container_owner",[]];
	if (!((getPlayerUID player) in _owners)) exitWith {
		["Error", localize "STR_House_ContainerDeny"] spawn life_fnc_showPredefinedNotification;
		true;
	};
};

life_isInInventory = true;