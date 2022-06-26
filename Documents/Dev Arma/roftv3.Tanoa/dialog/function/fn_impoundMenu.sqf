#include "..\..\script_macros.hpp"
/*
	File: fn_impoundMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	The purpose of this menu is it is now called a 'Garage' where vehicles are stored (persistent ones).
*/
private["_vehicles","_control"];
disableSerialization;
_vehicles = param [0,[],[[]]];

ctrlShow[2830,false];
waitUntil {!isNull (findDisplay 2800)};

if(EQUAL(count _vehicles,0)) exitWith {
	ctrlSetText[2825,localize "STR_Garage_NoVehicles"];
};

_control = CONTROL(2800,2802);
lbClear _control;

{
	_class = _x select 2;

	_good = true; // 

	if (_class in ["O_MRAP_02_F","I_MRAP_03_F"] && !(['vehiclesarmor'] call life_fnc_hasPerk) && playerSide == civilian) then {
		_good = false;
		hint "1";
	};

	if (_class in ["B_G_Offroad_01_armed_F","O_T_LSV_02_armed_F"] && !(['vehiclesweapons'] call life_fnc_hasPerk) && playerSide == civilian) then {
		_good = false;
		hint "2";
	};

	if (_good) then {
		_vehicleInfo = [SEL(_x,2)] call life_fnc_fetchVehInfo;
		_control lbAdd (SEL(_vehicleInfo,3));
		_tmp = [SEL(_x,2),SEL(_x,8),SEL(_x,12), (call compile SEL(_x,13)), SEL(_x,14), SEL(_x,15)];

		_tmp = str(_tmp);
		_control lbSetData [(lbSize _control)-1,_tmp];
		_control lbSetPicture [(lbSize _control)-1,SEL(_vehicleInfo,2)];
		_control lbSetValue [(lbSize _control)-1,SEL(_x,0)];
	};
} foreach _vehicles;

ctrlShow[2825,false];