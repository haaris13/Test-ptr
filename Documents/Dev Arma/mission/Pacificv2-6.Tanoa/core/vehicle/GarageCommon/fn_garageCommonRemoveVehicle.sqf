/*
	File: fn_garageCommonRemoveVehicle.sqf

	Autor: Iron
	Date: 02 Mar 2020 16:57:44
	Version: 0.1
*/
disableSerialization;
if ((lbCurSel 30102) == -1) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};

_vehicleData = lbData[30102,(lbCurSel 30102)];
_vehicle = (call compile format["%1", _vehicleData]) select 0;
_id = lbValue[30102,(lbCurSel 30102)];

if (isNil "_vehicle") exitWith {["Error", localize "STR_Garage_Selection_Error"] spawn life_fnc_showPredefinedNotification;};
if ((time - life_action_delay) < 1.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};

[_id, player] remoteExecCall ["TON_fnc_garageCommonRemoveVehicle", 2];

life_action_delay = time;
closeDialog 0;