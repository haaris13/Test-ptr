#include "..\..\..\script_macros.hpp"
/*
	File: fn_updateViewCustomVeh.sqf

	Autor: IronBlade
*/
_className = [_this,0,"",[""]] call BIS_fnc_param;
_colorIndex = [_this,1,0,[0]] call BIS_fnc_param;
_arrayOptions = [_this,2,[],[[]]] call BIS_fnc_param;

if (_className != typeOf life_view_Vehicle) then {

	_dir = getDir life_view_Vehicle;

	deleteVehicle life_view_Vehicle;

	life_view_Vehicle = _className createVehicleLocal [0, 0, 0];
	life_view_Vehicle allowDammage false;
	life_view_Vehicle enableSimulation false;
	life_view_Vehicle setPosATL [(getPosATL shop_vehicle_markObj) select 0, (getPosATL shop_vehicle_markObj) select 1, (((getPosATL shop_vehicle_markObj) select 2) + 0.8)];
	life_view_Vehicle setDir _dir;
};

{
	life_view_Vehicle animate _x;
} forEach _arrayOptions;

if (_colorIndex isEqualTo -1) exitWith {};

_textures = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "textures");
_textures = (_textures select _colorIndex) select 2;

{
	life_view_Vehicle setObjectTexture [_forEachIndex, _x];
} forEach _textures;