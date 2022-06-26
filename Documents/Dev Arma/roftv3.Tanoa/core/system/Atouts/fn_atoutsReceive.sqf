/*
	File: fn_atoutsReceive.sqf

	Autor: Iron
	Date: 09 Mar 2020 23:35:16
	Version: 0.1
*/
_atouts = [_this, 0, [], [[]]] call BIS_fnc_param;

[] spawn life_fnc_atoutsInit;

life_atouts_actif = [];

{
	_id = _x select 0;
	_var = _x select 1;
	_timeLeft = _x select 2;
	_timeStart = time;

	if (_timeLeft > 10) then {
		life_atouts_actif pushBack [_var, _timeLeft, _timeStart];
		[_var] spawn life_fnc_atoutsApply;
	};	
} forEach _atouts;