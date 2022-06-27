#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine, IronBlade

	Description:
	Blah blah.
*/


private["_group","_hideout","_cpRate","_cP","_progressBar","_title","_titleText","_ui","_flagTexture"];
_hideout = (nearestObjects[getPosATL player,["Flag_CSAT_F","Flag_CTRG_F"],25]) select 0;
_group = _hideout getVariable ["gangOwner",grpNull];

if (currentWeapon player == "") exitWith { ["Error", "Vous ne pouvez pas sans arme !"] spawn life_fnc_showPredefinedNotification; };
if (currentWeapon player == "Binocular") exitWith { ["Error", "Vous ne pouvez pas sans arme !"] spawn life_fnc_showPredefinedNotification; };
if (currentWeapon player == "Rangefinder") exitWith { ["Error", "Vous ne pouvez pas sans arme !"] spawn life_fnc_showPredefinedNotification; };

if ((!license_civ_insurge) && (!license_civ_mafia) && playerSide == civilian) exitWith {["Error", "Vous ne faites pas parti d'un gang mafieu ou ##### !"] spawn life_fnc_showPredefinedNotification;};
if (player distance2D _hideout > 3) exitWith {};

if (playerSide == civilian) then {
	if(isNil {grpPlayer getVariable "gang_name"}) exitWith {["Error", localize "STR_GNOTF_CreateGang"] spawn life_fnc_showPredefinedNotification;};
	if(_group == grpPlayer) exitWith {["Error", localize "STR_GNOTF_Controlled"] spawn life_fnc_showPredefinedNotification;};
} else {
	if(_group == grpNull) exitWith {["Error", "La zone est déja sécurisé"] spawn life_fnc_showPredefinedNotification;};
};

if((_hideout getVariable ["inCapture",FALSE])) exitWith {["Error", localize "STR_GNOTF_Captured"] spawn life_fnc_showPredefinedNotification;};

_cpRate = 0;

if(!isNull _group) then {
	_gangName = _group getVariable ["gang_name",""];

	["Error", parseText format["<t color='#FF0000'><t size='2'>Alert</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +"Zone déja revendiquée par:"+ "</t></t><br/><br/><t color='#FF0000'>%1</t>",_gangName]] spawn life_fnc_showPredefinedNotification;
	_text = "";

	if (playerSide == civilian) then {
		_text = format ["<t color='#ff0000' size = '.8'>Attention, Le Gang %1 est en train de récupérer la zone de %2 !</t>", (group player) getVariable ["gang_name",""], _hideout getVariable "zone_name"];
	} else {
		_text = format ["<t color='#ff0000' size = '.8'>Attention, La Gendarmerie est en train de récupérer la zone de %1 !</t>", _hideout getVariable "zone_name"];
	};
	
	[_text] remoteExecCall ["life_fnc_dynamicText",_group];

	_cpRate = 0.0035;
} else {

	_text = format ["<t color='#ff0000' size = '.8'>Attention, Le Gang %1 est en train de récupérer la zone de %2 !</t>", (group player) getVariable ["gang_name",""], _hideout getVariable "zone_name"];

	[_text] remoteExecCall ["life_fnc_dynamicText",west];

	_cpRate = 0.0045;
};

if (playerSide == west) then {
	_cpRate = 0.0055;
};

if (typeOf _hideout == "Flag_CTRG_F") then {
	_cpRate = _cpRate - 0.001;
};

if (["grandeBouche"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0015;
};

if (["captureCopV1"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0010;
};

if (["captureCopV2"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.0010;
};

life_action_inUse = true;

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

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.26;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cpRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	_hideout setVariable ["inCapture",true,true];

	if (_cP >= 0.5 && ((vehicle player) != player)) exitWith {moveOut player; bad = true;};

	if(_cP >= 1 OR !alive player) exitWith {_hideout setVariable ["inCapture",false,true];};
	if(life_istazed) exitWith {_hideout setVariable ["inCapture",false,true];}; //Tazed
	if(life_isknocked) exitWith {_hideout setVariable ["inCapture",false,true];}; //Knocked
	if(life_interrupted) exitWith {_hideout setVariable ["inCapture",false,true];};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if (player distance2D _hideout > 4) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};

if(!alive player OR life_istazed OR life_isknocked OR bad) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if((player getVariable["restrained",false])) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if(life_interrupted) exitWith {life_interrupted = false;
	["Info", localize "STR_GNOTF_CaptureCancel"] spawn life_fnc_showPredefinedNotification;
	life_action_inUse = false;
	_hideout setVariable ["inCapture",false,true];
};
life_action_inUse = false;

if (playerSide == west) then {
	_title = "Zone sécurisée";
} else {
	_title = "Zone revendiquée";
};

titleText[_title,"PLAIN"];
_flagTexture = [
		"\A3\Data_F\Flags\Flag_red_CO.paa",
		"\A3\Data_F\Flags\Flag_green_CO.paa",
		"\A3\Data_F\Flags\Flag_white_CO.paa",
		"\A3\Data_F\Flags\flag_fd_red_CO.paa",
		"\A3\Data_F\Flags\flag_fd_green_CO.paa",
		"\A3\Data_F\Flags\flag_fd_blue_CO.paa",
		"\A3\Data_F\Flags\flag_fd_orange_CO.paa"
	] call BIS_fnc_selectRandom;

_marker = _hideout getVariable ["markerName",""];

if (playerSide == west) then {
	_flagTexture = "\A3\Data_F\Flags\Flag_blue_CO.paa";
	[[0,1],"STR_GNOTF_CopCaptureSuccess",true,[_hideout getVariable "zone_name"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	
	_hideout setVariable ["gangOwner",grpNull,true];

	_marker setMarkerColor "ColorWEST";
	_marker setMarkerText "Zone Protégé";
	_marker setMarkerAlpha 0;

} else {
	[[0,1],"STR_GNOTF_CaptureSuccess",true,[name player,(group player) getVariable "gang_name", _hideout getVariable "zone_name"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	_hideout setVariable ["gangOwner",(group player),true];	
	_title = format ["Zone revendiquée par %1",(group player) getVariable "gang_name"];	

	_marker setMarkerColor "ColorEAST";
	_marker setMarkerText _title;
};

_hideout setVariable["inCapture",false,true];

_this select 0 setFlagTexture _flagTexture;