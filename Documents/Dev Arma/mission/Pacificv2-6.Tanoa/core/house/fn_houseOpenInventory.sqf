#include "..\..\script_macros.hpp"
/*
	File:fn_houseOpenInventory.sqf

	Autor:IronBlade
*/
if(dialog) exitWith {};
_chest = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;

if (player getVariable ["playerSurrender",false]) exitWith {};

if(isNull _chest) exitWith {};

diag_log format ["fn_houseOpenInventory %1", typeOf _chest];

if((_chest getVariable ["trunk_in_use",false])) exitWith {["Error", localize "STR_MISC_VehInvUse"] spawn life_fnc_showPredefinedNotification;};

_chest setVariable["trunk_in_use",true,true];
if(!createDialog "Dialog_HouseTrunkMenu") exitWith {["Error", localize "STR_MISC_DialogError"] spawn life_fnc_showPredefinedNotification;}; //Couldn't create the menu?
disableSerialization;

ctrlSetText[3701,format["%1", getText(configFile >> "CfgVehicles" >> (typeOf _chest) >> "displayName")]];

_cfgHouses = (missionConfigFile >> "CfgHouses");

if !(isClass (_cfgHouses >> "Upgrades" >> (typeOf _chest))) exitWith {
	closeDialog 0;
	_chest setVariable["trunk_in_use",false,true];
};

_mWeight = getNumber(_cfgHouses >> "Upgrades" >> (typeOf _chest) >> "trunk");
_veh_data = [_mWeight, (_chest getVariable["inventory", [[],0]]) select 1];

if(_veh_data select 0 == -1) exitWith {closeDialog 0; _chest setVariable["trunk_in_use",false,true]; ["Error", localize "STR_MISC_NoStorageVeh"] spawn life_fnc_showPredefinedNotification;};

_ctrlfilterCombo = CONTROL(3700,3709);

_cfgContainers = (missionConfigFile >> "CfgContainers");
_lists = ("true" configClasses (_cfgContainers >> "Filters"));

lbClear _ctrlfilterCombo;
{
	_className = configName(_x);
	_displayName = getText(_x >> "displayname");

	_ctrlfilterCombo lbAdd _displayName;
	_ctrlfilterCombo lbSetData [(lbSize _ctrlfilterCombo)-1, _className];
} forEach _lists;

_ctrlfilterCombo lbSetCurSel 0;

ctrlSetText[3704, format[(localize "STR_MISC_Weight")+ " %1/%2",_veh_data select 1,_veh_data select 0]];
life_house_inventory = _chest;
[] call life_fnc_houseInvUpdate;

life_exit_veh = false;

[_chest] spawn {
	_chest = _this select 0;
	_chest setVariable ["antiDupe",(getPlayerUID player),true];
	sleep (random 4);
	if ((_chest getVariable ["antiDupe",-1]) != (getPlayerUID player)) exitWith {

		life_exit_veh = true;

		[format ["%1 antiDupe",profileName], getPlayerUID player, 12] remoteExecCall ["TON_fnc_logsAdmin",2];

		closeDialog 0;
	};
};

_chest spawn {
	waitUntil {isNull (findDisplay 3700)};

	if (life_exit_veh) exitWith {}; 

	_this setVariable["trunk_in_use",false,true];
	
	[life_house_inventory, 0] remoteExecCall ["TON_fnc_houseUpdate",2];
};