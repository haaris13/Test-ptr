/*
	File: fn_adminStoreVeh.sqf

	Autor: IronBlade
*/
_obj = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};

//Check isVeh
_isVehicle = if((_obj isKindOf "landVehicle") OR (_obj isKindOf "Ship") OR (_obj isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {};
_vehicle = _obj;

diag_log (typeOf _vehicle);

if(isNil "_vehicle") exitWith {};
if(isNull _vehicle) exitWith {};

[_vehicle] remoteExecCall ["TON_fnc_adminVehicleStore",2];