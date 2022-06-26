#include "..\..\script_macros.hpp"
/*
	File: fn_fuelStoreVehMenu.sqf

	Autor: IronBlade
*/

if (life_action_inUse) exitWith {["Error", localize "STR_NOTF_ActionInProc"] spawn life_fnc_showPredefinedNotification;};
if (vehicle player != player) exitWith {};
if (side player != civilian) exitWith {["Error", "Vous n’êtes pas civil !"] spawn life_fnc_showPredefinedNotification;};
disableSerialization;
private["_nearVehicles","_control"];

life_fuel_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
life_fuel_type = [_this,3,"fuel",[""]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_fuel_pnj,["Car","Truck","Air"],25];
life_fuel_near = _nearVehicles;
//Error check
if(EQUAL(count _nearVehicles,0)) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};
if(!(createDialog "Near_Fuel_List")) exitWith {};

_control = CONTROL(71500,71502);
{

	_veh = _x;

	_valueMax = [_veh] call life_fnc_fluidVehGetCargoBase;

	_curValue = _veh getVariable ["citerne", ["",0]];

	if (alive _veh && (_veh in life_vehicles) && (_valueMax > 0) && ((_curValue select 0) == "" || (_curValue select 0) == life_fuel_type) && ((_curValue select 1) < _valueMax)) then {
		_className = typeOf _veh;
		_classNameLife = _className;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_control lbAdd _displayName;
		_control lbSetPicture [(lbSize _control)-1,_picture];
		_control lbSetValue [(lbSize _control)-1, _forEachIndex];
	};
} foreach _nearVehicles;
