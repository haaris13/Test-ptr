/*
	File: fn_hasMask.sqf

	Autor: Iron
*/
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, 0, [0]] call BIS_fnc_param;

if (isNull _unit) exitWith {};

_masks = [
		"G_RegulatorMask_F", 
		"G_AirPurifyingRespirator_02_black_F", 
		"G_AirPurifyingRespirator_02_olive_F", 
		"G_AirPurifyingRespirator_02_sand_F", 
		"G_AirPurifyingRespirator_01_F"
	];

if (_type == 0) then {
	_masks = [
		"G_RegulatorMask_F", 
		"G_AirPurifyingRespirator_02_black_F", 
		"G_AirPurifyingRespirator_02_olive_F", 
		"G_AirPurifyingRespirator_02_sand_F", 
		"G_AirPurifyingRespirator_01_F"
	];
};

if (_type == 1) then {
	_masks = [
		"G_RegulatorMask_F", 
		"G_AirPurifyingRespirator_02_black_F", 
		"G_AirPurifyingRespirator_02_olive_F", 
		"G_AirPurifyingRespirator_02_sand_F", 
		"G_AirPurifyingRespirator_01_F", 
		"G_Respirator_white_F",
		"G_Respirator_yellow_F",
		"G_Respirator_blue_F"
	];
};

((goggles _unit) in _masks);