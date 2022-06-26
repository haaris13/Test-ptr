/*
	File: fn_adminStopAction.sqf

	Autor: IronBlade
*/

if(([] call(life_adminlevel)) < 2) exitWith {closeDialog 0;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if ((count life_admin_stopAction) > 0) exitWith {

	_mark1 = life_admin_stopAction select 0;
	_mark2 = life_admin_stopAction select 1;

	deleteMarker _mark1;
	deleteMarker _mark2;

	life_admin_stopAction = [];
	hint format["Désactive Stop Action Zone !"];
	[format ["%1 Désactive Stop Action",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",2];	
};

time_stop = time;

stopActionZone = {
	_pos = [_this select 0, _this select 1, _this select 2];
	onMapSingleClick "";

	if ((time - time_stop) > 10) exitWith {onMapSingleClick ""; openMap [false, false];};

	_units = [];

	{
		if ((_x distance2D _pos) <= 300) then {
			_units pushBack _x;
		};
	} forEach allPlayers;

	_markAlert = "admin_marker_alert";
	_markZone = "admin_marker_zone";

	_adminMarkerAlert = createMarker [_markAlert, _pos];
	_adminMarkerAlert setMarkerShape "ICON";
	_adminMarkerAlert setMarkerType "Select";
	_adminMarkerAlert setMarkerColor "ColorRed";
	_adminMarkerAlert setMarkerText format["  [Admin] Action Stoppé !"];

	_adminMarkerZone = createMarker [_markZone, _pos];
	_adminMarkerZone setMarkerShape "ELLIPSE";
	_adminMarkerZone setMarkerSize [300, 300];
	_adminMarkerZone setMarkerColor "ColorRed";
	_adminMarkerZone setMarkerAlpha 0.4;

	life_admin_stopAction = [_adminMarkerAlert, _adminMarkerZone];

	[_units] spawn {
		_units = _this select 0;

		_text = "<t color='#ff0000'>Attention ! L'action dans la zone ou vous étes vien d'étre Stoppé par un Admin ! Il est maintenant interdit d'effectué une action RP Ici !</t>";

		[_text] remoteExecCall ["life_fnc_dynamicText", _units];

		uiSleep 10;

		[_text] remoteExecCall ["life_fnc_dynamicText", _units];

		uiSleep 15;

		[_text] remoteExecCall ["life_fnc_dynamicText", _units];

		uiSleep 20;

		[_text] remoteExecCall ["life_fnc_dynamicText", _units];

		uiSleep 25;

		[_text] remoteExecCall ["life_fnc_dynamicText", _units];
	};

	openMap [false, false];
	hint format["Action Stoppé! Pour %1 Unités !", (count _units)];
	[format ["%1 Action Stoppé %2",profileName, str(_pos)], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",2];
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call stopActionZone";