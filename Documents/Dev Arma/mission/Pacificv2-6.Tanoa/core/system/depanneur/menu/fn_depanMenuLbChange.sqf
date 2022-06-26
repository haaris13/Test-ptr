/*
	File: fn_depanMenuLbChange.sqf

	Autor: Iron
	Date: 12 Mar 2020 20:06:59
	Version: 0.1
*/
disableSerialization;
private["_control","_selection","_spCfg","_sp"];
_control = [_this,0,controlNull,[controlNull]] call BIS_fnc_param;
_selection = [_this,1,0,[0]] call BIS_fnc_param;

_display = (findDisplay 24500);
_ctrlInfo = (_display displayCtrl 24503);
_map = (_display displayCtrl 24506);

life_depan_bal_selected = (life_depan_balises_cp select _selection); //First option is set by default

_var = life_depan_bal_selected select 0;
_pos = life_depan_bal_selected select 1;
_class = life_depan_bal_selected select 2;
_uidTake = life_depan_bal_selected select 3;

[_map, 1, 0.1, _pos] call life_fnc_setMapPosition;

_name = getText(configfile >> "CfgVehicles" >> _class >> "displayName");

_pos = [_pos] call life_fnc_getNearLocation;


_ctrlInfo ctrlSetStructuredText parseText format [
	"Balise: " + "%1<br/>" +
	"Position: %2",
	_name,
	_pos
];

if (_uidTake == (getPlayerUID player)) then {
	ctrlEnable [24504, false];
} else {
	ctrlEnable [24504, true];
};