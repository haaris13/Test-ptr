/*
	fn_fourriereVehStore.sqf

	Autor: IronBlade
*/
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (count crew _vehicle > 0) exitWith {["Error", "Il y a quelqu'un à l'intérieur du véhicule !"] spawn life_fnc_showPredefinedNotification;};

if (_vehicle getVariable ["fourriere", false]) exitWith {["Error", "Le véhicule est déja en fourrière !"] spawn life_fnc_showPredefinedNotification;};

_vehicle setVariable ["fourriere", true, true];

_locked = locked _vehicle;
if (_locked != 2) then {
	if (local _vehicle) then {
		_vehicle lock 2;
	} else {
		[_vehicle,2] remoteExecCall ["life_fnc_lockVehicle",_vehicle];
	};
	playSound "car_lock";
	systemChat "Vous avez verrouillé le véhicule.";
};

closeDialog 0;
[_vehicle, player] remoteExec ["TON_fnc_fourriereVehStore", 2];
["Accepted", "Le véhicule a été mis en fourriere !"] spawn life_fnc_showPredefinedNotification;