#include "..\..\script_macros.hpp"
/*
	File: fn_placeObject.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a object and preps it.
*/
private["_position","_object"];
if(!isNull life_object) exitWith {}; //One at a time
//if (playerSide == civilian) exitWith {hint "Civlians cannot place these items."};

if (playerSide == civilian && life_playerlevel < 5) exitWith {
	closeDialog 0;
	hint "Vous n'étes pas niveau 5 !";
};

_type = _this select 0;

if(([false,_type,1] call life_fnc_handleInv)) then {
	//What are we placing today?
	_placeableArr = life_placeables;
	_index = [_type, _placeableArr] call TON_fnc_index;
	_name = ((_placeableArr) select _index) select 1;

	_object = createVehicle [_name, [0,0,0], [], 0, "NONE"];  
	_conPos = [0,2,1];
	if(_name == "Land_BarGate_F") then {_conPos = [0,2,4.5];};
	_object attachTo[player,_conPos];
	_object setVariable["item","objectDeployed",true];

	life_action_objectDeploy = player addAction["Place object",{if(!isNull life_object) then {detach life_object; life_object = ObjNull;}; player removeAction life_action_objectDeploy; life_action_objectDeploy = nil;},"",999,false,false,"",'!isNull life_object'];
	life_object = _object;
	waitUntil {isNull life_object};
	if(!isNil "life_action_objectDeploy") then {player removeAction life_action_objectDeploy;};
	if(isNull _object) exitWith {life_object = ObjNull;};
	_object setPos [(getPos _object select 0),(getPos _object select 1),0];
	if(_name == "Land_BarGate_F") then {_object allowDamage false;};
};