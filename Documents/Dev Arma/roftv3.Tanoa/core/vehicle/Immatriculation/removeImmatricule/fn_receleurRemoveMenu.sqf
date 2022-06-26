#include "..\..\..\script_macros.hpp"
/*
	File: fn_receleurRemoveMenu.sqf

	Autor:IronBlade
*/

if (life_action_inUse) exitWith {hint localize "STR_NOTF_ActionInProc"};
if (vehicle player != player) exitWith {};
disableSerialization;
private["_nearVehicles","_control"];

life_receleur_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_receleur_pnj,["Car","Truck"],25];

//Error check
if(EQUAL(count _nearVehicles,0)) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};
if(!(createDialog "Receleur_Veh")) exitWith {};

hint "Vous êtes sur le point de retirer la plaque d'immatriculation. Attention le véhicule deviendra illégale, vous ne pourez plus l'immatriculer de maniére légale !";

_control = CONTROL(72400,72402);
{

	_veh = _x;

	_db = _veh getVariable ["dbInfo",["",""]];

	if (alive _veh && (!(_veh getVariable ["immatriculation","Na"] in ["Na","NaI"])) && (_db select 0) isEqualTo (getPlayerUID player)) then {
		_className = typeOf _veh;
		_classNameLife = _className;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		if(isClass (missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife)) then {
			if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife >> "isIllegal") isEqualTo 0) then {
				_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife >> "priceRemove");

				_control lbAdd _displayName;
				_control lbSetData [(lbSize _control)-1,str(_forEachIndex)];
				_control lbSetPicture [(lbSize _control)-1,_picture];
				_control lbSetValue [(lbSize _control)-1,_price];
			};
		};
	};
} foreach _nearVehicles;