/*
	File: fn_aceCheckIsUnconscious.sqf

	Autor: IronBlade
*/

life_isUnconscious_Players = [];

[] spawn {
	while {true} do {

		uiSleep 10;

		if (alive player && !(player getVariable ["ACE_isUnconscious", false])) then {
			{
				if (!(_x in life_isUnconscious_Players) && (_x getVariable ["ACE_isUnconscious", false])) then {
					life_isUnconscious_Players pushBack _x;

					["MedicalRequestEmerg",[format["La Balise sur %1 à détécté une Inconscience !",(name _x)]]] call BIS_fnc_showNotification;
				};
			} forEach allPlayers;
		};
	};
};

[] spawn {
	while {true} do {
		uiSleep 1;
		{
			if (!(_x getVariable ["ACE_isUnconscious", false]) || !(isPlayer _x) || isNull _x) then {
				life_isUnconscious_Players deleteAt _forEachIndex;
			};
		} forEach life_isUnconscious_Players;
	};
};