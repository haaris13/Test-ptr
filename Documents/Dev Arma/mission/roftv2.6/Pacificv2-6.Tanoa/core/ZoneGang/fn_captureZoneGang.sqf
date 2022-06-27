#include "..\..\script_macros.hpp"
/*
	File: fn_captureZoneGang.sqf

	Autor: IronBlade
*/

_hideout = (nearestObjects[getPosATL player,["Flag_CSAT_F","Flag_CTRG_F"],25]) select 0;
_group = _hideout getVariable ["gangOwner",grpNull];

// Check:
if ((currentWeapon player) in ["", "Binocular", "Rangefinder"]) exitWith {["Error", "Vous ne pouvez pas sans arme !"] spawn life_fnc_showPredefinedNotification;};
if ((!license_civ_insurge) && (!license_civ_mafia) && playerSide == civilian) exitWith {["Error", "Vous ne faites pas parti d'un gang mafieu ou narcos !"] spawn life_fnc_showPredefinedNotification;};
if (player distance2D _hideout > 3) exitWith {};
if (isNil {grpPlayer getVariable "clan_name"} && playerSide == civilian) exitWith {titleText[localize "STR_GNOTF_CreateGang","PLAIN"];};
if (_group == grpPlayer && playerSide == civilian) exitWith {titleText[localize "STR_GNOTF_Controlled","PLAIN"]};
if (_group == grpNull && playerSide == west) exitWith {titleText["La zone est déja sécurisé","PLAIN"]};
if ((_hideout getVariable ["inCapture",FALSE])) exitWith {["Error", localize "STR_GNOTF_Captured"] spawn life_fnc_showPredefinedNotification;};


// Init:
_cpRate = 0.008;
life_action_inUse = true;
_nb_units_group_near = 0;
_nb_units_other = 0;
_nb_units_other_owner = 0;
_nb_units_group = count units (group player);

// Check 
_units_near = nearestObjects [(visiblePosition player), ["Man"], 200];

{
	_unit = _x;

	if (isPlayer _unit && alive _unit && (vehicle _unit == _unit)) then {
		if (_unit in units (group player)) then {
			_nb_units_group_near = _nb_units_group_near + 1;
		} else {
			if(!isNull _group) then {
				if (_unit in units _group) then {
					_nb_units_other_owner = _nb_units_other_owner + 1;
				} else {
					_nb_units_other = _nb_units_other + 1;
				};
			} else {
				_nb_units_other = _nb_units_other + 1;
			};
		};
	};
} forEach _units_near;

// CP Calcul:


if (_nb_units_group == _nb_units_group_near) then {
	_cpRate = _cpRate + 0.002;
};
_bonus = _nb_units_group_near * 0.0006;
_cpRate = _cpRate + _bonus;


// Change _cpRate:
if (playerSide == west) then {
	_cpRate = 0.016;
};

if (["grandeBouche"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0012;
};

if (["captureCopV1"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0005;
};

if (["captureCopV2"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0005;
};

_malus = _nb_units_other_owner * 0.002;
_malus = _malus + (_nb_units_other * 0.0006);

_cpRate = _cpRate - _malus;

if (life_debug == 1) then {
	diag_log "--------------- Capture ---------------";
	diag_log format ["_nb_units_group_near: %1",_nb_units_group_near];
	diag_log format ["_nb_units_other: %1",_nb_units_other];
	diag_log format ["_nb_units_other_owner: %1",_nb_units_other_owner];
	diag_log format ["_nb_units_group: %1",_nb_units_group];
	diag_log format ["_cpRate: %1",_cpRate];
	diag_log "--------------- END ---------------";
};


// Message:
if(!isNull _group) then {
	_gangName = _group getVariable ["clan_name",""];

	hint parseText format["<t color='#FF0000'><t size='2'>Alert</t></t><br/><t color='#FFD700'><t size='1.5'><br/>Zone déja revendiquée par:</t></t><br/><br/><t color='#FF0000'>%1</t>",_gangName];
	
	_text = "";

	if (playerSide == civilian) then {
		_text = format ["<t color='#ff0000' size = '.8'>Attention, Le Gang %1 est en train de récupérer la zone de %2 !</t>", (group player) getVariable ["clan_name",""], _hideout getVariable "zone_name"];
	} else {
		_text = format ["<t color='#ff0000' size = '.8'>Attention, La Gendarmerie est en train de récupérer la zone de %1 !</t>", _hideout getVariable "zone_name"];
	};
	
	[_text] remoteExecCall ["life_fnc_dynamicText",_group];
} else {

	_text = format ["<t color='#ff0000' size = '.5'>Attention, Le Gang %1 est en train de récupérer la zone de %2 !</t>", (group player) getVariable ["clan_name",""], _hideout getVariable "zone_name"];

	[_text] remoteExecCall ["life_fnc_dynamicText",west];
};

//Setup the progress bar
disableSerialization;
_title = "Revendication de la zone";

if (playerSide == west) then {
	_title = "Sécurisation de la zone";
};

5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

bad = false;

_hideout setVariable ["inCapture",true,true];

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 1;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cpRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];

	if (_cP >= 0.5 && ((vehicle player) != player)) exitWith {moveOut player; bad = true;};

	if(_cP >= 1 OR !alive player) exitWith {_hideout setVariable ["inCapture",false,true];};
	if(life_istazed) exitWith {_hideout setVariable ["inCapture",false,true];}; //Tazed
	if(life_isknocked) exitWith {_hideout setVariable ["inCapture",false,true];}; //Knocked
	if(life_interrupted) exitWith {_hideout setVariable ["inCapture",false,true];};
	if(life_earthquake) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

life_action_inUse = false;

if (player distance2D _hideout > 4) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if (life_earthquake) exitWith {life_action_inUse = false; _hideout setVariable ["inCapture",false,true];};
if(!alive player OR life_istazed OR life_isknocked OR bad) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if((player getVariable["restrained",false])) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_GNOTF_CaptureCancel","PLAIN"]; life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};

["Action","Capture",false] spawn life_fnc_showHelp;

if (playerSide == west) then {
	_title = "Zone sécurisée";
} else {
	_title = "Zone revendiquée";
};

titleText[_title,"PLAIN"];

_marker = _hideout getVariable ["markerName",""];

if (playerSide == west) then {
	[[0,1],"STR_GNOTF_CopCaptureSuccess",true,[_hideout getVariable "zone_name"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	
	_hideout setVariable ["gangOwner",grpNull,true];

	_marker setMarkerColor "ColorWEST";
	_marker setMarkerText "Zone Protégé";
	_marker setMarkerAlpha 0;

} else {
	[[0,1],"STR_GNOTF_CaptureSuccess",true,[name player,(group player) getVariable "clan_name", _hideout getVariable "zone_name"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	_hideout setVariable ["gangOwner",(group player),true];	
	_title = format ["Zone revendiquée par %1",(group player) getVariable "clan_name"];	

	_marker setMarkerColor "ColorEAST";
	_marker setMarkerText _title;
};

_hideout setVariable["inCapture",false,true];