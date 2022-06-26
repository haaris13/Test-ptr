#include "..\..\..\script_macros.hpp"
/*
	File : fn_openMenuNearVehicle.sqf

	Autor: IronBlade
*/
if (life_action_inUse) exitWith {["Error", localize "STR_NOTF_ActionInProc"] spawn life_fnc_showPredefinedNotification;};
if (vehicle player != player) exitWith {};
if (side player != civilian) exitWith {["Error", "Vous n'êtes pas Civil !"] spawn life_fnc_showPredefinedNotification;};
disableSerialization;
private["_nearVehicles","_control"];

life_custom_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
life_custom_type = [_this,3,"civ",[""]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_custom_pnj,["Car","Truck","Air","Ship"],25];

//Error check
if(EQUAL(count _nearVehicles,0)) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};
if(!(createDialog "Near_Custom_Veh")) exitWith {};

_control = CONTROL(71500,71502);
{

	_veh = _x;

	_db = _veh getVariable ["dbInfo",["",""]];

	if (alive _veh && (_db select 0) isEqualTo (getPlayerUID player) && (getDammage _veh) == 0) then {
		_className = typeOf _veh;
		_classNameLife = _className;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_control lbAdd _displayName;
		_control lbSetData [(lbSize _control)-1,str(_forEachIndex)];
		_control lbSetPicture [(lbSize _control)-1,_picture];
		_control lbSetValue [(lbSize _control)-1,0];
	};
} foreach _nearVehicles;
