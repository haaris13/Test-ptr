/*
	fn_fourriereInit.sqf

	Autor: IronBlade
*/

_cfgFourriere = (missionConfigFile >> "CfgFourriere");

_doors = getArray(_cfgFourriere >> "doors");

{
	_model = _x select 0;
	_pos = _x select 1;

	_door = nearestObjects [_pos, [_model], 50] select 0;

	life_vehicles pushBack _door;

} forEach _doors;