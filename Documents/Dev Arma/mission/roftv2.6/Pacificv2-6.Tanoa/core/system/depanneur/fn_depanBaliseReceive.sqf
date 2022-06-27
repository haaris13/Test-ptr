/*
	File: fn_depanBaliseReceive.sqf

	Autor: Iron
	Date: 12 Mar 2020 00:10:54
	Version: 0.1
*/
_varBalise = [_this, 0, "", [""]] call BIS_fnc_param;
_posBalise = [_this,1, [], [[]]] call BIS_fnc_param;
_classVeh = [_this,2, "", [""]] call BIS_fnc_param;
_uidTake = [_this,3, "", [""]] call BIS_fnc_param;

//[] call life_fnc_depanClear;

_pos = [_posBalise] call life_fnc_getNearLocation;

_mrk = createMarkerLocal [_varBalise, _posBalise];
_mrk setMarkerShapeLocal "ICON";
_mrk setMarkerTypeLocal "mil_warning";
_mrk setMarkerColorLocal "ColorOrange";
_mrk setMarkerTextLocal " Balise Dépanneur";
_mrk setMarkerSizeLocal [0.8, 0.8];

life_depan_balises pushBack [_varBalise, _posBalise, _classVeh, _uidTake];

["BaliseDepann", [format["Une Balise de détresse à été activé, position: %1", _pos]]] call BIS_fnc_showNotification;