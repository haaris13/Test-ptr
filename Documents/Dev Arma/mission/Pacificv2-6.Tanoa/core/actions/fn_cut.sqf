#include "..\..\script_macros.hpp"
/*
	File: fn_cut.sqf
		
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

//Checks
if(vehicle player != player) exitWith {};	//You cant gather in a vehicle
if (ITEM_VALUE("cut") isEqualTo 0) exitWith {["Error", "Vous avez besoin d'une Machette!"] spawn life_fnc_showPredefinedNotification;};
if (_inWater isEqualTo 1 && ((getPosATL player) select 2) > 2) exitWith {["Error", "Vous devez être près du sol !"] spawn life_fnc_showPredefinedNotification;};

//Is inventory full
_diff = [_itemToGather,_amountToGather,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (EQUAL(_diff,0)) exitWith {
	if((time - life_action_delay) < 1) exitWith {};
	["Warning", localize "STR_NOTF_InvFull"] spawn life_fnc_showPredefinedNotification;
	life_action_delay = time;
};

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
_upp = "Chasser ...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.02;

if (_illegal == 0 && ["farmerLegalV1"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 0 && ["farmerLegalV2"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 0 && ["farmerLegalV3"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 1 && ["farmerNoLegalV1"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 1 && ["farmerNoLegalV2"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 1 && ["farmerNoLegalV3"]call life_fnc_hasPerk) then {
	_cpRate = _cpRate * 1.15;
};

if (_illegal == 1) then {
	if (["spaceCake"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.002;
	};
} else {
	if (["rizCantonais"] call life_fnc_hasAtouts) then {
		_cpRate = _cpRate + 0.001;
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
player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false; life_action_gathering = false;};
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Collecte interrompu ","PLAIN"]; life_action_inUse = false; life_action_gathering = false;};
if(player != vehicle player) exitWith {life_action_inUse = false; life_action_gathering = false;};
	
//gz, add to inventory
if(([true,_itemToGather,_diff] call life_fnc_handleInv)) then {

	_arr = [];

	_arr pushBack [_itemToGather,_diff];
	[_arr] spawn life_fnc_receivedItemsUI;
	
	_level = [_config] call life_fnc_getLevelByRessource;
	_level call life_fnc_levelProfession;
};		

life_action_inUse = false;
life_action_gathering = false;