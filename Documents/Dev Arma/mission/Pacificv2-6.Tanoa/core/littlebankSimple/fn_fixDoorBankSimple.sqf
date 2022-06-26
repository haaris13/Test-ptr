#include "..\..\script_macros.hpp"
/*
	File: fn_fixDoorBankSimple.sqf
	Autor: IronBlade
*/

_door1 = _this select 0;

if (isNull _door1) exitWith {};

if (playerSide != west) exitWith {};

_bankNear = ([] call life_fnc_bankSimpleNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

_bankConfig = (_bankNear select 0);
_build = (_bankNear select 1);

_curCfg = (missionConfigFile >> "CfgLittleBankSimple" >> "Banks" >> _bankConfig);

_chestArray = getArray(_curCfg >> "chest");

_classChest = (_chestArray select 0);
_posChest = (_chestArray select 1);

_chest = nearestObjects [_posChest, [_classChest], 4] select 0;

if (_chest getVariable ["rob", false]) exitWith {
	["Error", "Le Coffre n'est pas fermé."] spawn life_fnc_showPredefinedNotification;
};

_doors = getArray(_curCfg >> "doors");

_door1Cfg = (_doors select 0);
_classDoor1 = (_door1Cfg select 0);
_posDoor1 = (_door1Cfg select 1);

_door2Cfg = (_doors select 1);
_classDoor2 = (_door2Cfg select 0);
_posDoor2 = (_door2Cfg select 1);

_door2 = nearestObjects [_posDoor2, [_classDoor2], 3] select 0;

_curCfgDoor1 = (missionConfigFile >> "CfgLittleBankSimple" >> "Config" >> "Door" >> _classDoor1);

_c4Array = getArray(_curCfgDoor1 >> "Explosive" >> "objs");

if (_build getVariable ["chargeplaced_vault", false]) exitWith {

	if (ITEM_VALUE("defusekit") < 1 ) exitWith {
		["Error", "Il vous faut un kit de désamorçage !"] spawn life_fnc_showPredefinedNotification;
	};

	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 2;

	player playActionNow "stop";

	_build setVariable ["chargeplaced_vault", nil, true];

	["La charge a été Désamorcé !"] remoteExecCall ["life_fnc_dynamicText", west];

	{
		_class = _x select 0;
		_pos = _x select 1;

		_c4s = nearestObjects [_pos, [_class], 4];

		{
			[_x] spawn life_fnc_deleteVehicle;
		} forEach _c4s;
	} forEach _c4Array;

	deleteMarker format["bank_simple_mrk_alert_%1", _bankConfig];
	deleteMarker format["bank_simple_mrk_zone_%1", _bankConfig];
};

if (!(_build getVariable ["open_vault", false])) exitWith {
	["Error", "La porte est déja fermé."] spawn life_fnc_showPredefinedNotification;
};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

_build setVariable ["chargeplaced_vault", nil, true];
_build setVariable ["open_vault", nil, true];
_build setVariable ["open_vault2", nil, true];

_door1 animate ["Door_1_rot", 0];
_door1 setVariable["bis_disabled_Door_1", 1, true];

_door2 animate ["Door_1_rot", 0];
_door2 setVariable["bis_disabled_Door_1", 1, true];

deleteMarker format["bank_simple_mrk_alert_%1", _bankConfig];
deleteMarker format["bank_simple_mrk_zone_%1", _bankConfig];

["Accepted", "Portes Fermés !"] spawn life_fnc_showPredefinedNotification;