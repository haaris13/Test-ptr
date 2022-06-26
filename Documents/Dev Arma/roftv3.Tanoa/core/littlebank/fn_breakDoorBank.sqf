#include "..\..\script_macros.hpp"
/*
	File: fn_breakDoorBank.sqf


	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankNear);

if (count _bankNear == 0) exitWith {
	hint "Vous n'étes pas prés d'une banque !";
};

if (ITEM_VALUE("blastingcharge") < 1 ) exitWith {
	hint "Il vous faut une charge !";
};

_build = (_bankNear select 1);
_posDoor1 = (_build modelToWorld (_build selectionPosition "Vault_Interact"));
_distance = (player distance (_build modelToWorld (_build selectionPosition "Vault_Interact")));

if (_distance > 3) exitWith {
	hint "Vous étes trop loins de la porte du coffre de la banque !";
};

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min_littleBank")) && life_debug == 0) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCopsLittleBank",(LIFE_SETTINGS(getNumber,"cops_online_min_littleBank"))];
};

if (_build getVariable ["open_vault",false]) exitWith {
	hint "La porte est déja ouverte";
};

bank_nb_breaker = 0;

{
	if ((_x distance _posDoor1) < 30 && (alive _x) && (_x != player)) then {
		bank_nb_breaker = bank_nb_breaker + 1;
	};

	if ((_x distance _posDoor1) > 100 && (_x distance _posDoor1) <= 1000) then {
	/*	_text = format ["Il y a une signature thermique a plus de 100 métre de la banque, Identité: %1!", name _x]; */
	     _text = format ["Attaque de Bank en cours....", name _x];

		[_text] remoteExecCall ["life_fnc_dynamicText",west];
	};
} forEach (units group player);

_bankConfig = (_bankNear select 0);
_curCfg = (missionConfigFile >> "CfgLittleBank" >> "Banks" >> _bankConfig);
_curCfgBuild = (missionConfigFile >> "CfgLittleBank" >> "Build" >> (typeOf _build));

_textVar = getText(_curCfg >> "displayName");

_text = format["Une charge de dynamite a été placé sur la porte de la banque de %1 !", _textVar];
[_text] remoteExecCall ["life_fnc_dynamicText",west];

// Create Marker:
_markAlert = "bank_marker_alert";
_markZone = "bank_marker_zone";

_bankMarkerAlert = createMarker [_markAlert, _posDoor1];
_bankMarkerAlert setMarkerShape "ICON";
_bankMarkerAlert setMarkerType "mil_warning";
_bankMarkerAlert setMarkerColor "ColorRed";
_bankMarkerAlert setMarkerText format["- Braquage en cours -"];

_bankMarkerZone = createMarker [_markZone, _posDoor1];
_bankMarkerZone setMarkerShape "ELLIPSE";
_bankMarkerZone setMarkerSize [100, 100];
_bankMarkerZone setMarkerColor "ColorRed";
_bankMarkerZone setMarkerAlpha 0.4;

life_bank_players pushBack [getPlayerUID player, name player];
publicVariable "life_bank_players";

["Le Cercle rouge définit la zone autorisé pour la banque ! (100m)"] remoteExecCall ["life_fnc_dynamicText", (group player)];


if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;
player playActionNow "stop";
_build setVariable ["chargeplaced_vault", true, true];

_c4Array = getArray(_curCfgBuild >> "obj1");
_c4ArrayDir = getArray(_curCfgBuild >> "obj1Dir");

life_bank_c4 = [];

{
	_class = _x select 0;
	_pos = _x select 1;

	_c4 = (_class createVehicle (_pos));  

	_c4 attachTo [_build, _pos];
	_c4 setVectorDirAndUp _c4ArrayDir;

	life_bank_c4 pushBack _c4;
} forEach _c4Array;

[false, "blastingcharge",1] call life_fnc_handleInv;

["Vous avez jusqu'au temps imparti pour désarmorcer les charges !"] remoteExecCall ["life_fnc_dynamicText",west];

_handle = [player, _posDoor1, _build] spawn life_fnc_chargeTimerBank;
[player, _posDoor1, _build] remoteExec ["life_fnc_chargeTimerBank",west];

waitUntil {scriptDone _handle};
sleep 0.9;

deleteMarker _markAlert;
deleteMarker _markZone;

{
	deleteVehicle _x;
} forEach life_bank_c4;

if (!(_build getVariable["chargeplaced_vault", false])) exitWith {hint localize "STR_ISTR_Blast_Disarmed"};

_explo = ("R_80mm_HE" createVehicle _posDoor1);
_explo setDamage 1;
uiSleep 1;
deleteVehicle _explo;

_build setVariable ["chargeplaced_vault", false, true];
_build setVariable ["open_vault", true, true];

["La charge a explosé !"] remoteExecCall ["life_fnc_dynamicText",west];

uiSleep 0.1;

//_build spawn life_fnc_openVault;

_build animate ["Vault_Door", 1];