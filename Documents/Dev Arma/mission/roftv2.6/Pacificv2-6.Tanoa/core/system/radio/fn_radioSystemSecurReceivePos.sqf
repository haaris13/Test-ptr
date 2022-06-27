/*
	File: fn_radioSystemSecurReceivePos.sqf

	Autor: Iron
*/
diag_log "fn_radioSystemSecurReceivePos";

private ["_id", "_freq", "_pos"];
_id = [_this,0,"",[""]] call BIS_fnc_param;
_freq = [_this,1,"",[""]] call BIS_fnc_param;
_pos = [_this,2,[],[[]]] call BIS_fnc_param;

_var = format["radio_secur_%1", _id];

if (count (missionNamespace getVariable [_var, []]) > 0) exitWith {
	missionNamespace setVariable [_var, [_pos, time]];
};

missionNamespace setVariable [_var, [_pos, time]];

_mark = format ["radio_mrk_%1", _id];

_marker = createMarkerLocal [_mark,[(((floor(((_pos select 0))/100))*100)+50),(((floor(((_pos select 1))/100))*100)+50)]];
_marker setMarkerShapeLocal "RECTANGLE";
_marker setMarkerSizeLocal [50,50];
_marker setMarkerBrushLocal "Solid";
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerAlphaLocal 0.8;

_posInfo = [_pos] call life_fnc_getNearLocation;

_txt = format["Nouvelle entrée sur la fréquence sécurisé %1, position: %2.", _freq, _posInfo];

["Warning",  _txt] spawn life_fnc_showPredefinedNotification;

while {true} do {
	uiSleep 1;

	_content = (missionNamespace getVariable [_var, [[0,0,0], 0]]);
	_pos = (_content select 0);
	_time = (_content select 1);

	_marker setMarkerPosLocal [(((floor(((_pos select 0))/100))*100)+50),(((floor(((_pos select 1))/100))*100)+50)];

	if ((time - _time) > 60) exitWith {};
};

deleteMarkerLocal _marker;

_txt = format["Déconnection de la fréquence sécurisé %1.", _freq];

["Warning", _txt] spawn life_fnc_showPredefinedNotification;

missionNamespace setVariable [_var, nil];