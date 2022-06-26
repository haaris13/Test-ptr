

{
	_citerneStat = (_x getVariable ["citerne", 0]);

	if (_citerneStat >= 3000 && _citerneStat <= 20000) then {
		_citerneStat = (_citerneStat - floor(random 3000));
		_x setVariable ["citerne", _citerneStat, true];
	};
} forEach life_stations_list;