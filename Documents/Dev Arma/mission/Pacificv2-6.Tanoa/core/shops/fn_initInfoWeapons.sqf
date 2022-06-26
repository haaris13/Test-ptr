/*
	File:fn_initInfoWeapons.sqf

	Autor:IronBlade
*/

#define STATS_WEAPONS\
	["reloadtime","dispersion","maxzeroing","hit","mass","initSpeed"],\
	[true,true,false,true,false,false]

_statsExtremes = [
	("isclass _x && getnumber (_x >> 'scope') == 2 && getnumber (_x >> 'type') < 5") configclasses (configfile >> "cfgweapons"),
	STATS_WEAPONS
] call bis_fnc_configExtremes;

life_weapons_statsExtremes = _statsExtremes;