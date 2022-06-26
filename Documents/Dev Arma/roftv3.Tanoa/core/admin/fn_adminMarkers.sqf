#include "..\..\script_macros.hpp"
/*
	File: fn_adminMarkers.sqf
	Sourced from Lystics Player Markers Loop
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
life_markers = !life_markers;
if(life_markers) then {

	player setVariable ["life_markers",true,true];

	[format ["%1 Active Markers",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",RSERV];

	PlayerMarkers = [];
	PlayerMarkers_Dead = [];
	FinishedLoop = false;
	hint localize "STR_ANOTF_MEnabled";
	while{life_markers} do {
		{
			deleteMarkerLocal str _x;
		} forEach PlayerMarkers;

		{
			deleteMarkerLocal format["%1_dead_marker_admin",_x];
		} forEach PlayerMarkers_Dead;

		PlayerMarkers_Dead = [];

		PlayerMarkers = [];
		{
			if(alive _x && isplayer _x && side _x == west && playerSide != west) then {
				deleteMarkerLocal str _x;
				_pSee = createMarkerLocal [str _x,getPos _x];
				_pSee setMarkerTypeLocal "mil_triangle";
				_pSee setMarkerPosLocal getPos _x;
				_pSee setMarkerSizeLocal [1,1];
				_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
				_color = if (uniform _x in ["U_I_Protagonist_VR","U_B_Protagonist_VR","U_O_Protagonist_VR"]) then {"colorOPFOR"} else {"ColorBLUFOR"};
				_pSee setMarkerColorLocal _color;
				PlayerMarkers = PlayerMarkers + [_x];
			};
			if(alive _x && isplayer _x && side _x == independent) then {
				deleteMarkerLocal str _x;
				_pSee = createMarkerLocal [str _x,getPos _x];
				_pSee setMarkerTypeLocal "mil_triangle";
				_pSee setMarkerPosLocal getPos _x;
				_pSee setMarkerSizeLocal [1,1];
				_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
				_color = if (uniform _x in ["U_I_Protagonist_VR","U_B_Protagonist_VR","U_O_Protagonist_VR"]) then {"colorOPFOR"} else {"ColorIndependent"};
				_pSee setMarkerColorLocal _color;
				PlayerMarkers = PlayerMarkers + [_x];
			};
			if(alive _x && isplayer _x && side _x == civilian) then {
				if(!(playerSide == civilian && _x in (units (group player)))) then {
					deleteMarkerLocal str _x;
					_pSee = createMarkerLocal [str _x,getPos _x];
					_pSee setMarkerTypeLocal "mil_triangle";
					_pSee setMarkerPosLocal getPos _x;
					_pSee setMarkerSizeLocal [1,1];
					_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
					_color = if (uniform _x in ["U_I_Protagonist_VR","U_B_Protagonist_VR","U_O_Protagonist_VR"]) then {"colorOPFOR"} else {"ColorCivilian"};
					_pSee setMarkerColorLocal _color;
					PlayerMarkers = PlayerMarkers + [_x];
				};
			};
	} forEach allUnits;

	{
		_name = _x getVariable "name";
		_down = _x getVariable ["Revive",false];
		if(!isNil "_name" && !_down) then {
			PlayerMarkers_Dead pushBack str(_x);

			_marker = createMarkerLocal [format["%1_dead_marker_admin",str _x],visiblePosition _x];
			_marker setMarkerColorLocal "ColorRed";
			_marker setMarkerTypeLocal "loc_Hospital";
			_marker setMarkerTextLocal format["%1",(_x getVariable["name","Unknown Player"])];
		};
	} foreach allDeadMen;

	sleep 0.2;
};

FinishedLoop = true;

} else {
	if(isNil "FinishedLoop") exitWith {};
	hint localize "STR_ANOTF_MDisabled";
	waitUntil{FinishedLoop};
	
	{
		deleteMarkerLocal str _x;
	} forEach PlayerMarkers;

	{
		deleteMarkerLocal format["%1_dead_marker_admin",_x];
	} forEach PlayerMarkers_Dead;

	player setVariable ["life_markers",false,true];

	[format ["%1 Désactive Markers",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",RSERV];
};
