#include "..\..\script_macros.hpp"
/*
	File: fn_searchVehAction.sqf
*/
private["_vehicle","_data"];
_vehicle = cursorTarget;
if((_vehicle isKindOf "Car") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Ship")) then {
	_owners = _vehicle GVAR "vehicle_info_owners";
	if(isNil {_owners}) exitWith {
		["Warning", localize "STR_NOTF_VehCheat"] spawn life_fnc_showPredefinedNotification;
		[_vehicle] spawn life_fnc_deleteVehicle;
	};
	
	life_action_inUse = true;
	["Info", localize "STR_NOTF_Searching"] spawn life_fnc_showPredefinedNotification;
	
	sleep 3;
	life_action_inUse = false;
	
	if(player distance _vehicle > 10 || !alive player || !alive _vehicle) exitWith {["Error", localize "STR_NOTF_SearchVehFail"] spawn life_fnc_showPredefinedNotification;};
	//_inventory = [(_vehicle getVariable "vehicle_info_inv")] call fnc_veh_inv;
	//if(isNil {_inventory}) then {_inventory = "Nothing in storage."};
	_owners = [_owners] call life_fnc_vehicleOwners;
	
	if(_owners == "any<br/>") then {
		_owners = "Aucun Propriétaire<br/>";
	};
	
	hint parseText format[localize "STR_NOTF_SearchVeh",_owners];
};
