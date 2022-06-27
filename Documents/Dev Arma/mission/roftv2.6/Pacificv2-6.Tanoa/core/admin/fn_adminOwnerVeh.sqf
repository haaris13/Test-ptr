#include "..\..\script_macros.hpp"
/*
	File: fn_adminOwnerVeh.sqf
*/
private["_vehicle","_data"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

life_zeus_current_select = _vehicle;

_isVehicle = if((_vehicle isKindOf "landVehicle") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {};

if((_vehicle isKindOf "Car") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Ship") || !(_vehicle isKindOf "Tank")) then {
	_owners = (_vehicle getVariable "vehicle_info_owners");
	if(isNil {_owners}) exitWith {["Warning", localize "STR_NOTF_VehCheat"] spawn life_fnc_showPredefinedNotification;};
	
	if(!alive _vehicle) exitWith {["Error", localize "STR_NOTF_SearchVehFail"] spawn life_fnc_showPredefinedNotification;};

	_owners = [_owners] call life_fnc_vehicleOwners;
	
	if(_owners == "any<br/>") then {
		_owners = "Aucun Propriétaire<br/>";
	};
	hint parseText format[localize "STR_NOTF_SearchVeh",_owners];
};