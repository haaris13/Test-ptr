/*
	File: fn_setupZoneGang.sqf

	Autor: IronBlade
*/

_gangsStr = getArray(missionConfigFile >> "Life_Settings" >> "gang_flags");

life_gang_flags = [];

{
  _var = compile _x;

  life_gang_flags pushBack (call _var);

} forEach _gangsStr;