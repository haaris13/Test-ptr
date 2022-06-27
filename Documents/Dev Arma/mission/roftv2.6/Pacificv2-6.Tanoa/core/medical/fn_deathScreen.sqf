#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: Tonic, IronBlade
   
*/

private["_medicCount","_medicsOnline","_medicsNear","_output","_maxTime","_RespawnBtn","_Timer","_cP","_cpRate","_RequestedMedicLocal","_corpse"];
disableSerialization;
_corpse = SEL(_this,0); //Life_corpse isnt set immediately, so this is needed to prevent an error
_RespawnBtn = CONTROL(7300,7302);
_Timer = CONTROL(7300,7301);
_medicsOnline = CONTROL(7300,7304);
_medicsNear = CONTROL(7300,7305);
_bleedOutProgress = CONTROL(7300,7310);

_medicCount = {_x != player && {side _x == independent} && {alive _x}} count playableUnits;
_nearby = 99999;
_maxTime = time + round (life_respawn_timer * 0.75);

if (_medicCount > 0) then {
	_maxTime = time + round(life_respawn_timer_med * 5);
} else {
	((findDisplay 7300) displayCtrl 7303) ctrlShow false;
};

_RespawnBtn ctrlEnable false;
_bleedOutProgress progressSetPosition 1;
_RequestedMedicLocal = false;
_cP = 1;
_cpRate = 0.00005;
_bleedout = false;
_canRes = false;

while {true} do {

	if ((Life_medic_requested) && !(_RequestedMedicLocal)) then {

		if (_medicCount > 0) then {
			_maxTime = time + (life_respawn_timer_med * 5);
		} else {
			_maxTime = time + (life_respawn_timer * 5);
		};

		_RequestedMedicLocal = true;
	};

	if !(round(_maxTime - time) <= 0) then {
		_Timer ctrlSetText format[localize "STR_Medic_Respawn",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString]; 
	} else {
		/*if (_nearby > 500) then {
			
			_Timer ctrlSetText localize "STR_Medic_Respawn_2";
		};*/
		_RespawnBtn ctrlEnable true;
	};

	_find = false;

	{
		if (side _x == independent && alive _x && _x != player) then
		{
			_distance = (getPosATL _corpse) distance _x;
			if (_distance < _nearby) then { _nearby = round _distance; _find = true; };
		};
	} foreach playableUnits;

	if (!_find) then {

		_nearby = 99999;

		{
			if (side _x == independent && alive _x && _x != player) then
			{
				_distance = (getPosATL _corpse) distance _x;
				if (_distance < _nearby) then { _nearby = round _distance;};
			};
		} foreach playableUnits;
	};

	_medicsOnline ctrlSetText format["Secouristes Disponible : %1",_medicCount];

	if (_medicCount >= 1) then {

		_medicsNear ctrlSetText format["Secouristes Proche: %1m",_nearby];
		
	} else {
		_medicsNear ctrlSetText format["Aucun Secouriste"];
	};

	if (_corpse getVariable ["executed", false]) exitWith {_bleedout = true};

	if (_cP <= 0) exitWith {_bleedout = true};
	_cP = _cP - _cpRate;
	_bleedOutProgress progressSetPosition _cP;

	//Dialog is closed when revived
	if (isNull (findDisplay 7300)) exitWith {};
	sleep 0.1;
};

Life_medic_requested = false; 


if (_bleedout) exitWith {
	titleText ["Vous mourrez...", "BLACK OUT", 3];
	closeDialog 0;
	sleep 4;
	titleText ["Vous mourrez...", "BLACK IN", 0];
	life_respawned = true;
 	[] call life_fnc_spawnMenu;
};

//When the timer is up, if you didnt bleed out you can respawn
if (!(isNull (findDisplay 7300))) then {

};