/*
	File: fn_tortureVictimPlaceClient.sqf

	Autor: IronBlade
*/
_execPlayer = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;

if(isNull _execPlayer) exitWith {};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if (player getVariable ["torture",false]) exitWith {};
if !(player getVariable ["restrained",false]) exitWith {};

player setVariable ["restrained", false, true];
player setVariable ["torture", true, true];

_anims = ["Acts_ExecutionVictim_Backhand","Acts_ExecutionVictim_Forehand","Acts_ExecutionVictim_Kill","Acts_ExecutionVictim_Kill","Acts_ExecutionVictim_Kill_End","Acts_ExecutionVictim_Loop","Acts_ExecutionVictim_Unbow"];

while {player getVariable  "torture"} do {
	if(vehicle player == player) then {
		player playMove "Acts_ExecutionVictim_Loop";
	};
	
	_state = vehicle player;
	waitUntil {!(animationState player in _anims) || !(player getVariable "torture") || vehicle player != _state};
			
	if(!alive player) exitWith {
		player setVariable ["restrained",false,true];
		player setVariable ["ziptied",false,true];
		player setVariable ["Escorting",false,true];
		player setVariable ["transporting",false,true];
		player setVariable ["torture", nil, true];
		detach player;
	};
};

if(!alive player) exitWith {};

player playMove "Acts_ExecutionVictim_Unbow";
player setVariable ["torture", nil, true];
uiSleep 2;

player setVariable ["restrained", true, true];
[_execPlayer] spawn life_fnc_restrain;