#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleTakeMenu.sqf

	Autor: IronBlade
*/
_vehicles = [_this, 0, [] ,[[]]] call BIS_fnc_param;
_house = [_this, 1, objNull ,[objNull]] call BIS_fnc_param;

life_clan_house_garage = _house;
life_clan_house_vehicles = _vehicles;

disableSerialization;
createDialog "Dialog_Clan_Veh_List";

_list = CONTROL(6900,6902);
_btnRemove = CONTROL(6900,6904);

_currentRank = [] call life_fnc_clanGetRank;

_canDo = getArray(_currentRank >> "canDo");

if !("garageStore" in _canDo) then {
	_btnRemove ctrlEnable false;
};

lbClear _list;

{
	_id = _x select 0;
	_className = _x select 1;

	_vehicleInfo = [_className] call life_fnc_fetchVehInfo;

	_displayName = _vehicleInfo select 3;
	_picture = _vehicleInfo select 2;

	_list lbAdd _displayName;
	_list lbSetData [(lbSize _list) - 1, str(_id)];
	_list lbSetPicture [(lbSize _list) - 1, _picture];
	_list lbSetValue [(lbSize _list) - 1, _forEachIndex];

} forEach _vehicles;