/*
	fn_realTimeToStr.sqf

	Autor: IronBlade
*/

_values = [];

{
	_v = _x;
	if (_v < 10) then {
		_v = format["0%1", _v];
	};

	_values pushBack _v;

} forEach life_real_date;

_time = format ["%1:%2 %3/%4/%5", _values select 3, _values select 4, _values select 2, _values select 1, _values select 0];

_time;