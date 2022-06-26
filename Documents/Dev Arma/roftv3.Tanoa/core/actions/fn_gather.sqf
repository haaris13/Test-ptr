#include "..\..\script_macros.hpp"
/*
	File: fn_gather.sqf
	Author: Bryan "Tonic" Boardwine

	// Update et modification bloquage de farm Policier et Medic par alharis

	Description:
	Main functionality for gathering.
*/
if(isNil "life_action_gathering") then {life_action_gathering = false;};
private["_arr","_gemToAdd","_gather","_itemToGather","_amountToGather","_diff","_itemName","_gatherZones","_zone","_cpRate","_chance","_config","_zoneProfession"];
_config = SEL(_this,0);

//Get zone data
_gather = getArray (missionConfigFile >> "CfgResourceZones" >> _config >> "zoneItems");
_illegal = M_CONFIG(getNumber,"CfgResourceZones",_config,"illegal");

_itemToGather = _gather select 0;
_amountToGather = _gather select 1;
if (getPlayerUID player in [
	
	"76561198444102436", // John Backer
	"76561198796614318" // Angel Andres


	] && (_illegal == 1)) exitWith {
  hint "Degage d'ici ! Je ne veux pas voir de flics en civil";
};
//Checks
if(vehicle player != player) exitWith {};	//You cant gather in a vehicle
//if ((_config isEqualTo "log") && (!license_civ_logging)) exitWith {hint "You need a logging license to cut down trees in this area!"};

//Is inventory full
_diff = [_itemToGather,_amountToGather,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};

//Why the fuck is there 2? Do I even need this?
if((life_action_gathering) || (life_action_inUse)) exitWith {}; 
life_action_gathering = true;
life_action_inUse = true;
sleep 0.1;
life_interrupted = false;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Cueillir...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.01;

if (["farmer"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.005;
};

if (["farmer1"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.005;
};

	if (["spaceCake"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.005;
	};

	if (["rizCantonais"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.002;
	};

_particle = getText (missionConfigFile >> "CfgResourceZones" >> _config >> "particle");
_obj = objNull;

if (_particle != "") then {
	_obj = "#particlesource" createVehicleLocal (position player); 
	_obj setParticleClass _particle;
	_obj attachto [player, [-0.015,0.08,0], "RightHandMiddle1"];
};

[] spawn {
	for "_i" from 0 to 2 do {
		player say3D "gather";
		sleep 2.5;
	};
};

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];

	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(dialog) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
deleteVehicle _obj;

player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false; life_action_gathering = false;};
if(player != vehicle player) exitWith {life_action_inUse = false; life_action_gathering = false;};
//You moved or died or something
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Collecte interrompu ","PLAIN"]; life_action_inUse = false; life_action_gathering = false;};

//gz, add to inventory
if(([true,_itemToGather,_diff] call life_fnc_handleInv)) then {
	if (["doubleurR"]call life_fnc_hasPerk) then {
		_double = _amountToGather * 2;
		_doubdiff = [_itemToGather,_double,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
	        if (random 1 < 0.1 && (_doubdiff >= 0)) then {
	          _diff = _doubdiff;
	        };
	};
	_arr = [];	
	_arr pushBack [_itemToGather,_diff];
	[_arr] spawn life_fnc_receivedItemsUI;

	_level = [_config] call life_fnc_getLevelByRessource;
	_level call life_fnc_levelProfession;

	if (_illegal == 0) then {
		["cueillette"] spawn life_fnc_achievementLearn;
	};
};		

["Farm","Process",false] spawn life_fnc_showHelp;

life_action_inUse = false;
life_action_gathering = false;