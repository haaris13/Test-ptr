#include "..\..\..\..\script_macros.hpp"
/*
	File:fn_clanhouseOpenInv.sqf

	Autor:IronBlade
*/
if(dialog) exitWith {};
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;

if (player getVariable ["playerSurrender",false]) exitWith {};

if(isNull _vehicle) exitWith {};

diag_log format ["fn_clanhouseOpenInv %1", typeOf _vehicle];

if((_vehicle getVariable ["trunk_in_use",false])) exitWith {["Error", localize "STR_MISC_VehInvUse"] spawn life_fnc_showPredefinedNotification;};
_vehicle setVariable["trunk_in_use",true,true];
if(!createDialog "Dialog_ClanHouseTrunkMenu") exitWith {["Error", localize "STR_MISC_DialogError"] spawn life_fnc_showPredefinedNotification;}; //Couldn't create the menu?
disableSerialization;

_build = _vehicle getVariable "clan_house";

life_clan_group = _build getVariable "clan_group";
if (isnil "life_clan_group") exitWith {closeDialog 0};

ctrlSetText[6701,format["%1", getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName")]];

_cfgClan = (missionConfigFile >> "CfgClan");
_upgardeId = life_clan_group getVariable "clan_upgradeID";

life_house_mWeight = getNumber(((format["getnumber (_x >> 'level') == %1", _upgardeId] configClasses (_cfgClan >> "Upgrade")) select 0) >> "trunk");
_veh_data = [life_house_mWeight, (_vehicle getVariable["clan_inventory", [[],0]]) select 1];

if(_veh_data select 0 == -1) exitWith {closeDialog 0; _vehicle setVariable["trunk_in_use",false,true]; ["Error", localize "STR_MISC_NoStorageVeh"] spawn life_fnc_showPredefinedNotification;};

_currentRank = [] call life_fnc_clanGetRank;

_canDo = getArray(_currentRank >> "canDo");

if !("takeItem" in _canDo) then {
	ctrlEnable [6707, false];
};

if !("storeItem" in _canDo) then {
	ctrlEnable [6708, false];
};

ctrlSetText[6704, format[(localize "STR_MISC_Weight")+ " %1/%2",_veh_data select 1,_veh_data select 0]];

_ctrlfilterCombo = CONTROL(6700,6709);

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

life_house_inventory = _vehicle;
[_vehicle] call life_fnc_clanhouseInv;


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
	waitUntil {isNull (findDisplay 6700)};

	if (life_exit_veh) exitWith {}; 

	_this setVariable["trunk_in_use",false,true];
	
	[life_house_inventory, 0] remoteExec ["TON_fnc_clanHouseUpdate",2];
};