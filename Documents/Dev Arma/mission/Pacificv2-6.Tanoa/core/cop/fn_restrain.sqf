#include "..\..\script_macros.hpp"
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the client.
*/
private["_cop","_player"];
_cop = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
if(isNull _cop) exitWith {};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

//Monitor excessive restrainment

[] spawn {
	private "_time";
	while {true} do {
		_time = time;
		waitUntil {(time - _time) > (15 * 60)};
		
		if(!(player getVariable ["restrained", false])) exitWith {};
		if((!([west,getPos player,100] call life_fnc_nearUnits) || !([civilian,getPos player,15] call life_fnc_nearUnits)) && (player GVAR ["restrained",FALSE]) && vehicle player == player) exitWith {
			player setVariable ["ziptied", false, true];
			player setVariable ["restrained", false, true];
			player setVariable ["Escorting", false, true];
			player setVariable ["transporting", false, true];
			detach player;
			titleText[localize "STR_Cop_ExcessiveRestrain","PLAIN"];

			if (life_iseffectCagoule) then {
				[] spawn life_fnc_removeCagouleClient;
			};
		};
	};
};

titleText[format[localize "STR_Cop_Retrained",_cop GVAR ["realname",name _cop]],"PLAIN"];
				
while {player getVariable ["restrained", false]} do {
	if(vehicle player == player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};
	
	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR "restrained") || vehicle player != _state};
			
	if(!alive player) exitWith {
		player SVAR ["restrained",false,true];
		player SVAR ["ziptied",false,true];
		player SVAR ["Escorting",false,true];
		player SVAR ["transporting",false,true];
		detach _player;
	};
	
	if(!alive _cop) exitWith {
		player SVAR ["Escorting",false,true];
		detach player;
	};
	
	if(vehicle player != player) then {
		//disableUserInput true;
		if(driver (vehicle player) == player) then {player action["eject",vehicle player];};
	};
};

//disableUserInput false;
		
if(alive player) then {
	player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	detach player;
};

if (life_iseffectCagoule) then {
	[] spawn life_fnc_removeCagouleClient;
};