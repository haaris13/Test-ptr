#include "..\..\script_macros.hpp"
/*
	File: fn_timerLaunch.sqf

	Based on BIS Function

	Autor: IronBlade
*/
_timeTake = [_this,0, 0, [0]] call BIS_fnc_param;

disableSerialization;
1 cutRsc ["life_timer","PLAIN"];
_uiDisp = GVAR_UINS "life_timer";
_timer = _uiDisp displayCtrl 38301;

life_timer_stop = true;

_end = time + _timeTake;
_startTime = time;

while {(time < _end) && life_timer_stop} do {

	if(isNull _uiDisp) then {
		1 cutRsc ["life_timer","PLAIN"];
		_uiDisp = GVAR_UINS "life_timer";
		_timer = _uiDisp displayCtrl 38301;
	};

	_t = abs(time - _end);

	_timeNowFormat = [_t, "MM:SS.MS"] call BIS_fnc_secondsToString;
	_timer ctrlSetText format["%1", _timeNowFormat];

	sleep 0.08;
};

1 cutText["","PLAIN"];