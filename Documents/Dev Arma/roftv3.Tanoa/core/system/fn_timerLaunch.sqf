/*
	File: fn_timerLaunch.sqf

	Based on BIS Function

	Autor: IronBlade
*/
_color = [_this,0,"",[""]] call BIS_fnc_param;
_timeTake = [_this,1, 0, [0]] call BIS_fnc_param;

_end = time + _timeTake;

if (isNil "life_timer_stop") then {
	life_timer_stop = true;
};

_startTime = time;

1 cutRsc ["RscFiringDrillTime", "PLAIN DOWN"];

while {(time < _end) && life_timer_stop} do {
	_t = abs(time - _end);
	_timeNowFormat = [_t, "MM:SS.MS", TRUE] call BIS_fnc_secondsToString;
	_text = "<t align='left' color='" + _color + "'>";

	_textCurrent = "";
	_colorCurrent = _color;
	_iconCurrent = "A3\Modules_F_Beta\data\FiringDrills\timer_ca";

	_textCurrent = _textCurrent + "<img image='" + _iconCurrent + "' /> ";
	_textCurrent = _textCurrent + (format ["%1:%2<t size='0.8'>.%3</t>", _timeNowFormat select 0, _timeNowFormat select 1, _timeNowFormat select 2]);
	_textCurrent = _textCurrent + "</t>";

	_text  = _text + _textCurrent;

	RscFiringDrillTime_current = parseText _text;

	sleep 0.01;
};

1 cutText ["","PLAIN"];