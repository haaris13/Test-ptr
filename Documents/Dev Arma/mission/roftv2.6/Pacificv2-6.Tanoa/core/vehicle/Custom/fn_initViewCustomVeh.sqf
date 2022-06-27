#include "..\..\..\script_macros.hpp"
/*
	File: fn_initViewCustomVeh.sqf

	Autor: IronBlade
*/

if (isNil "life_view_Vehicle") then {
	life_view_Vehicle = objNull;
} else {
	deleteVehicle life_view_Vehicle;
	life_view_Vehicle = objNull;
};

_class = typeOf life_vehicle_to_custom;

life_view_Vehicle = _class createVehicleLocal [0, 0, 0];
life_view_Vehicle allowDammage false;
life_view_Vehicle enableSimulation false;
life_view_Vehicle setPosATL [(getPosATL shop_vehicle_markObj) select 0, (getPosATL shop_vehicle_markObj) select 1, (((getPosATL shop_vehicle_markObj) select 2) + 0.8)];
life_view_Vehicle setDir (Getdir shop_vehicle_markObj);

_color = getObjectTextures life_vehicle_to_custom;

{
	life_view_Vehicle setObjectTexture [_forEachIndex , _x];
} forEach _color;

_anims = [life_vehicle_to_custom] call life_fnc_getAnimationsVeh;

{
	life_view_Vehicle animate _x;
} forEach _anims;

while {(!isNil "life_view_Vehicle")} do {
	life_view_Vehicle setDir Getdir life_view_Vehicle + 2;
	sleep 0.05;
};