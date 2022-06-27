#include "..\..\..\script_macros.hpp"
/*
	File: fn_vehicleDemantelerList.sqf

	Auto:IronBlade
*/
if (life_action_inUse) exitWith {["Error", localize "STR_NOTF_ActionInProc"] spawn life_fnc_showPredefinedNotification;};
if (vehicle player != player) exitWith {};
if (playerSide != west) exitWith {};
disableSerialization;

life_demanteler_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_demanteler_veh, ["Car","Truck", "Ship"],10];

//Error check
if(EQUAL(count _nearVehicles,0)) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};
if(!(createDialog "Vehicle_List_Veh")) exitWith {};

_controlList = CONTROL(81500,81502);
_controlBtnValid = CONTROL(81500,81503); 

_controlList ctrlSetEventHandler ["LBSelChanged","_this call life_fnc_lbchangeDemanteler;"];

_controlBtnValid buttonSetAction "[] spawn life_fnc_vehicleDemantelerAction;";

{
	_veh = _x;

	if (alive _veh && (typeOf _veh != typeOf life_demanteler_veh)) then {
		_className = typeOf _veh;
		_classNameLife = _className;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_controlList lbAdd _displayName;
		_controlList lbSetData [(lbSize _controlList)-1,str(_forEachIndex)];
		_controlList lbSetPicture [(lbSize _controlList)-1,_picture];
		_controlList lbSetValue [(lbSize _controlList)-1,0];
	};
} foreach _nearVehicles;
