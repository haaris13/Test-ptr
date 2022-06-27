#include "..\..\..\script_macros.hpp"
/*
	File: fn_immatriculeVehMenu.sqf
	Author: IronBlade
*/
if (life_action_inUse) exitWith {["Error", localize "STR_NOTF_ActionInProc"] spawn life_fnc_showPredefinedNotification;};
if (life_action_immatriculationInUse) exitWith {["Error", "Immatriculation en cours !"] spawn life_fnc_showPredefinedNotification;};
if (vehicle player != player) exitWith {};
disableSerialization;
private["_nearVehicles","_control"];

life_immat_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_immat_pnj,["Car","Truck"],25];


life_immat_type = (_this select 3) select 0;

if (life_immat_type) then {
	["Immatriculation", "Illegal", true] spawn life_fnc_showHelp;
} else {
	["Immatriculation", "Legale", true] spawn life_fnc_showHelp;
};

//Error check
if(EQUAL(count _nearVehicles,0)) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};
if(!(createDialog "Immatricule_Veh")) exitWith {};

_control = CONTROL(71400,71402);
{

	_veh = _x;

	_db = _veh getVariable ["dbInfo",["",""]];

	if (alive _veh && ((_veh getVariable ["immatriculation","Na"] isEqualTo "Na") || ((_veh getVariable ["immatriculation","Na"] isEqualTo "NaI") && life_immat_type)) && (_db select 0) isEqualTo (getPlayerUID player)) then {
		_className = typeOf _veh;
		_classNameLife = _className;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		if(isClass (missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife)) then {
			if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife >> "isIllegal") isEqualTo 0) then {
				_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife >> "price");

				if (life_immat_type) then {_price = _price  / 2;};

				_control lbAdd _displayName;
				_control lbSetData [(lbSize _control)-1,str(_forEachIndex)];
				_control lbSetPicture [(lbSize _control)-1,_picture];
				_control lbSetValue [(lbSize _control)-1,_price];
			};
		};
	};
} foreach _nearVehicles;