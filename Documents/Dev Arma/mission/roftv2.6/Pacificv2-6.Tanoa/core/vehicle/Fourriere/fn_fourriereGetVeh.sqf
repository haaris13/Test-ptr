/*
	File: fn_fourriereGetVeh.sqf

	Autor: Iron
*/
disableSerialization;
if ((lbCurSel 29102) == -1) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};

_vehicleData = lbData[29102,(lbCurSel 29102)];
_vehicle = (call compile format["%1", _vehicleData]) select 0;
_vehicleLife = _vehicle;
_id = lbValue[29102,(lbCurSel 29102)];

if (isNil "_vehicle") exitWith {["Error", localize "STR_Garage_Selection_Error"] spawn life_fnc_showPredefinedNotification;};
if ((time - life_action_delay) < 1.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};

if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _vehicleLife)) then {
	_vehicleLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};

[_id, player, "mrk_fourriere_veh"] remoteExecCall ["TON_fnc_fourriereGetVehicle", 2];

life_action_delay = time;
closeDialog 0;