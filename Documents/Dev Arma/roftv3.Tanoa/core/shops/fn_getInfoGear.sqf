/*
	File:fn_getInfoGear.sqf

	Autor:IronBlade
*/
#define STATS_EQUIPMENT\
	["passthrough","armor","maximumLoad","mass"],\
	[false,false,false,false]

_class = [_this,0,"",[""]] call BIS_fnc_param;

if ((!isClass (configFile >> "cfgweapons" >> _class)) && (!isClass(configFile >> "cfgvehicles" >> _class))) exitWith {[]};

_itemCfg = "";

if (!isClass (configFile >> "cfgweapons" >> _class)) then {
	_itemCfg = (configFile >> "cfgvehicles" >> _class);
} else {
	_itemCfg = (configFile >> "cfgweapons" >> _class);
};

// Init
_barMin = 0.01;
_barMax = 1;
_return = [];

_statsExtremes = life_gear_statsExtremes;

if !(isnil "_statsExtremes") then {
	_statsMin = _statsExtremes select 0;
	_statsMax = _statsExtremes select 1;

	_stats = [
		[_itemCfg],
		STATS_EQUIPMENT,
		_statsMin
	] call bis_fnc_configExtremes;
	_stats = _stats select 1;

	_statArmorShot = linearConversion [_statsMin select 0,_statsMax select 0,_stats select 0, _barMin, _barMax];
	_statArmorExpl = linearConversion [_statsMin select 1,_statsMax select 1,_stats select 1, _barMin, _barMax];
	_statMaximumLoad = linearConversion [_statsMin select 2,_statsMax select 2,_stats select 2, _barMin, _barMax];
	_statMass = linearConversion [_statsMin select 3,_statsMax select 3,_stats select 3, _barMin, _barMax];

	if (getnumber (_itemCfg >> "isbackpack") == 1) then {
		_statArmorShot = _barMin;
		_statArmorExpl = _barMin;
	}; //--- Force no backpack armor

	_return = [
		[_statArmorShot, localize "str_a3_rscdisplayarsenal_stat_passthrough"],
		[_statArmorExpl, localize "str_a3_rscdisplayarsenal_stat_armor"],
		[_statMaximumLoad, localize "str_a3_rscdisplayarsenal_stat_load"],
		[_statMass, localize "str_a3_rscdisplayarsenal_stat_weight"]
	];
};

_return;