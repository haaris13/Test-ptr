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
if(_isVehicle && _curTarget in life_vehicles) exitWith {["Error", localize "STR_ISTR_Lock_AlreadyHave"] spawn life_fnc_showPredefinedNotification;};

//More error checks
if(!_isVehicle && !isPlayer _curTarget) exitWith {};
if(!_isVehicle && !(_curTarget GVAR ["restrained",false])) exitWith {};
if ((_curTarget getVariable ["sideRadio","civ"]) == "med") exitWith {["Error", "C'est pas cool..."] spawn life_fnc_showPredefinedNotification;};
if ((_curTarget getVariable ["sideRadio","civ"]) == "onu") exitWith {["Error", "C'est pas cool..."] spawn life_fnc_showPredefinedNotification;};

_title = format[localize "STR_ISTR_Lock_Process",if(!_isVehicle) then {"Menottes"} else {getText(configFile >> "CfgVehicles" >> (typeOf _curTarget) >> "displayName")}];
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
	
	sleep 0.30;
	
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

if (life_earthquake) exitWith {life_action_inUse = false;};
if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText[localize "STR_ISTR_Lock_TooFar","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(!([false,"lockpick",1] call life_fnc_handleInv)) exitWith {life_action_inUse = false;};


life_action_inUse = false;

if(!_isVehicle) then {
	_curTarget setVariable ["restrained",false,true];
	_curTarget setVariable ["Escorting",false,true];
	_curTarget setVariable ["transporting",false,true];
} else {
	_dice = random(100);

	_checkDice = 40;

	if (['lockpick'] call life_fnc_hasPerk) then {
		_checkDice = 60;
	};	

	if(_dice < _checkDice || (playerSide == west) || (((call life_depanLevel) > 0) && (backpack player) in ["sac_depan"])) then {
		titleText[localize "STR_ISTR_Lock_Success","PLAIN"];

		_units = [];

		{
		 	_unit = _x;

			if ((isPlayer _unit) && (player distance _unit) <= 200) then {
				_units pushBack _unit;
			};
		} forEach playableUnits;

		if !(playerSide == west || (((call life_depanLevel) > 0) && (backpack player) in ["sac_depan"])) then {
			[_curTarget, _units] spawn {
				_curTarget = _this select 0;
				_units = _this select 1;

				for "_i" from 0 to 2 do {
					[_curTarget, "Orange_Car_Alarm"] remoteExec ["life_fnc_playSound3D", _units];
					sleep 6.38501;
				};
			};
		};
		
		uiSleep 1;

		if ((locked _curTarget) == 0 || (playerSide == west)) then {
			life_vehicles pushBack _curTarget;
		};

		if (local _curTarget) then {
			_curTarget lock 0;
		} else {
			[_curTarget, 0] remoteExecCall ["life_fnc_lockVehicle", _curTarget];
		};

		["crochetagedevehicule"] spawn life_fnc_achievementLearn;
		
		["lockpick"] call life_fnc_addXP;

	} else {
		titleText[localize "STR_ISTR_Lock_Failed","PLAIN"];
		["lockpickfailed"] call life_fnc_addXP;
	};
};