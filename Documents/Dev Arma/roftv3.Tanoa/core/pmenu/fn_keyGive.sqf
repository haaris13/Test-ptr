#include "..\..\script_macros.hpp"
/*
	File: fn_keyGive.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives a copy of the key for the selected vehicle to the selected player.
	Player must be within range.
*/
private["_dialog","_list","_plist","_sel","_vehicle","_owners","_index","_unit","_uid"];
disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_plist = _dialog displayCtrl 2702;

_sel = lbCurSel _list;
_vehicle = _list lbData _sel;
_vehicle = life_vehicles select parseNumber(_vehicle);

if !(isnil {_vehicle getVariable "clan_group"}) exitWith {hint "Vous ne pouvez pas donner ces clefs !"};
if !(isnil {_vehicle getVariable "clan_inventory"}) exitWith {hint "Vous ne pouvez pas donner ces clefs !"};

_sel = lbCurSel _plist;
_unit = _plist lbData _sel;
_unit = call compile format["%1", _unit];
if(isNull _unit OR isNil "_unit") exitWith {}; 

_uid = getPlayerUID _unit;
_owners = _vehicle GVAR "vehicle_info_owners";
_index = [_uid,_owners] call TON_fnc_index;
if(EQUAL(_index,-1)) then  {
	_owners pushBack [_uid,_unit GVAR ["realname",name _unit]];
	_vehicle SVAR ["vehicle_info_owners",_owners,true];
};

_name = "Inconnue";

if (!([_unit] call life_fnc_isInconnue)) then {
	_name = format["%1",_unit getVariable["realname",name _unit]];
};

_nameP = "Inconnue";

if (!([player] call life_fnc_isInconnue)) then {
	_nameP = profileName;
};

_nameV = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");

// hint format["Vous avez donné a %1 les clés de votre %2",_name, _nameV];
["Accepted", format["Vous avez donné les clés de votre %1", _nameV]] spawn life_fnc_showPredefinedNotification;

[_vehicle,_unit,_nameP] remoteExecCAll ["TON_fnc_clientGetKey",_unit];
diag_log "Give Key";