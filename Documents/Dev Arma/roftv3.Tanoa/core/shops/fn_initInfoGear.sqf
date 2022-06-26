/*
	File:fn_initInfoGear.sqf

	Autor:IronBlade
*/
#define STATS_EQUIPMENT\
	["passthrough","armor","maximumLoad","mass"],\
	[false,false,false,false]

_statsEquipment = [
	("isclass _x && getnumber (_x >> 'scope') == 2 && getnumber (_x >> 'itemInfo' >> 'type') in [605,701,801]") configclasses (configfile >> "cfgweapons"),
	STATS_EQUIPMENT
] call bis_fnc_configExtremes;
_statsBackpacks = [
	("isclass _x && getnumber (_x >> 'scope') == 2 && getnumber (_x >> 'isBackpack') == 1") configclasses (configfile >> "cfgvehicles"),
	STATS_EQUIPMENT
] call bis_fnc_configExtremes;

_statsEquipmentMin = _statsEquipment select 0;
_statsEquipmentMax = _statsEquipment select 1;
_statsBackpacksMin = _statsBackpacks select 0;
_statsBackpacksMax = _statsBackpacks select 1;
for "_i" from 2 to 3 do { //--- Ignore backpack armor and passThrough, has no effect
	_statsEquipmentMin set [_i,(_statsEquipmentMin select _i) min (_statsBackpacksMin select _i)];
	_statsEquipmentMax set [_i,(_statsEquipmentMax select _i) max (_statsBackpacksMax select _i)];
};

life_gear_statsExtremes = [_statsEquipmentMin,_statsEquipmentMax];