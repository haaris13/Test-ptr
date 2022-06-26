/*
	File: fn_fixChestBank.sqf


	Autor: IronBlade
*/
_chest = cursorTarget;

if (isNull _chest) exitWith {};

if (playerSide != west) exitWith {};

if (!(_chest getVariable ["rob",false])) exitWith {hint "Le Coffre est déja fermé";};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

_chest setVariable ["rob", false, true];

_items = _chest getVariable ["rob_items", []];

_text = format ["Le montant total du vol est de %1 Lingot D'Or", count _items];

[_text] remoteExecCall ["life_fnc_dynamicText",west];

hint "Coffre Fermé !";