/*
	File: fn_radioCheckSpeak.sqf

	Autor: Iron
	Date: 02 Apr 2020 19:51:31
	Version: 0.1
*/

_speak = false;

while {true} do {
	waituntil {uiSleep 0.2;!(IsNull (findDisplay 46))};

	if (_speak) then {
		if (!TF_tangent_sw_pressed) then {
			_speak = false;

			if (alive player) then {
				[player, "out1", 5, false] spawn life_fnc_playSound3DNear;
			};

			uiSleep 1;
		};
	} else {
		if (TF_tangent_sw_pressed) then {
			_speak = true;

			[player, "in0", 5, false] spawn life_fnc_playSound3DNear;
		};
	};
};