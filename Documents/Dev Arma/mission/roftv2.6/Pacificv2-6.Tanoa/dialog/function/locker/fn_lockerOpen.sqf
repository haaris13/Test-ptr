#include "..\..\..\script_macros.hpp"
/*
	File: fn_lockeropen.sqf
		
	Author: IronBlade
	    
	Description:
		- Open your locker

		this addAction["Mes Affaires",life_fnc_lockeropen,""];

*/
private ["_side"];
disableSerialization;

_side = switch(playerSide) do {case west:{"cop"}; case independent:{"med"}; case civilian:{"civ"};};

_type = -1;

switch(playerSide) do {
	case west:{_type = 0;};
	case independent:{_type = 1;};
	case civilian:{
		if (gouv_president_uid isEqualTo (getPlayerUID player)) then {
			_type = 3;
		};
		if ((call(life_euLevel)) >= 1) then {
			_type = 2;
		};
	};
};

if (_type == -1) exitWith {};

if (count life_storage isEqualTo 0) exitWith {
	_action = [
		"Mise en place du coffre ?",
		"Coffre non trouvé !",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
	] call BIS_fnc_guiMessage;

	if(_action) then {
		[] call life_fnc_lockerSetup;
		closeDialog 0;
	} else {
		closeDialog 0;
	};
};

createDialog "lockerDialog";
[1] call life_fnc_lockerFilter;
uiNamespace setVariable ["Locker_Filter",1];

/* Update when closed */
//Note, might make this save to profile
//Would need a feature to transfer between profiles probably
waitUntil {isNull (findDisplay 14000)};
[getPlayerUID player, (life_storage select 2), (life_storage select 3), (life_storage select 4), _side, _type] remoteExecCall ["TON_fnc_updatePlayerStorage",2];