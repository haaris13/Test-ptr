/*
	File: fn_depanRepairMap.sqf

	Autor: Iron
*/

if (!((backpack player) in ["sac_depan"])) exitWith {};

_objects = nearestTerrainObjects [player, [], 10];
_object = ObjNull;

{
	if (damage _x == 1) exitWith {
		_object = _x;
	};
} forEach _objects;

if (isNull _object) exitWith {
	["Error", "Aucun element à réparer."] spawn life_fnc_showPredefinedNotification;
};

closeDialog 0;

//Why the fuck is there 2? Do I even need this?
if(life_action_inUse) exitWith {};
life_action_inUse = true;
sleep 0.1;
life_interrupted = false;


[player, "disqueuse_short", 25] spawn life_fnc_playSound3DNear;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_upp = "Réparer...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.0105;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];

	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(dialog) exitWith {};
};

5 cutText ["","PLAIN"];
life_action_inUse = false;

player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false;};
if(player != vehicle player) exitWith {life_action_inUse = false;};
//You moved or died or something
if(life_interrupted) exitWith {
	life_interrupted = false; 
	player playActionNow "stop"; 
	titleText["Réparation interrompu ","PLAIN"]; 
	life_action_inUse = false;
};

if ((getDammage _object) == 0) exitWith {
	["Error", "Déja réparé !"] spawn life_fnc_showPredefinedNotification;
};

["repair_build"] call life_fnc_addXP;

life_bank_can_depose = life_bank_can_depose + 200;
life_cash = life_cash + 200;

_object setDamage 0;
["Accepted", "Réparation réussi !"] spawn life_fnc_showPredefinedNotification;