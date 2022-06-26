/*
	File: fn_getInfoWeapons.sqf

	Autor: IronBlade
*/

#define STATS_WEAPONS\
	["reloadtime","dispersion","maxzeroing","hit","mass","initSpeed"],\
	[true,true,false,true,false,false]

_class = [_this,0,"",[""]] call BIS_fnc_param;

if (!isClass (configFile >> "CfgWeapons" >> _class)) exitWith {[]};

// Init
_itemCfg = (configFile >> "CfgWeapons" >> _class);
_barMin = 0.01;
_barMax = 1;
_return = [];

_statsMin = life_weapons_statsExtremes select 0;
_statsMax = life_weapons_statsExtremes select 1;

_stats = [
	[_itemCfg],
	STATS_WEAPONS,
	_statsMin
] call bis_fnc_configExtremes;
_stats = _stats select 1;

_statReloadSpeed = linearConversion [_statsMin select 0,_statsMax select 0,_stats select 0,_barMax,_barMin];
_statDispersion = linearConversion [_statsMin select 1,_statsMax select 1,_stats select 1,_barMax,_barMin];
_statMaxRange = linearConversion [_statsMin select 2,_statsMax select 2,_stats select 2,_barMin,_barMax];
_statHit = linearConversion [_statsMin select 3,_statsMax select 3,_stats select 3,_barMin,_barMax];
_statMass = linearConversion [_statsMin select 4,_statsMax select 4,_stats select 4,_barMin,_barMax];
_statInitSpeed = linearConversion [_statsMin select 5,_statsMax select 5,_stats select 5,_barMin,_barMax];


if (getnumber (_itemCfg >> "type") == 4) then {
	_return = [
		[_statMaxRange,localize "str_a3_rscdisplayarsenal_stat_range"],
		[_statHit,localize "str_a3_rscdisplayarsenal_stat_impact"],
		[_statMass,localize "str_a3_rscdisplayarsenal_stat_weight"],
		[],
		[]
	];
} else {
	_statHit = sqrt(_statHit^2 * _statInitSpeed); //--- Make impact influenced by muzzle speed
	_return = [
		[_statReloadSpeed,localize "str_a3_rscdisplayarsenal_stat_rof"],
		[_statDispersion,localize "str_a3_rscdisplayarsenal_stat_dispersion"],
		[_statMaxRange,localize "str_a3_rscdisplayarsenal_stat_range"],
		[_statHit,localize "str_a3_rscdisplayarsenal_stat_impact"],
		[_statMass,localize "str_a3_rscdisplayarsenal_stat_weight"]
	];
};

_return;