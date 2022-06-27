#include "..\..\script_macros.hpp"
/*
	File:fn_retirerImmatriculation.sqf

	Autor:IronBlade
*/
_vehicle = cursorTarget;
life_interrupted = false;
if(isNull _vehicle) exitwith {};

if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle) >> "isIllegal") isEqualTo 1 || (_vehicle getVariable ["immatriculation","illegal"] isEqualTo "illegal")) exitWith {["Error", "Il n'y a pas de plaque d'immatriculation sur ce véhicule !"] spawn life_fnc_showPredefinedNotification;};

[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

if !("ToolKit" in (items player)) exitWith {["Error", "Une Trousse à outils est nécessaire !"] spawn life_fnc_showPredefinedNotification;};

if((_vehicle isKindOf "Car")) then {

	life_action_inUse = true;
	_upp = format["Retirer la plaque !"];

	//Setup our progress bar.
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui = GVAR_UINS "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0;
	_cpRate = 0.01;

	if (["mechanic"] call life_fnc_hasPerk) then {
		_cpRate = 0.0115;
	};

	playSound "Acts_carFixingWheel";
	playSound "Acts_carFixingWheel";

	_sound = false;

	_anim = "InBaseMoves_assemblingVehicleErc";

	while{true} do {
		if (animationState player != _anim) then {
			[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove _anim;
			player playMoveNow _anim;
		};
		
		sleep 0.27;
		_cP = _cP + _cpRate;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];

		if(_cP >= 0.5 && !_sound) then {_sound = true; playSound "Acts_carFixingWheel"; playSound "Acts_carFixingWheel";};

		if(_cP >= 1) exitWith {};
		if(!alive player) exitWith {};
		if(player != vehicle player) exitWith {};
		if(life_interrupted) exitWith {};
	};
	
	life_action_inUse = false;
	5 cutText ["","PLAIN"];
	player playActionNow "stop";
	if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};
	if(player != vehicle player) exitWith {};

	_vehicle setVariable ["immatriculation","illegal", true];
	[_vehicle, " "] call life_fnc_immatriculeVehSet;

	titleText["Plaque d'immatriculation retiré !","PLAIN"];
};