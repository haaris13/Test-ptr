/*
	File:fn_checkAtouts.sqf

	Autor:IronBlade
*/

while {true} do {
	uiSleep 1;

	{

		_var = _x select 0;
		_timeLaunch = _x select 1;
		_timeEnd = _x select 2;
		_index = _forEachIndex;

		if (_timeEnd <= time) then {
			life_atouts_actif deleteAt _index;
			[_var,false] spawn life_fnc_launchAtouts;
		};

	} forEach life_atouts_actif;
};