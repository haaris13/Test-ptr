/*
	File: fn_nrbcSpawnShower.sqf

	Autor: Iron
	Date: 03 Apr 2020 23:46:56
	Version: 0.1
*/
_van = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_van setVariable ["shower", true, true];

_shower1 = "DeconShower_01_F" createVehicle position _van;   //spawn douche
_shower1 attachTo [_van, [3,-2,-0.4]]; //on attache au van
_shower2 = "DeconShower_01_F" createVehicle position _van;  
_shower2 attachTo [_van, [3,1,-0.4]];

//[_shower1, 1.5, 9] spawn BIN_fnc_deconShowerAnim;
//[_shower2, 1.5, 9] spawn BIN_fnc_deconShowerAnim;