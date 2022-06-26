#include "..\..\script_macros.hpp"
/*

Fix Bank:

this addAction["Fermer la banque",life_fnc_fixBank,"",0,false,false,"",' 
  !isNull cursorTarget && playerSide == west && player distance box_bank < 2 '];


*/

if (coffre_bank getVariable ["chargeplaced",false]) then {
	hint "Désamorçage en cours";

	_upp = "Désamorçage en cours";

	//Setup our progress bar.
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui = GVAR_UINS "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;

	while{true} do {
		if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};

		sleep 0.27;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(!alive player) exitWith {};
		if(player != vehicle player) exitWith {};
	};

	5 cutText ["","PLAIN"];
	player playActionNow "stop";

	coffre_bank setVariable ["chargeplaced",false,true];
};


if (coffre_bank getVariable ["open",false]) then {
	hint "Fermeture du coffre";

	sleep 2;

	if(!alive player) exitWith {};

	coffre_bank setVariable ["open",false,true];
};

if (box_bank getVariable ["open",false]) then {

	sleep 2;

	if(!alive player) exitWith {};

	box_bank setVariable ["open",false,true];

	_pos = getPosASL box_bank;

	playSound3D ["A3\Sounds_F\sfx\alarmcar.wss", objNull, false, _pos, 20, 1, 200];

	for "_i" from 1 to 2 do {box_bank animate [format["Door_%1_rot",_i],0];};

	sleep 3;
};

life_banck_rob = false;
publicVariable "life_banck_rob";

hint "Alarme activée !"