#include "..\..\script_macros.hpp"
/* 
	File: fn_animMenu.sqf
	Autor: Ciaran Langton, IronBlade
	Desc: A script I wrote a long time ago... But in a very close place...
	Please don't copy this script...
*/

_menu = _this select 0;

_anims = [
	["Pompes","AmovPercMstpSnonWnonDnon_exercisePushup",0],
	["Ninja Dance","AmovPercMstpSnonWnonDnon_exerciseKata",0],
	["Knee Bends (Rapide)","AmovPercMstpSnonWnonDnon_exercisekneeBendB",0],
	["Knee Bends (Normal)","AmovPercMstpSnonWnonDnon_exercisekneeBendA",0],
	["Peur","AmovPercMstpSnonWnonDnon_Scared",0],
	["Peur 2","AmovPercMstpSnonWnonDnon_Scared2",0],
	["Pisser","Acts_AidlPercMstpSlowWrflDnon_pissing",0]
];

if (primaryWeapon player != "") then {
	_anims pushBack ["Rambo", "Acts_AidlPercMstpSlowWrflDnon_warmup05",0];
	_anims pushBack ["Beau", "Acts_AidlPercMstpSlowWrflDnon_warmup04",0];
	_anims pushBack ["Arme", "Acts_AidlPercMstpSloWWrflDnon_warmup_5_loop",2];
	_anims pushBack ["Parle", "Acts_AidlPercMstpSloWWrflDnon_warmup_3_loop",2];
};

if (primaryWeapon player == "" && secondaryWeapon player == "" && handgunWeapon player == "") then {
	_anims pushBack ["Je suis la !","HubWave_move2",1];
};

if (life_mode_medic) exitWith {life_mode_medic = false; closeDialog 0;};

disableSerialization;
if(_menu) then {

	//Check to see if they can still do the action.
	if(player getVariable ["restrained",false]) exitWith {closeDialog 0;};
	if(player getVariable ["escorting",false]) exitWith {closeDialog 0;};
	if(player getVariable ["Revive",false]) exitWith {closeDialog 0;};
	if(animationState player == "incapacitated") exitWith {closeDialog 0;};
	if(life_istazed) exitWith {closeDialog 0;};
	if(life_action_inUse) exitWith {closeDialog 0;};	
	if(!alive player) exitWith {closeDialog 0;};
	if(vehicle player != player) exitWith {closeDialog 0; ["Warning", localize "STR_NOTF_Glitch"] spawn life_fnc_showPredefinedNotification;};
	
	//Get the list from the dialog.
	_animListDiag = findDisplay 13750;
	_animList = _animListDiag displayCtrl 13751;
	_id = lbCurSel (_animList);
	if(_id == -1) exitWith {};
	_arr = _anims select _id;

	_type = (_arr select 2);
	_anim = (_arr select 1);

	closeDialog 0;

	if (_type == 0) then {
		player playMoveNow _anim;
	} else {
		if (_type == 1) exitWith {

			[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove _anim;
			player playMoveNow _anim;

			sleep 3;

			player switchMove "stop";
		};

		if (_type == 2) exitWith {

			[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove _anim;
			player playMoveNow _anim;
		};
	};

	sleep 3;
	waitUntil {animationState player != _anim};

	player switchMove "stop";

} else {
	if(dialog) exitWith {}; //Fix dialog
	createDialog "animMenu";

	//Before opening check if they can.
	if(player getVariable ["restrained",false]) exitWith {closeDialog 0;};
	if(player getVariable ["escorting",false]) exitWith {closeDialog 0;};
	if(player getVariable ["Revive",false]) exitWith {closeDialog 0;};
	if(animationState player == "incapacitated") exitWith {closeDialog 0;};
	if(life_istazed) exitWith {closeDialog 0;};	
	if(life_action_inUse) exitWith {closeDialog 0;};
	if(!alive player) exitWith {closeDialog 0;};
	if(vehicle player != player) exitWith {closeDialog 0; ["Warning", localize "STR_NOTF_Glitch"] spawn life_fnc_showPredefinedNotification;};

	player switchMove "stop";
	
	_animListDiag = findDisplay 13750;
	_animList = _animListDiag displayCtrl 13751;
	//Add all the animations into the list.
	{
		_animList lbAdd format["%1",_x select 0];
	} forEach _anims;
};