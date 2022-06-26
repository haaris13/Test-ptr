#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerKilled.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	When the player dies collect various information about that player
	and pull up the death dialog / camera functionality.
*/
params [
	["_unit",objNull,[objNull]],
	["_killer",objNull,[objNull]]
];

disableSerialization;

if(!isNull _killer && {_killer != _unit}) then {
	_weapons = if (vehicle _killer == _killer) then {currentWeapon _killer} else {typeOf vehicle _killer};

	_weaponKiller = (currentWeapon _killer);

	if (_weaponKiller != "") then {
		_weaponCateg = [_weaponKiller] call life_fnc_weaponFindCategory;
		if (_weaponCateg != "") then {
			[2000] call life_fnc_subXP;
			[15] spawn life_fnc_targetTrainingStatsUncrease;
		};
	};

	[getPlayerUID _killer, getPlayerUID _unit, _weapons, str (position _unit), str (side _killer), str (playerSide)] remoteExecCall ["TON_fnc_insertDeathLogs",RSERV];
} else {
	["No Killer", getPlayerUID _unit, "No Killer", str (position _unit), "No Killer", str (playerSide)] remoteExecCall ["TON_fnc_insertDeathLogs",RSERV];
};

life_weapons_dead = primaryWeapon _unit;

diag_log life_weapons_dead;

//Set some vars
_unit SVAR ["Revive",FALSE,TRUE]; //Set the corpse to a revivable state.
_unit SVAR ["wantRevive",false,TRUE]; //Set the corpse to a revivable state.
_unit SVAR ["name",profileName,TRUE]; //Set my name so they can say my name.
_unit SVAR ["restrained",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE]; //Why the fuck do I have this? Is it used?
_unit SVAR ["steam64id",(getPlayerUID player),true]; //Set the UID.

life_dead = true;

bank_nb_breaker = nil;

if (!isNull _killer && {_killer != _unit}) then {
	[position player] spawn life_fnc_checkRetourZone;
};

if (dialog) then {
	closeDialog 0;
};
/*
createDialog "DeathScreen";
[_unit] spawn life_fnc_deathScreen;
(findDisplay 7300) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {true}"]; //Block the ESC menu


_effectBlur = ppEffectCreate ["DynamicBlur", 300];
_effectBlur ppEffectEnable true;
_effectBlur ppEffectAdjust [2.5];
_effectBlur ppEffectCommit 3;

_effectColour = ppEffectCreate ["colorCorrections", 301];
_effectColour ppEffectEnable true;
_effectColour ppEffectAdjust [1, 1, 0, [0, 0, 0, 0.7], [1, 0, 0, 0.5],[1, 1, 1, 0]];
_effectColour ppEffectCommit 3;
life_activePPEffects pushBack [_effectColour,_effectBlur];


//Setup our camera view
_unit = player;
life_deathCamera  = "CAMERA" camCreate (getPosATL _unit);
life_deathCamera cameraEffect ["Internal","Back"];
showCinemaBorder false;
life_deathCamera camSetTarget _unit;
//life_deathCamera camSetRelPos [0,3.5,4.5];
life_deathCamera camSetRelPos [0.6,0.7,-0.4];
life_deathCamera camSetFOV .5;
life_deathCamera camSetFocus [50,0];
life_deathCamera camCommit 0;

//Create a thread to follow with some what precision view of the corpse.
[_unit] spawn {
	private["_unit"];
	_unit = _this select 0;
	waitUntil {if(speed _unit == 0) exitWith {true};
	life_deathCamera camSetTarget _unit;
	life_deathCamera camSetRelPos [0.6,0.7,-0.4];
 	life_deathCamera camCommit 0;
	};
};
*/
//Reputation
if !((vehicle _killer) isEqualTo (vehicle _unit)) then {
	if (side _killer isEqualTo civilian) then {
		 if (faction _unit isEqualTo "BLU_F") then {
		 	[false,300] remoteExecCall ["life_fnc_changeRep",_killer];
		 } else {
		 	[false,250] remoteExecCall ["life_fnc_changeRep",_killer];
		 	[false,60] call life_fnc_changeRep;
		};
	} else {
		[false,25] remoteExecCall ["life_fnc_changeRep",_killer];
	};
};

//Make the killer wanted
if(!isNull _killer && {_killer != _unit} && {side _killer != west} && {alive _killer}) then {
	if(vehicle _killer isKindOf "LandVehicle") then {
		[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187V"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		//Get rid of this if you don't want automatic vehicle license removal.
		if(!local _killer) then {
			[2] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	} else {
		[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187"] remoteExecCall ["life_fnc_wantedAdd",RSERV];

		if(!local _killer) then {
			[3] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	};
};

//Killed by cop stuff...
if(side _killer == west && playerSide != west) then {
	life_copRecieve = _killer;
	//Did I rob the federal reserve?
	if(!life_use_atm && {CASH > 0}) then {
		[format[localize "STR_Cop_RobberDead",[CASH] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		CASH = 0;
	};
};

if(!isNull _killer && {_killer != _unit}) then {
	life_removeWanted = true;
};

if((vehicle _unit) != _unit) then {
	UnAssignVehicle _unit;
	_unit action ["getOut", vehicle _unit];
	_unit setPosATL [(getPosATL _unit select 0) + 3, (getPosATL _unit select 1) + 1, 0];
};

//Experimental
SVAR_MNS [LICENSE_VARNAME("isdead","civ"),true];

_handle = [_unit] spawn life_fnc_dropItems;
waitUntil {scriptDone _handle};

life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;

[] call life_fnc_hudUpdate; //Get our HUD updated.
life_sidechat = false;
[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];

[0] call SOCK_fnc_updatePartial;
[2] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
[9] call SOCK_fnc_updatePartial;
