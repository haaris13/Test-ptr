/*
	File:fn_IEMHeli.sqf

	Autor:IronBlade
*/
_cop = [_this,0,objNull,[objNull]] call BIS_fnc_param;

_veh = vehicle player;

if (_veh == player || playerSide == west || life_iem_state == -1 || isNull _cop) exitWith {};

if (!((_veh) isKindOf "Air")) exitWith {};

_driver = false;

if ((driver (_veh)) == player) then {_driver = true;};

if (count(crew (_veh)) == 1) then {_driver = true;};

if (!_driver) exitWith {};

if (life_iem_state == 0) then {

	["<t color='#ff0000'>Attention, La Police vous demande de vous poser ! (Ce n'est pas une Sommation !)</t>"] call life_fnc_dynamicText;
	["<t color='#ff0000'>Demande ce se poser en cours !</t>"] remoteExecCall ["life_fnc_dynamicText",_cop];

	[] spawn {
		for "_i" from 0 to 8 do {
			sleep 0.6;
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
		};

		for "_i" from 0 to 10 do {
			sleep 0.5;
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
		};

		for "_i" from 0 to 15 do {
			sleep 0.3;
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
			playSound "beep_target";
		};

	};

	life_iem_state = 1;

	[] spawn {
		uiSleep (5 * 60);
		life_iem_state = 0;
	};

} else {

	if ((vehicle player) getVariable ["brouilleurPlace",false]) exitWith {
		["<t color='#ff0000'>L'IEM a été bloqué par le brouilleur !</t>"] call life_fnc_dynamicText;
		["L'IEM n'a pas pu étre lancé ! Un brouilleur est présent sur le vehicule !</t>"] remoteExecCall ["life_fnc_dynamicText",_cop];
	};

	life_iem_state = -1;

	
	[] spawn {
		titleCut ["", "BLACK IN", 1]; 
		titleRsc ["RscStatic","PLAIN"];

		for "_i" from 0 to 10 do {
			uiSleep (random 2);

			titleCut ["", "BLACK IN", 1]; 
			titleRsc ["RscStatic","PLAIN"];
		};
	};

	["<t color='#ff0000'>Attention, La Police a lancé un IEM !</t>"] call life_fnc_dynamicText;
	["Lancement de l'IEM</t>"] remoteExecCall ["life_fnc_dynamicText",_cop];

	_log = format ["%1 Launch IEM sur %2 %3", name _cop, name player, typeOf (vehicle player)];

	[getPlayerUID _cop, 1, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

	(vehicle player) setVariable["iem", 1, true];

	// Launch IEM
	[] spawn {

		uiSleep 20;

		_veh = (vehicle player);
		_fuel = fuel _veh;

		_timeSleep = 0.30;

		_time = time;

		while {!isTouchingGround _veh} do {

			if ((_time + 30) <= time) then {_time = time; _timeSleep = _timeSleep + 0.05;};

			sleep 0.5;
			_veh setFuel 0;
			sleep _timeSleep;
			_veh setFuel _fuel;
		};
		_veh setFuel 0;
		life_iem_state = 0;

		uiSleep (3*60);

		_veh setFuel _fuel;

		(vehicle player) setVariable["iem", nil, true];
	};
};

