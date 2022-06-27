/*
	File: fn_deleteVehicle.sqf

	Autor: Iron
*/
diag_log "fn_deleteVehicle";
_vehicle = [_this,0,ObjNull,[Objnull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {diag_log "fn_deleteVehicle: null _vehicle";};

if (local _vehicle) exitWith {
	deleteVehicle _vehicle;
};

[_vehicle] remoteExec ["life_fnc_deleteVehicleAction", _vehicle];