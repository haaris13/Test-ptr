#include "..\..\script_macros.hpp"
/*

	Name: Crack Bank

*/

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min")) && life_debug == 0) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"cops_online_min"))];
};

if (ITEM_VALUE("laptop") < 1 ) exitWith {
	hint "Il vous faut un ordinateur !";
};

if (player distance getPos box_bank > 5) exitWith {
 	hint "Vous étes trop loin de la porte de la banque...";
};

if (box_bank getVariable ["open",false]) exitWith {
	hint "La porte est déja ouverte";
};

//[2,"Quelqu'un pirate la porte de la banque !"] remoteExecCall ["life_fnc_broadcast",west];

["Quelqu'un pirate la porte de la banque !"] remoteExecCall ["life_fnc_dynamicText",west];

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

hint "Ne pas s'éloigner de la porte !";

_message = "Hacking en cours...";

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText _message;
_progress progressSetPosition 0.01;
_cP = 0.01;

_interup = false;

while{true} do {

	sleep 6;
	_cP = _cP + 0.01;

	if(_cP >= 0.1) then {
		_message = "Balayage du réseau (0/4)";
	};
	if(_cP >= 0.5) then {
		_message = "Balayage du réseau (1/4)";
	};
	if(_cP >= 0.7) then {
		_message = "Balayage du réseau (2/4)";
	};
	if(_cP >= 0.9) then {
		_message = "Balayage du réseau (3/4)";
	};
	if(_cP >= 0.11) then {
		_message = "Balayage du réseau (4/4)";
	};

	if(_cP >= 0.13) then {
		_message = "Balayage du réseau (Fini)";
	};

	if(_cP >= 0.14) then {
		_message = "Repérage des failles";
	};

	if(_cP >= 0.18) then {
		_message = "Une faille trouvé.";
	};

	if(_cP >= 0.19) then {
		_message = "Exploitation de la faille";
	};

	if(_cP >= 0.21) then {
		_message = "Upload du virus (0/5)";
	};

	if(_cP >= 0.25) then {
		_message = "Upload du virus (1/5)";
	};

	if(_cP >= 0.30) then {
		_message = "Upload du virus (2/5)";
	};

	if(_cP >= 0.35) then {
		_message = "Upload du virus (3/5)";
	};

	if(_cP >= 0.40) then {
		_message = "Upload du virus (4/5)";
	};

	if(_cP >= 0.45) then {
		_message = "Upload du virus (5/5)";
	};

	if(_cP >= 0.50) then {
		_message = "Upload du virus (Fini)";
	};

	if(_cP >= 0.51) then {
		_message = "Compromission en cours..";
	};
	
	if(_cP >= 0.6) then {
		_message = "Installation d’une porte dérobée";
	};

	if(_cP >= 0.7) then {
		_message = "Installation d’un rootkits";
	};

	if(_cP >= 0.8) then {
		_message = "Préparation a l'ouverture de la porte";
	};

	if(_cP >= 0.95) then {
		_message = "Commandes en attentes..";
	};

	if(_cP >= 0.99) then {
		_message = "Ouverture..";
	};

	_progress progressSetPosition _cP;
	_pgText ctrlSetText _message;
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {_interup = true;};

	if(player distance getPos box_bank > 10) exitWith {
		5 cutText ["","PLAIN"];
		hint "Perte de la connexion";
		_interup = true;
	};
};

if (_interup) exitWith {};

5 cutText ["","PLAIN"];

box_bank setVariable ["open",true,true];

_pos = getPosASL box_bank;

playSound3D ["A3\Sounds_F\sfx\alarmcar.wss", objNull, false, _pos, 20, 1, 200];

for "_i" from 1 to 2 do {box_bank animate [format["Door_%1_rot",_i],1];};

sleep 3;

playSound3D ["A3\Sounds_F\sfx\alarmcar.wss", objNull, false, _pos, 20, 1, 200];