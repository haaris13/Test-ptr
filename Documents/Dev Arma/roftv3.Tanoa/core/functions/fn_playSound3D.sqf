/*
	File: fn_playSound3D.sqf

	Autor:IronBlade
*/
private["_source"];
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;
if(isNull _source) exitWith {};
_source say3D _sound;