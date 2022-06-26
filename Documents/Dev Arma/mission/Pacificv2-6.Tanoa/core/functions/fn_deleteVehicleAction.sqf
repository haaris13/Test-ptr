/*
	File: fn_deleteVehicleAction.sqf

	Autor: Iron
*/
diag_log "fn_deleteVehicleAction";
_vehicle = [_this,0,ObjNull,[Objnull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {
	diag_log "fn_deleteVehicleAction: null _vehicle";
};

if (!(local _vehicle) && !isServer) exitWith {
	diag_log "fn_deleteVehicleAction: not local _vehicle";
	[_vehicle] remoteExec ["life_fnc_deleteVehicleAction", 2];
};

deleteVehicle _vehicle;