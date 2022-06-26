#include "..\..\script_macros.hpp"
/*
	File: fn_openInventory.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the initialization of vehicle virtual inventory menu.
*/
private["_vehicle","_veh_data"];
if(dialog) exitWith {};
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (player getVariable ["playerSurrender",false]) exitWith {};
if (!life_session_completed) exitWith {};

if(isNull _vehicle || !(_vehicle isKindOf "Car" OR _vehicle isKindOf "Air" OR _vehicle isKindOf "Ship" OR _vehicle isKindOf "Box_IND_Grenades_F" OR _vehicle isKindOf "B_supplyCrate_F" OR _vehicle isKindOf "CargoNet_01_box_F")) exitWith {}; //Either a null or invalid vehicle type.

diag_log format ["fn_openInventory %1",typeOf _vehicle];

if((_vehicle getVariable ["trunk_in_use",false])) exitWith {["Error", localize "STR_MISC_VehInvUse"] spawn life_fnc_showPredefinedNotification;};
_vehicle setVariable["trunk_in_use",true,true];
if(!createDialog "TrunkMenu") exitWith {["Error", localize "STR_MISC_DialogError"] spawn life_fnc_showPredefinedNotification;}; //Couldn't create the menu?
disableSerialization;

_id = (_vehicle getVariable["container_id", 0]);

if (_vehicle isKindOf "House_F") then {
	ctrlSetText[3501,format["%1 ID:%2", getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"), _id]];
} else {
	ctrlSetText[3501,format["%1 ID:%2", getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"), _id]];
};

if (_vehicle isKindOf "Box_IND_Grenades_F" OR _vehicle isKindOf "B_supplyCrate_F" OR _vehicle isKindOf "CargoNet_01_box_F") then {
	private["_mWeight"];
	_mWeight = 0;
	{_mWeight = _mWeight + ([(typeOf _x)] call life_fnc_vehicleWeightCfg);} foreach (_vehicle getVariable["containers",[]]);
	_veh_data = [_mWeight,(_vehicle getVariable["Trunk",[[],0]]) select 1];
} else {
	_veh_data = [_vehicle] call life_fnc_vehicleWeight;
};
if(_veh_data select 0 == -1) exitWith {
	closeDialog 0; 
	_vehicle setVariable["trunk_in_use",false,true];
	["Error", localize "STR_MISC_NoStorageVeh"] spawn life_fnc_showPredefinedNotification;
};

ctrlSetText[3504,format[(localize "STR_MISC_Weight")+ " %1/%2",_veh_data select 1,_veh_data select 0]];
[_vehicle] call life_fnc_vehInventory;
life_trunk_vehicle = _vehicle;

//Meh way to fix dupe without trunk access limit

life_exit_veh = false;

[_vehicle] spawn {
	_vehicle = _this select 0;
	_vehicle setVariable ["antiDupe",(getPlayerUID player),true];
	sleep (random 4);
	if ((_vehicle getVariable ["antiDupe",-1]) != (getPlayerUID player)) exitWith {

		life_exit_veh = true;

		[format ["%1 antiDupe",profileName], getPlayerUID player, 12] remoteExecCall ["TON_fnc_logsAdmin",2];

		closeDialog 0;
	};
};

_vehicle spawn {
	waitUntil {isNull (findDisplay 3500)};

	if (life_exit_veh) exitWith {}; 

	_this setVariable["trunk_in_use",false,true];
	
	if(_this isKindOf "Box_IND_Grenades_F" OR _this isKindOf "B_supplyCrate_F") then {
		[_this] remoteExecCall ["TON_fnc_updateHouseTrunk",2];
	};

	if(_this isKindOf "CargoNet_01_box_F") then {
		[_this] remoteExecCall ["TON_fnc_updateEntTrunk",2];
	};
};