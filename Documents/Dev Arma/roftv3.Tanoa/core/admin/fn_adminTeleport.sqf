#include "..\..\script_macros.hpp"
/*
	File: fn_adminTeleport.sqf
	Author: IronBlade
	Credits: To original script author(s)
	Description:
	Teleport to chosen position.
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

time_tp = time;

tele={
	_pos = [_this select 0, _this select 1, _this select 2];

	if ((time - time_tp) > 30) exitWith {onMapSingleClick ""; openMap [false, false];};

	_pos1 = str(position player);

	if (surfaceIsWater _pos && (vehicle player == player)) then {
		[(vehicle player), ([_pos select 0, _pos select 1, 0])] call KK_fnc_setPosAGLS;
	} else {
		(vehicle player) setPos _pos;
	};

	
	
	onMapSingleClick "";
	openMap [false, false];
	
	_pos2 = str(position player);

	hint "Vous avez téléporté à votre position sélectionnée";
	[format ["%1 Se TP de %2 a %3",profileName, _pos1, _pos2], getPlayerUID player, 0] remoteExecCall ["TON_fnc_logsAdmin",2];
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call tele";