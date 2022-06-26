#include "..\..\script_macros.hpp"
/*
	File: fn_adminMarkers.sqf
	Sourced from Lystics Player Markers Loop
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};
life_markers = !life_markers;
if(life_markers) then {

	player setVariable ["life_markers",true,true];

	[format ["%1 Active Markers",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",RSERV];

	PlayerMarkers = [];
	PlayerMarkers_Dead = [];
	FinishedLoop = false;
	["Accepted", localize "STR_ANOTF_MEnabled"] spawn life_fnc_showPredefinedNotification;

	Adm_markers = [];
	Adm_markersDead = [];

	{
		_unit = _x;

		if (alive _x && isplayer _x) then {

			_mrk = format["mrk_adm_%1", getPlayerUID _unit];

			_pSee = createMarkerLocal [_mrk, getPos _unit];
			_pSee setMarkerTypeLocal "mil_triangle";
			_pSee setMarkerPosLocal getPos _unit;
			_pSee setMarkerSizeLocal [1,1];
			_pSee setMarkerTextLocal format['%1', _unit getVariable["realname",name _unit]];

			_color = switch (side _unit) do { 
				case civilian : {"ColorCivilian";}; 
				case west : {"ColorBLUFOR";}; 
				case independent : {"ColorIndependent";};
			};

			_pSee setMarkerColorLocal _color;

			Adm_markers pushBack [_unit, _pSee];
		};
	} forEach allPlayers;

	{
		_unit = _x;

		_name = _x getVariable "name";
		_down = _x getVariable ["Revive",false];
		if(!isNil "_name" && !_down) then {
			PlayerMarkers_Dead pushBack str(_x);

			_marker = createMarkerLocal [format["%1_dead_marker_admin",str _x],visiblePosition _x];
			_marker setMarkerColorLocal "ColorRed";
			_marker setMarkerTypeLocal "loc_Hospital";
			_marker setMarkerTextLocal format["%1",(_x getVariable["name","Unknown Player"])];
			Adm_markersDead pushBack [_unit, _marker];
		};
	} forEach allDeadMen;

	_timeUpdate = time;

	while {life_markers} do {

		if ((time - _timeUpdate) > 20) then {
			_timeUpdate = time;

			{
				_unit = _x;

				if (alive _x && isplayer _x) then {

					_mrk = format["mrk_adm_%1", getPlayerUID _unit];

					if (!([_mrk, _unit] in Adm_markers)) then {
						_pSee = createMarkerLocal [_mrk, getPos _unit];
						_pSee setMarkerTypeLocal "mil_triangle";
						_pSee setMarkerPosLocal getPos _unit;
						_pSee setMarkerSizeLocal [1,1];
						_pSee setMarkerTextLocal format['%1', _unit getVariable["realname",name _unit]];

						_color = switch (side _unit) do { 
							case civilian : {"ColorCivilian";}; 
							case west : {"ColorBLUFOR";}; 
							case independent : {"ColorIndependent";};
						};

						_pSee setMarkerColorLocal _color;

						Adm_markers pushBack [_unit, _pSee];
					};
				};
			} forEach allPlayers;

			{
				deleteMarkerLocal (_x select 1);
			} forEach Adm_markersDead;

			Adm_markersDead = [];

			{
				_unit = _x;

				_name = _x getVariable "name";
				_down = _x getVariable ["Revive",false];
				if(!isNil "_name" && !_down) then {
					PlayerMarkers_Dead pushBack str(_x);

					_marker = createMarkerLocal [format["%1_dead_marker_admin",str _x],visiblePosition _x];
					_marker setMarkerColorLocal "ColorRed";
					_marker setMarkerTypeLocal "loc_Hospital";
					_marker setMarkerTextLocal format["%1",(_x getVariable["name","Unknown Player"])];
					Adm_markersDead pushBack [_unit, _marker];
				};
			} forEach allDeadMen;

			_cpMarkers =+ Adm_markers;

			{
				_index = _foreachIndex;
				_un = _x select 0;
				_mrk = _x select 1;

				if (isNull _un) then {
					deleteMarkerLocal _mrk;
					Adm_markers = Adm_markers - [_x];
				};
			} forEach _cpMarkers;
		};

		{
			_index = _foreachIndex;
			_un = _x select 0;
			_mrk = _x select 1;

			if !(isNull _un) then {
				_mrk setMarkerPosLocal (position _un);
			};
		} forEach Adm_markers;

		sleep 0.2;
	};

	{
		deleteMarkerLocal (_x select 1);
	} forEach Adm_markers;

	{
		deleteMarkerLocal (_x select 1);
	} forEach Adm_markersDead;

	Adm_markers = [];
	Adm_markersDead = [];

	sleep 0.2;
	
	FinishedLoop = true;

} else {
	if(isNil "FinishedLoop") exitWith {};
	["Accepted", localize "STR_ANOTF_MDisabled"] spawn life_fnc_showPredefinedNotification;
	waitUntil{FinishedLoop};

	player setVariable ["life_markers", nil, true];

	[format ["%1 Désactive Markers",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",RSERV];
};
