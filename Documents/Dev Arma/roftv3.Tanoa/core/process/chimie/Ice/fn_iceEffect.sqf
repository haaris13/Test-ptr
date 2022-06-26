#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceEffect.sqf

	Autor: IronBlade
*/
_effect = [_this,0,"",[""]] call BIS_fnc_param;

_configMap = (missionConfigFile >> "CfgChimie" >> "Map" >> life_iceChimie_type);

if ((time - life_chimieSound_time) < 60) then {
	life_chimieSound_time = time;
	player say3D "chimie";
};

if (!([] call life_fnc_iceHasCombi)) then {
	_rand = round(random 100);

	0 = ["WetDistortion", 300, [
				1, 
				0, 1, 
				4.10, 3.70, 2.50, 1.85, 
				0.0054, 0.0041, 0.05, 0.0070, 
				1, 1, 1, 1
			]] spawn {
				params ["_name", "_priority", "_effect", "_handle"];
				while {
					_handle = ppEffectCreate [_name, _priority];
					_handle < 0
				} do {
					_priority = _priority + 1;
				};
				_handle ppEffectEnable true;
				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 55;

				_handle ppEffectAdjust [
					1,
					1, 1, 
					4.10, 3.70, 2.50, 1.85, 
					0.0054, 0.0041, 0.0090, 0.0070, 
					0.5, 0.3, 10.0, 6.0
				];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};

				uiSleep 20;

				_handle ppEffectEnable false;	
				ppEffectDestroy _handle;
			};

	if (_effect == "" && _rand < 25) then {
		_effect = "explo2";
	};
};

if (_effect == "") then {_effect = "fumi";};

switch (_effect) do {
	
	case "fumi" : {

		/*

		_fumi1Array = getArray(_configMap >> "fumi1");
		_fumi2Array = getArray(_configMap >> "fumi1");

		_class = (_fumi1Array select 0) select 0;
		_positionBuild = (_fumi1Array select 0) select 1;

		_positionFumi1 = (_fumi1Array select 1);
		_positionFumi2 = (_fumi2Array select 1);


		_house = nearestObjects [_positionBuild, [_class], 50] select 0;

		if (isNull _house) exitWith {};

		_time = _house getVariable ["timeFumi", (time - 70)];

		if ((time - _time) < 60) exitWith {};
		_house setVariable ["timeFumi", time, true];

		_smokes = ["SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"]; 

		life_ice_fumi1 = (selectRandom _smokes) createVehicle getPos (call compile _positionFumi1);
		life_ice_fumi1 attachTo[ (call compile _positionFumi1), [0,0,0]];

		life_ice_fumi2 = (selectRandom _smokes) createVehicle getPos (call compile _positionFumi2);
		life_ice_fumi2 attachTo[ (call compile _positionFumi2), [0,0,0]];

		uiSleep 58;
		deleteVehicle life_ice_fumi1;
		deleteVehicle life_ice_fumi2;

		*/
	};

	case "explo1" : {
		_fumi1Array = getArray(_configMap >> "fumi1");

		_class = (_fumi1Array select 0) select 0;
		_positionBuild = (_fumi1Array select 0) select 1;

		_positionFumi1 = (_fumi1Array select 1);

		_house = nearestObjects [_positionBuild, [_class], 50] select 0;

		if (isNull _house) exitWith {};

		life_ice_explo = ("IEDUrbanSmall_Remote_Ammo" createVehicle position player);
		life_ice_explo setDamage 1;
		uiSleep 0.1;
		player setDamage 1;
		deleteVehicle life_ice_explo;

		diag_log "Explo !";
	};

	case "explo2" : {
		_fumi1Array = getArray(_configMap >> "fumi1");

		_class = (_fumi1Array select 0) select 0;
		_positionBuild = (_fumi1Array select 0) select 1;

		_positionFumi1 = (_fumi1Array select 1);

		_house = nearestObjects [_positionBuild, [_class], 50] select 0;

		if (isNull _house) exitWith {};

		life_ice_explo = ("R_80mm_HE" createVehicle position player);
		life_ice_explo setDamage 1;
		player setDamage 1;
		uiSleep 1;
		deleteVehicle life_ice_explo;

		diag_log "Explo !";
	};

	case "burn" : {

		player say3D "burn";

		player setDamage ((damage player) + 0.1);
	};
};