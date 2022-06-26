/*
	File: fn_vehicleViewUpdate.sqf

	Autor: IronBlade
*/
_className = [_this,0,"",[""]] call BIS_fnc_param;
_color = [_this,1,[],[[]]] call BIS_fnc_param;
_arrayOptions = [_this,2,[],[[]]] call BIS_fnc_param;

if (isNil "life_view_Vehicle") then {
	life_view_Vehicle = objNull;
};

if (_className != typeOf life_view_Vehicle) then {

	deleteVehicle life_view_Vehicle;
	life_view_Vehicle = nil;

	life_view_Vehicle = _className createVehicleLocal [0, 0, 0];
	life_view_Vehicle allowDammage false;
	life_view_Vehicle enableSimulation false;
	life_view_Vehicle setPosATL [(getPosATL shop_vehicle_markObj) select 0, (getPosATL shop_vehicle_markObj) select 1, (((getPosATL shop_vehicle_markObj) select 2) + 0.8)];
	life_view_Vehicle setDir (Getdir shop_vehicle_markObj);

	{
		life_view_Vehicle setObjectTexture _x;
	} forEach _color;

	{
		life_view_Vehicle animate _x;
	} forEach _arrayOptions;

	while {(!isNil "life_view_Vehicle")} do {
		life_view_Vehicle setDir Getdir life_view_Vehicle + 2;
		sleep 0.05;
		if (typeof life_view_Vehicle != _className) exitWith {};
	};
} else {

	{
		life_view_Vehicle setObjectTexture _x;
	} forEach _color;

	{
		life_view_Vehicle animate _x;
	} forEach _arrayOptions;
};