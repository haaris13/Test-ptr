#include "..\..\script_macros.hpp"
/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine, IronBlade
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return","_hideout","_hideoutOwner","_hideoutContested","_hideout1","_hideout2","_hideout3","_hideout1owner","_hideout2owner","_hideout3owner","_hideout1contested","_hideout2contested","_hideout3contested"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{ 
	case west:
	{

		if (count life_pos_start == 3) exitWith {
			_mark = createMarkerLocal ["pos_player_ac", life_pos_start];
			_return = [
				["pos_player_ac","Position Actuelle","\a3\ui_f\data\map\Markers\NATO\respawn_unknown_ca.paa"]
			];
		};

		_return = [
			["cop_spawn_5","QG Gendarmerie","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]
			/*
			["cop_spawn_2","La Rochelle HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]
			*/
		];
	};
	
	case civilian:
	{
		_return = [];

		if (count life_pos_start == 3) exitWith {

			_mark = createMarkerLocal ["pos_player_ac", life_pos_start];

			_return = [
				["pos_player_ac","Position Actuelle","\a3\ui_f\data\map\Markers\NATO\respawn_unknown_ca.paa"]
			];
		};


		if (gouv_president_uid == (getPlayerUID player)) exitWith {
			_return = [
				["spawn_pres_villa","Villa Présidentielle","\a3\modules_f_curator\Data\portraitobjectivesector_ca.paa"]
			];
		};


		if (license_civ_narcos) then {
			_return = [
				["narcos_spawn_2","Camp Narcos","\a3\ui_f\data\map\Markers\NATO\o_support.paa"],

				["civ_spawn_3","Tanouka","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_2","La Rochelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_1","GeorgeTown","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_5","Katkoula","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};

		if (!license_civ_narcos) then {
			_return = [
				["civ_spawn_3","Tanouka","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_2","La Rochelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_1","GeorgeTown","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_5","Katkoula","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];

			/*

			if (["La_Rochelle_Centre"] call life_fnc_achievementHas) then {
				_return pushBack ["civ_spawn_2","La Rochelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
			};
			
			if (["GeorgeTown_Center"] call life_fnc_achievementHas) then {
				_return pushBack ["civ_spawn_1","GeorgeTown","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
			};

			if (["Katkoula"] call life_fnc_achievementHas) then {
				_return pushBack ["civ_spawn_5","Katkoula","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
			};
			*/
		};

		if ((call life_depanLevel) > 0) then {
			_return pushBack ["spawn_erp_1","Dépannage","\a3\ui_f\data\map\Markers\NATO\n_installation.paa"];
		};

		if (license_civ_mafia) then {
			_return pushBack ["mafia_spawn_1","Camp Mafieux","\a3\ui_f\data\map\Markers\NATO\n_recon.paa"];
		};
		
		//Check if you have any houses
		if(count life_houses > 0) then {
			{
				_pos = _x;
				_house = nearestObjects [_pos, ["House", "Building"], 50] select 0;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");

				_mrkName = format["house_%1", _house getVariable "uid"];

				if ((markerPos _mrkName) isEqualTo [0,0,0]) then {
					_mark = createMarkerLocal[_mrkName, position _house];
				};
								
				_return pushBack [_mrkName, _houseName,"\a3\modules_f_curator\Data\portraitobjectivesector_ca.paa"];

			} foreach life_houses;
		};

		{
			_mark = getText(missionconfigFile >> "CfgEntreprise" >> _x >> "spawnMark");

			if (_mark != "") then {
				_displayName = getText(missionconfigFile >> "CfgEntreprise" >> _x >> "displayName");
				_return pushBack [_mark,_displayName,"\a3\ui_f\data\map\Markers\NATO\n_installation.paa"];
			};		  
		} forEach life_entreprises;

		if !(isNil {((group player) getVariable "clan_build")}) then {
			_house = ((group player) getVariable "clan_build");

			_currentRank = [] call life_fnc_clanGetRank;
			_canDo = getArray(_currentRank >> "canDo");

			_posSpawn = getArray(missionConfigFile >> "CfgClan" >> "Building" >> (typeOf _house) >> "spawnPos");

			_pos = (_house modelToWorld _posSpawn);

			_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
			
			_marker = createMarkerLocal [format["house_clan_%1",(typeOf _house)], position _house];
			_marker setMarkerTextLocal "Maison de Clan";
			_marker setMarkerColorLocal "ColorGUER";
			_marker setMarkerTypeLocal "loc_Lighthouse";

			if ("spawn" in _canDo) then {
				_mark = createMarkerLocal ["spawn_clan_pos", _pos];
				_return pushBack ["spawn_clan_pos", "Maison de Clan", "\a3\ui_f\data\map\Markers\NATO\n_installation.paa"];
			};
		};
	};

	case independent: {
		_return = [
			["spawn_medic_1","Hopital de GeorgeTown","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["spawn_medic_2","Hopital de Katkoula","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;