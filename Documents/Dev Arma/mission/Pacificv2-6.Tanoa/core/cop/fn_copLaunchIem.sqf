/*
	File:fn_copLaunchIem.sqf

	Autor:IronBlade
*/

if (vehicle player == player || playerSide != west) exitWith {};
if (!((vehicle player) isKindOf "Air")) exitWith {};
if ((driver (vehicle player)) != player) exitWith {};

if((time - life_action_iem) < 60) exitWith {};
life_action_iem = time;

_vehicles = nearestObjects [(vehicle player), ["Air"], 500];

_heli = objNull;

{
	_vehTest = _x;
	_driver = (driver _vehTest);

	if (isNull _driver) then {_driver = (crew _vehTest) select 0;};

	if (!(isNull _driver)) then {
		if (_driver != player && side _driver != west && side _driver != independent) exitWith {
			_heli = _vehTest;
		};
	};
} forEach _vehicles;

if (isNull _heli) exitWith {["Error", "Aucun véhicule a proximité !"] spawn life_fnc_showPredefinedNotification;};

_civ =  (driver _heli);

if (isNull _civ) then {_civ = (crew _heli) select 0;};

[player] remoteExecCall ["life_fnc_IEMHeli", _civ];