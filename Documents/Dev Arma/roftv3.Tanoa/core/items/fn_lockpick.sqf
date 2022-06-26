#include "..\..\script_macros.hpp"
/*
	File: fn_lockpick.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for lock-picking.
*/


private["_curTarget","_distance","_isVehicle","_title","_progressBar","_cP","_titleText","_dice","_badDistance"];
_curTarget = cursorTarget;
life_interrupted = false;


if(life_action_inUse) exitWith {};
if(isNull _curTarget) exitWith {}; //Bad type
_distance = ((boundingBox _curTarget select 1) select 0) + 2;
if(player distance _curTarget > _distance) exitWith {}; //Too far

_isVehicle = if((_curTarget isKindOf "LandVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(_isVehicle && _curTarget in life_vehicles) exitWith {hint localize "STR_ISTR_Lock_AlreadyHave"};

//More error checks
if(!_isVehicle && !isPlayer _curTarget) exitWith {};
if(!_isVehicle && !(_curTarget GVAR ["restrained",false])) exitWith {};
if ((_curTarget getVariable ["sideRadio","civ"]) == "med") exitWith {hint "C'est pas cool..."};
if ((_curTarget getVariable ["sideRadio","civ"]) == "onu") exitWith {hint "C'est pas cool..."};

_title = format[localize "STR_ISTR_Lock_Process",if(!_isVehicle) then {"Handcuffs"} else {getText(configFile >> "CfgVehicles" >> (typeOf _curTarget) >> "displayName")}];
life_action_inUse = true; //Lock out other actions

//Setup the progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

while {true} do
{
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	
	sleep 0.26;
	
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_interrupted) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _curTarget > _distance) exitWith {_badDistance = true;};
	if (life_earthquake) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

// Nekro
if (_isVehicle) then {
	if (playerSide == west) exitWith {
	life_vehicles pushBack _curTarget;
	hint format ["vous avez récuper les clefs du vehicule."];
	};
};

//Nekro


if (life_earthquake) exitWith {life_action_inUse = false;};
if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText[localize "STR_ISTR_Lock_TooFar","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(!([false,"lockpick",1] call life_fnc_handleInv)) exitWith {life_action_inUse = false;};


life_action_inUse = false;

if(!_isVehicle) then {
	_curTarget SVAR ["restrained",false,true];
	_curTarget SVAR ["Escorting",false,true];
	_curTarget SVAR ["transporting",false,true];
} else {
	_dice = random(100);
	if(_dice < 40 || playerSide == west || (((call life_erpLevel) > 0) && vest player == "GiletFluoDepan")) then {
		titleText[localize "STR_ISTR_Lock_Success","PLAIN"];

		_units = [];

		{
		 	_unit = _x;

			if ((isPlayer _unit) && (player distance _unit) <= 200) then {
				_units pushBack _unit;
			};
		} forEach playableUnits;

		if !(playerSide == west || (((call life_erpLevel) > 0) && vest player == "GiletFluoDepan")) then {
			for "_i" from 0 to 10 do {
				[_curTarget,"caralarm"] remoteExecCall ["life_fnc_playSound3D",_units];
				sleep 0.565;
			};
		};
		
		uiSleep 1;

		if ((locked _curTarget) >= 0) then {
			life_vehicles pushBack _curTarget;
		};

		if (playerSide == west) then {
			life_vehicles pushBack _curTarget;
		};

		if(local _curTarget) then {
			_curTarget lock 0;
		} else {
			[_curTarget,0] remoteExecCall ["life_fnc_lockVehicle",_curTarget];
		};

		["crochetagedevehicule"] spawn life_fnc_achievementLearn;
		
		["lockpick"] call life_fnc_addXP;

	} else {
		titleText[localize "STR_ISTR_Lock_Failed","PLAIN"];
		[] call advanced_insurance_fnc_carAlarm;
		["lockpickfailed"] call life_fnc_addXP;
	};
};