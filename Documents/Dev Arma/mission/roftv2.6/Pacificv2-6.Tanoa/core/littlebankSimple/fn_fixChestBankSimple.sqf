/*
	File: fn_fixChestBankSimple.sqf
	Autor: IronBlade
*/
_chest = _this select 0;

if (isNull _chest) exitWith {};

if (playerSide != west) exitWith {};

if (!(_chest getVariable ["rob", false])) exitWith {["Error", "Le Coffre est déja fermé"] spawn life_fnc_showPredefinedNotification;};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player, "AinvPknlMstpSnonWnonDnon_medic_1", true] remoteExecCall ["life_fnc_animSync", RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

_chest setVariable ["rob", false, true];

_items = _chest getVariable ["rob_items", []];

_text = format ["Le montant total du vol est de %1 Lingot D'Or", count _items];

[_text] remoteExecCall ["life_fnc_dynamicText", west];

_chest setVariable ["rob_items", nil, true];
_chest setVariable ["on_open", nil, true];
_chest setVariable ["rob_money", nil, true];
_chest setVariable ["owner", nil, true];

["Accepted", "Coffre Fermé !"] spawn life_fnc_showPredefinedNotification;