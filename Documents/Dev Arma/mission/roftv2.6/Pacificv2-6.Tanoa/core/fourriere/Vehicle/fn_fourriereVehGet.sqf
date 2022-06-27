/*
	fn_fourriereVehGet.sqf

	Autor: IronBlade
*/
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (count crew _vehicle > 0) exitWith {["Error", "Il y à quelqu'un a l'intérieur du véhicule !"] spawn life_fnc_showPredefinedNotification;};

if !(_vehicle getVariable ["fourriere", false]) exitWith {["Error", "Le véhicule n'est pas en fourrière !"] spawn life_fnc_showPredefinedNotification;};

_vehicle setVariable ["fourriere", nil, true];

_locked = locked _vehicle;
if (_locked == 2) then {
	if (local _vehicle) then {
		_vehicle lock 0;
	} else {
		[_vehicle,0] remoteExecCall ["life_fnc_lockVehicle",_vehicle];
	};

	playSound "car_lock";
	systemChat "Vous avez débloqué le véhicule.";
};

closeDialog 0;
[_vehicle, player] remoteExec ["TON_fnc_fourriereVehGet", 2];
["Accepted", "Véhicule retiré de la fourriere !"] spawn life_fnc_showPredefinedNotification;