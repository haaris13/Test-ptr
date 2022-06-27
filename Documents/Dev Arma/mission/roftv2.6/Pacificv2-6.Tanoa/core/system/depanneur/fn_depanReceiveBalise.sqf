/*
	File: fn_depanReceiveBalise.sqf

	Autor: IronBlade
*/
_player = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_vehicle = [_this,1,objNull,[objNull]] call BIS_fnc_param;

_pos = [position _vehicle] call life_fnc_getNearLocation;

["BaliseDepann",[format["Une Balise de détresse à été activé, position: %1", _pos]]] call BIS_fnc_showNotification;

_markDepann = createMarkerLocal [format["depan_mark_%1_%2", str(_player), floor(random 50000)], position _vehicle];
_markDepann setMarkerShapeLocal "ICON";
_markDepann setMarkerTypeLocal "mil_warning";
_markDepann setMarkerColorLocal "ColorOrange";
_markDepann setMarkerTextLocal format[" Balise Dépanneur "];

uiSleep (60 * 2);

deleteMarkerLocal _markDepann;