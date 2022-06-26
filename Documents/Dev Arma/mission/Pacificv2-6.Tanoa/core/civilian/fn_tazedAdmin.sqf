#include "..\..\script_macros.hpp"
/*
	File: fn_tazedAdmin.sqf
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
		
		[_unit] remoteExecCall ["life_fnc_tazeSound",RCLIENT];
		_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
		_obj setPosATL ASLTOATL(visiblePositionASL player);
		[player,"AinjPfalMstpSnonWnonDf_carried_fallwc"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		_unit attachTo [_obj,[0,0,0]];
		disableUserInput true;
		sleep 15;
		
		[player,"amovppnemstpsraswrfldnon"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		
		if(!(player GVAR ["Escorting",false])) then {
			detach player;
		};
		life_istazed = false;
		player allowDamage true;
		disableUserInput false;

		["admintazed"] spawn life_fnc_achievementLearn;
	};
} else {
	_unit allowDamage true;
	life_iztazed = false;
};