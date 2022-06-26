#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
	    
	Description: 

*/

private ["_pos","_name","_var"];
_name = [_this,0,"",[""]] call BIS_fnc_param;
_var = [_this,1,"",[""]] call BIS_fnc_param;
_pos = [_this,2,[],[[]]] call BIS_fnc_param;

_newHideoutMarker = createMarkerLocal [_var, _pos];
_newHideoutMarker setMarkerShapeLocal "ICON";
_newHideoutMarker setMarkerTypeLocal "KIA";
_newHideoutMarker setMarkerColorLocal "ColorBlack";
_newHideoutMarker setMarkerTextLocal format["%1",_name];