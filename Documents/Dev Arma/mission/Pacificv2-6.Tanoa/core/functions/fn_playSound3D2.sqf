/*
	File: fn_playSound3D2.sqf

	Autor: Iron
	Date: 03 Apr 2020 21:04:27
	Version: 0.1
*/
private["_source", "_sound"];
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;

if(isNull _source) exitWith {};

playSound3D [_sound, _source];