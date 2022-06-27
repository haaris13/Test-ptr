/*
	File:fn_zeusStoreVehicle.sqf

	Autor:IronBlade
*/
_obj = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {diag_log "null OBJ";};

//Check isVeh
_isVehicle = if((_obj isKindOf "landVehicle") OR (_obj isKindOf "Ship") OR (_obj isKindOf "Air") OR (_obj isKindOf "Tank")) then {true} else {false};
if(!_isVehicle) exitWith {};
_vehicle = _obj;

diag_log (typeOf _vehicle);

if(isNil "_vehicle") exitWith {};
if(isNull _vehicle) exitWith {};

_vInfo = _vehicle getVariable["dbInfo",[]];

[_vInfo] remoteExecCall ["TON_fnc_zeusStoreVehicle",2];