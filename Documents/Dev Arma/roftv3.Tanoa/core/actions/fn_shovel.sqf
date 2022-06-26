#include "..\..\script_macros.hpp"
/*
    File: fn_shovel.sqf
        
    Author: Tonic, IronBlade
*/
if(isNil "life_action_gathering") then {life_action_gathering = false;};
private["_arr","_gemToAdd","_gather","_itemToGather","_amountToGather","_diff","_itemName","_gatherZones","_zone","_cpRate","_chance","_config","_zoneProfession"];
_config = SEL(_this,0);

//Get zone data
_gather = getArray (missionConfigFile >> "CfgResourceZones" >> _config >> "zoneItems");
_inWater = M_CONFIG(getNumber,"CfgResourceZones",_config,"inWater");
_illegal = M_CONFIG(getNumber,"CfgResourceZones",_config,"illegal");

_itemToGather = _gather select 0;
_amountToGather = _gather select 1;
if (getPlayerUID player in [
	
	"76561198444102436", // John Backer
	
	"76561198796614318", // Angel Andres

	"76561198134360699", // Remi Wends
	"76561198304515820", // Mateo Jecko
	"76561198088773721", // Roger Murtof
	"76561198028213483" // Silver Snow
	] && (_illegal == 1)) exitWith {
  hint "Degage de la !!! je ne veux pas voir de Policier en civil";
};
//Checks
if(vehicle player != player) exitWith {};	//You cant gather in a vehicle
if (ITEM_VALUE("shovel") isEqualTo 0) exitWith {hint "Vous avez besoin d'une pelle pour miner dans ce domaine!"};
if (_inWater isEqualTo 1 && ((getPosATL player) select 2) > 2) exitWith {hint "Vous devez étre prés du sol !"};

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
_upp = "Creuser...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.02;

if (["farmer"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.005;
};

if (["farmer1"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.005;
};


	if (["spaceCake"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.004;
	};

	if (["rizCantonais"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.002;
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
player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false; life_action_gathering = false;};
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Collecte interrompu ","PLAIN"]; life_action_inUse = false; life_action_gathering = false;};
if(player != vehicle player) exitWith {life_action_inUse = false; life_action_gathering = false;};
	
if (life_reliq_charge <= 0 && _itemToGather == "templeBones") exitWith {life_interrupted = false; life_action_inUse = false; life_action_gathering = false;};

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

	//Chance for gem if mining
	_rand = floor random 100;
	_chance = 15;

	if (["lucky"] call life_fnc_hasPerk) then {
		_chance = 20; 
	};

	if (["luckyV2"] call life_fnc_hasPerk) then {
		_chance = _chance + 5;
	};

	if (_rand <= _chance) then {

		switch (_itemToGather) do { 
			case "templeBones" : {

				life_reliq_charge = life_reliq_charge - 1;

				_gems = [["templeReliques",4],
					["templeCoins",25],
					["rien",60]
				];

				_gemToAdd = [_gems] call LB_SelectByChance;

				if (_gemToAdd != "rien") then {
					if(([true,_gemToAdd,1] call life_fnc_handleInv)) then {
						_arr pushBack [_gemToAdd,1];
					};
				};
			};

			case "gravesWatch" : {
				_gems = [["gravesRing",10],
					["gravesBracelet",30],
					["gravesCollar",60]
				];

				_gemToAdd = [_gems] call LB_SelectByChance;

				if(([true,_gemToAdd,1] call life_fnc_handleInv)) then {
					_arr pushBack [_gemToAdd,1];
				};
			};

			case "archeTOssements" : {
				_gems = [["archeTUniforme",15],
					["archeTCasque",60]
				];

				_gemToAdd = [_gems] call LB_SelectByChance;

				if(([true,_gemToAdd,1] call life_fnc_handleInv)) then {
					_arr pushBack [_gemToAdd,1];
				};
			};

			case "archeSVin" : {
				_gems = [["archeSCoffreT",10],
					["archeSCoffreB",60]
				];

				_gemToAdd = [_gems] call LB_SelectByChance;

				if(([true,_gemToAdd,1] call life_fnc_handleInv)) then {
					_arr pushBack [_gemToAdd,1];
				};
			};

			default {

			}; 
		};
	};

	_arr pushBack [_itemToGather,_diff];
	[_arr] spawn life_fnc_receivedItemsUI;
	
	_level = [_config] call life_fnc_getLevelByRessource;
	_level call life_fnc_levelProfession;
};		

life_action_inUse = false;
life_action_gathering = false;