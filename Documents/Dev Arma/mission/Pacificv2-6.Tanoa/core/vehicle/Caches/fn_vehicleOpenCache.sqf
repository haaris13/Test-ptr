#include "..\..\..\script_macros.hpp"
/*
	File:fn_vehicleOpenCache.sqf

	Autor:IronBlade
*/

_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_cfgCaches = [_this,1,"",[""]] call BIS_fnc_param;

if(playerSide != civilian) exitWith {closeDialog 0;};
if(!(_vehicle isKindOf "landVehicle")) exitWith {closeDialog 0;};
if (!isClass (missionConfigFile >> "CfgVehicleCaches" >> _cfgCaches)) exitWith {};
_distance = ((boundingBox _vehicle select 1) select 0) + 2;
if(player distance _vehicle > _distance) exitWith {}; //Too far
if (_vehicle getVariable["trunk_cache_use", false]) exitWith {["Error", "Quelqu'un est déja en train de gérer la contrebande !"] spawn life_fnc_showPredefinedNotification;};
life_vehicle_cache = _vehicle;
life_vehicle_cache_cfg = _cfgCaches;
life_action_inUse = true;

_cfgVeh = (missionConfigFile >> "LifeCfgVehicles" >> (typeOf _vehicle));
_cfg = (missionConfigFile >> "CfgVehicleCaches" >> _cfgCaches);
_displayName = getText(_cfg >> "displayName");
_weight = getNumber(missionConfigFile >> "LifeCfgVehicles" >> (typeOf _vehicle) >> "caches" >> _cfgCaches >> "trunk");

// Setup Var
_vehicle setVariable["trunk_cache_use", true, true];
_vehicle setVariable["trunk_cache_owner", getPlayerUID player, true];
uiSleep (random 1);
if (_vehicle getVariable ["trunk_cache_owner", ""] != (getPlayerUID player)) exitWith {life_action_inUse = false;};


disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_title = format["Ouverture Cache (%1)",_displayName];
_anim = "InBaseMoves_assemblingVehicleErc";
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;
_cPRate = (0.1/_weight);

_sound = false;

playSound "Acts_carFixingWheel"; playSound "Acts_carFixingWheel";

while {true} do
{
	if (animationState player != _anim) then {
		[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove _anim;
		player playMoveNow _anim;
	};

	if(_cP >= 0.5 && !_sound) then {
		_sound = true;
		playSound "Acts_carFixingWheel"; playSound "Acts_carFixingWheel";
		[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove _anim;
		player playMoveNow _anim;
	};
	
	sleep 0.5;
	
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cPRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	
	if(_cP >= 1 || !alive player) exitWith {};
	if(life_istazed) exitWith {};
	if(life_interrupted) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _vehicle > _distance) exitWith {_badDistance = true;};
	if (_vehicle getVariable ["trunk_cache_owner", ""] != (getPlayerUID player)) exitWith {};
	if(player != vehicle player) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if (_vehicle getVariable ["trunk_cache_owner", ""] != (getPlayerUID player)) exitWith {life_action_inUse = false;};

if(!alive player OR life_istazed) exitWith {life_action_inUse = false; _vehicle setVariable["trunk_cache_use", false, true];};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false; _vehicle setVariable["trunk_cache_use", false, true];};
if(!isNil "_badDistance") exitWith {titleText["Vous êtes trop loin !","PLAIN"]; life_action_inUse = false; _vehicle setVariable["trunk_cache_use", false, true];};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false; _vehicle setVariable["trunk_cache_use", false, true];};
if(player != vehicle player) exitWith {life_action_inUse = false; _vehicle setVariable["trunk_cache_use", false, true];};

life_action_inUse = false;

_xpCost = getNumber(_cfg >> "xpCost");

[_xpCost] call life_fnc_subXP;

[] spawn life_fnc_vehicleCacheDialog;