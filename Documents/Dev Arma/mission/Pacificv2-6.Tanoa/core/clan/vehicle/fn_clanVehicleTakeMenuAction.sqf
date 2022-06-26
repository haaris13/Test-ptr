#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleTakeMenuAction.sqf

	Autor: IronBlade
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

_list = CONTROL(6900,6902);

if (lbCurSel _list == -1) exitWith {};

_value = _list lbValue (lbCurSel _list);

_current = life_clan_house_vehicles select _value;

_idVehicle = _current select 0;

switch (_type) do { 
	case 0 : {
		[life_clan_house_garage, _idVehicle, player] remoteExec ["TON_fnc_clanRemoveVehicle", 2];
		_clan_garage = (group player) getVariable "clan_garage";
		(group player) setVariable ["clan_garage", _clan_garage - 1, true];
	};

	case 1 : {
		[life_clan_house_garage, _idVehicle, player] remoteExec ["TON_fnc_clanTakeVehicle", 2];
	};
};

closeDialog 0;