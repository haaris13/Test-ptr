#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	For the mean time it blocks the player from opening another persons backpack
*/
private["_container","_unit","_list"];

player say3D "OpenInv";

if(EQUAL(count _this,1)) exitWith {false};
_unit = SEL(_this,0);
_container = SEL(_this,1);

_isPack = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,typeOf _container,"isBackpack");
if(EQUAL(_isPack,1) && playerSide != west) exitWith {
	hint localize "STR_MISC_Backpack";
	true;
};

if (!(isNil {_container getVariable "inventory"}) || !(isNil {_container getVariable "clan_inventory"})) exitWith {
	if (!(_container in life_vehicles)) then {
		hint localize "STR_House_ContainerDeny";
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
			hint localize "STR_MISC_VehInventory";
			true;
		};
	};
};

/*Allow alive players who've been knocked out to be looted, just not the dead ones
if(_container isKindOf "Man" && !alive _container && playerSide == civilian) exitWith {
	hint localize "STR_NOTF_NoLootingPerson";
	true;
};
*/

if((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"] && playerSide != west) exitWith {
	_owners = _container getVariable ["container_owner",[]];
	if (!((getPlayerUID player) in _owners)) exitWith {
		hint localize "STR_House_ContainerDeny";
		true;
	};
};

life_isInInventory = true;