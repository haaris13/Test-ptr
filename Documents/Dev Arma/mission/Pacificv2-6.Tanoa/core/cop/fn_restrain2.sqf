#include "..\..\script_macros.hpp"
/*
	File: fn_restrain2.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the client.
*/
private["_cop","_player"];
_cop = [_this,0, Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
if(isNull _cop) exitWith {};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if (player getVariable ["playerSurrender", false]) then {
	player setVariable ["playerSurrender", nil, true];
};

if (life_action_inUse) then {
	life_interrupted = true;
};

player setVariable ["tf_unable_to_use_radio", true];

//["Warning", "Vous avez été menotté."] spawn life_fnc_showPredefinedNotification;

_speedPoint = 0;
player setAnimSpeedCoef 0.9;
				
while {player getVariable ["restrained", false]} do {
	if (!(alive player)) exitWith {};
	if !((currentWeapon player) isEqualTo "") then {
	    player action ["SwitchWeapon",player,player,100];
	    uiSleep 3;
	};

    if (isNull objectParent player) then {
        player playAction "The_Programmer_Restrain";
    };

    _vehicle = vehicle player;
    if (_vehicle != player) then {
    	if ((driver _vehicle) == player) then {
    		player action ["eject", vehicle player];
    	};
    };

    waitUntil {((vehicle player) == player) || !(player getVariable ["restrained", false]) || (!alive player) || life_dead};

	if (!(alive player)) exitWith {};

	if (life_dead) exitWith {};

	if (!isNull (findDisplay 602)) then {
		closeDialog 0;
	};

    _speed = (speed player);

    switch (true) do {
  		case (_speed > 13 && _speed < 14): {_speedPoint = _speedPoint + 0.5;};
  		case (_speed >= 14 && _speed < 15): {_speedPoint = _speedPoint + 0.8;};
  		case (_speed >= 15 && _speed < 16): {_speedPoint = _speedPoint + 1;};
  		case (_speed >= 16 && _speed < 17): {_speedPoint = _speedPoint + 1.3;};
  		case (_speed >= 17): {_speedPoint = _speedPoint + 1.9;};
	};

	if (_speedPoint > 10) then {
		_speedPoint = 0;
		player playAction "PlayerProne";
	};

	[] spawn {
	  while {dialog} do {
		closeDialog 0;
		uiSleep 0.01;
	  };
	};

    uiSleep 1;
};

player setVariable ["tf_unable_to_use_radio", false];
player setAnimSpeedCoef 1;
		
if (alive player) then {
	player playAction "gesturenod";
	player setVariable ["Escorting",nil,true];
	player setVariable ["transporting",nil,true];
	detach player;
} else {
	player setVariable ["restrained",nil,true];
    player setVariable ["Escorting",nil,true];
    player setVariable ["transporting",nil,true];
    detach player;
};

if (life_iseffectCagoule) then {
	[] spawn life_fnc_removeCagouleClient;
};