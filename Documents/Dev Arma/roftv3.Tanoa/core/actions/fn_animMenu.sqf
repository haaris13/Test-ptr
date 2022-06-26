#include "..\..\script_macros.hpp"
/* 
	File: fn_animMenu.sqf
	Autor: Ciaran Langton, IronBlade, Casimodo33
	Desc: A script I wrote a long time ago... But in a very close place...
	Please don't copy this script...
*/

_menu = _this select 0;

_anims = [
	["-- ANNULER --","",9,0],	
	["Pisser","Acts_AidlPercMstpSlowWrflDnon_pissing",0,0],	
	["Indice 1","AmovPercMstpSnonWnonDnon_Scared",2,0],	
	["Indice 2","Acts_AidlPercMstpSnonWnonDnon_warmup_2_loop",2,0],	
	["Indice 3","Acts_trailer_campScientist",2,0],	
	["Indice 4","Acts_trailer_nodScientist",2,0],	
	["Discution 1","Acts_B_out2_briefing",2,0],	
	["Discution 2 (40s)","Acts_Briefing_Intro3_Major_1",2,0],	
	["Discution 3 (40s)","Acts_Briefing_Intro3_Physicist_1",2,0],	
	["Discution 4 (40s)","Acts_Grieving",2,0],	
	["Malaise","AcinPercMstpSnonWnonDnon_agony",2,0],	
	["Bléssé bras","Acts_CivilInjuredArms_1",2,0],	
	["Bléssé torce","Acts_CivilInjuredChest_1",2,0],	
	["Bléssé torce2","Acts_CivilInjuredGeneral_1",2,0],	
	["Bléssé tête","Acts_CivilInjuredHead_1",2,0],	
	["Bléssé jambe","Acts_CivilInjuredLegs_1",2,0],	
	["Bléssé genoux","Acts_Injured_Driver_Loop",2,0],	
	["Bléssé ventre","Acts_InjuredAngryRifle01",2,0],	
	["Instructeur","Acts_A_M01_briefing",2,0],	
	["Marre","Acts_CivilShocked_1",2,0],	
	["Un avion","Acts_Commenting_On_Fight_action",2,0],	
	["Un avion 2","Acts_Hilltop_Calibration_Heli_Out",2,0],	
	["Dance 1","Acts_Dance_01",2,0],	
	["Dance 2","Acts_Dance_02",2,0],	
	["Aie","Acts_EpicSplit",2,0],	
	["Faire le mort","Acts_LyingWounded_loop",2,0],	
	["Faire le mort côté","Acts_Stunned_Unconscious_end",2,0],	
	["Faire le mort menoté","Acts_ExecutionVictim_KillTerminal",2,0],	
	["Penser","Acts_Gallery_Visitor_01",2,0],	
	["Circuler","Acts_JetsMarshallingEnginesOn_loop",2,0],	
	["Doucement","Acts_JetsMarshallingSlow_loop",2,0],	
	["Je me rend","Acts_JetsMarshallingStop_loop",2,0],	
	["Recule","acts_millerChopper_loop",2,0],	
	["Recule 2","Acts_NavigatingChopper_Loop",2,0],	
	["Pirater","acts_millerDisarming_deskCrouch_in",2,0],	
	["Ivre mort","Acts_Waking_Up_Player",2,0],	
	["chaise ivre mort","Acts_Onchair_Dead",2,0],	
	["Trop fort","Acts_Undead_Coffin",2,0],	
	["Taper rapport","Acts_Accessing_Computer_Loop",2,0]
];

if (primaryWeapon player != "") then {
	_anims pushBack ["Rambo", "Acts_AidlPercMstpSlowWrflDnon_warmup05",0];
	_anims pushBack ["Beau", "Acts_AidlPercMstpSlowWrflDnon_warmup04",0];
	_anims pushBack ["Arme", "Acts_AidlPercMstpSloWWrflDnon_warmup_5_loop",2];
	_anims pushBack ["Parle", "Acts_AidlPercMstpSloWWrflDnon_warmup_3_loop",2];
};

if (primaryWeapon player == "" && secondaryWeapon player == "" && handgunWeapon player == "") then {
	//ne fonction ne pas => _anims pushBack ["Je suis la !","HubWave_move2",1,3]; 
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
	if(vehicle player != player) exitWith {closeDialog 0; hint "Pas de Glitch !";};
	
	//Get the list from the dialog.
	_animListDiag = findDisplay 13750;
	_animList = _animListDiag displayCtrl 13751;
	_id = lbCurSel (_animList);
	if(_id == -1) exitWith {};
	_arr = _anims select _id;

	_tps = (_arr select 3);
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
			sleep _tps;
			player switchMove "stop";
		};

		if (_type == 2) exitWith {
			[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove _anim;
			player playMoveNow _anim;
		};

		if (_type == 9) exitWith {
			player switchMove "stop";
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
	if(vehicle player != player) exitWith {closeDialog 0; hint "Pas de Glitch !";};

	player switchMove "stop";
	
	_animListDiag = findDisplay 13750;
	_animList = _animListDiag displayCtrl 13751;
	//Add all the animations into the list.
	{
		_animList lbAdd format["%1",_x select 0];
	} forEach _anims;
};