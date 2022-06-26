/*
	File: fn_spawnConfirm.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Spawns the player where he selected.
*/
private["_spCfg","_sp","_spawnPos"];
closeDialog 0;
cutText ["","BLACK IN"];
if(count life_spawn_point == 0) then {
	private["_sp","_spCfg"];
	_spCfg = [playerSide] call life_fnc_spawnPointCfg;
	_sp = _spCfg select 0;
	
	if(playerSide == civilian) then {
		if(isNil {(call compile format["%1", _sp select 0])}) then {
			player setPos (getMarkerPos (_sp select 0));
		} else {
			_spawnPos = (call compile format["%1", _sp select 0]) call BIS_fnc_selectRandom;
			_spawnPos = _spawnPos buildingPos 0;
			player setPos _spawnPos;
		};
	} else {

		if (surfaceIsWater (getMarkerPos (life_spawn_point select 0))) then {
			[player, (getMarkerPos (life_spawn_point select 0))] call KK_fnc_setPosAGLS;
		} else {
			player setPos (getMarkerPos (life_spawn_point select 0));
		};
	};
	titleText[format["%2 %1",_sp select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
} else {
	if(playerSide == civilian) then {

		if(isNil {(call compile format["%1",life_spawn_point select 0])}) then {
			if((["house",life_spawn_point select 0] call BIS_fnc_inString) || (["clan",life_spawn_point select 0] call BIS_fnc_inString)) then {
				private["_bPos","_house","_pos"];
				_house = nearestObjects [getMarkerPos (life_spawn_point select 0),["House_F"],10] select 0;
				_bPos = [_house] call life_fnc_getBuildingPositions;

				if(count _bPos == 0) exitWith {
					player setPos (getMarkerPos (life_spawn_point select 0));
				};
				
				{_bPos = _bPos - [(_house buildingPos _x)];} foreach (_house getVariable ["slots",[]]);
				_pos = _bPos call BIS_fnc_selectRandom;
				player setPosATL _pos;
			} else {

				if ((life_spawn_point select 0) == "onu_front_spawn") then {
					[player, (getMarkerPos (life_spawn_point select 0))] call KK_fnc_setPosAGLS;
				} else {

					if (surfaceIsWater (getMarkerPos (life_spawn_point select 0))) then {
						[player, (getMarkerPos (life_spawn_point select 0))] call KK_fnc_setPosAGLS;
					} else {
						player setPos (getMarkerPos (life_spawn_point select 0));
					};
				};
				
				player setDir (markerDir (life_spawn_point select 0));
			};
		} else {
			_spawnPos = (call compile format["%1", life_spawn_point select 0]) call BIS_fnc_selectRandom;
			_spawnPos = _spawnPos buildingPos 0;
			player setPos _spawnPos;
		};
	} else {

		player setPos (getMarkerPos (life_spawn_point select 0));
		player setDir (markerDir (life_spawn_point select 0));
	};
	titleText[format["%2 %1",life_spawn_point select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
};

if(life_firstSpawn) then {
	life_firstSpawn = false;
	[] spawn life_fnc_welcomeNotification;
	[] spawn life_fnc_initanticheat;
};

// -- Removes the background effect
( "spawn_background" call BIS_fnc_rscLayer ) cutText [ "", "PLAIN" ];
[] call life_fnc_hudSetup;

// -- Check for gear bug + temp fix
if (playerSide isEqualTo west) then {
	_buggedGear = ["arifle_MX_pointer_F","hgun_P07_F","U_B_CombatUniform_mcam_tshirt","V_PlateCarrierSpec_rgr","H_HelmetB_light_desert","B_AssaultPack_rgr_Medic"];
	_cGear = [primaryWeapon player,handgunWeapon player,uniform player,vest player,headgear player,backpack player];
	if (_cGear isEqualTo _buggedGear) then {
		[]spawn {
			hint "An error occured when loading your character gear. Please provide an admin with your RPT file if possible.";
			_handle = [] spawn life_fnc_stripDownPlayer;
			waitUntil {scriptDone _handle};
			[] call life_fnc_copLoadout
		};
	};
};

life_pos_start = [];