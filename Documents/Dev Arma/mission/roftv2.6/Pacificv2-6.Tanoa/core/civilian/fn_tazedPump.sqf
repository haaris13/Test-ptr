#include "..\..\script_macros.hpp"
/*
	File: fn_tazedPump.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the tazed animation and broadcasts out what it needs to.
*/
private["_curWep","_curMags","_attach"];
params [
	["_unit",objNull,[objNull]],
	["_shooter",objNull,[objNull]]
];

if (life_mode_admin) exitWith {};

if(isNull _unit OR isNull _shooter) exitWith {player allowDamage true; life_istazed = false;};

if(_shooter isKindOf "Man" && alive player) then {
	if(!life_istazed) then {
		life_istazed = true;

		_effect = ppEffectCreate ["colorCorrections", 301];
		_effect ppEffectEnable true;

		_effect ppEffectAdjust [0.2, 1, 0, [0, 0, 0, 0], [0, 0, 0, 0],[1, 1, 1, 0]]; 
		_effect ppEffectCommit 1;
		
		_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
		_obj setPosATL ASLTOATL(visiblePositionASL player);
		[player,"AinjPfalMstpSnonWnonDf_carried_fallwc"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		_unit attachTo [_obj,[0,0,0]];
		disableUserInput true;
		sleep 15;

		_effect ppEffectAdjust [1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0.299, 0.587, 0.114, 0]; 
		_effect ppEffectCommit 1;
		
		[player,"amovppnemstpsraswrfldnon"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		
		if(!(player GVAR ["Escorting",false])) then {
			detach player;
		};
		life_istazed = false;
		player allowDamage true;
		disableUserInput false;

		uiSleep 2;
		ppEffectDestroy _effect;
	};
} else {
	_unit allowDamage true;
	life_iztazed = false;
};