/*
	File: fn_depanReceiveBalise.sqf

	Autor: IronBlade
*/
_player = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;

["BaliseDepann",[format["Une Balise de détresse à été activé par %1",(name _player)]]] call BIS_fnc_showNotification;

_markDepann = createMarkerLocal [format["depan_mark_%1_%2", str(_player), floor(random 50000)], position _vehicle];
_markDepann setMarkerShapeLocal "ICON";
_markDepann setMarkerTypeLocal "mil_warning";
_markDepann setMarkerColorLocal "ColorOrange";
_markDepann setMarkerTextLocal format[" Balise Dépanneur "];

uiSleep (60 * 2);

deleteMarkerLocal _markDepann;