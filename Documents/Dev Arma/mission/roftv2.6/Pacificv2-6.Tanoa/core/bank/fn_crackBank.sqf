#include "..\..\script_macros.hpp"
/*

	Name: Crack Bank

*/

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min")) && life_debug == 0) exitWith {
	["Error", format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"cops_online_min"))]] spawn life_fnc_showPredefinedNotification;
};

if (ITEM_VALUE("laptop") < 1 ) exitWith {
	["Error", "Il vous faut un ordinateur !"] spawn life_fnc_showPredefinedNotification;
};

if (player distance getPos box_bank > 5) exitWith {
	["Warning", "Vous êtes trop loin de la porte de la banque."] spawn life_fnc_showPredefinedNotification;
};

if (box_bank getVariable ["open",false]) exitWith {
	["Error", "La porte est déja ouverte."] spawn life_fnc_showPredefinedNotification;
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

["Warning", "Ne vous éloignez pas de la porte !"] spawn life_fnc_showPredefinedNotification;

_message = "Piratage en cours...";

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

	if(_cP >= 0.01) then {
		_message = "Balayage du réseau [#                   ]";
	};
	if(_cP >= 0.02) then {
		_message = "Balayage du réseau [##                  ]";
	};
	if(_cP >= 0.03) then {
		_message = "Balayage du réseau [###                  ]";
	};
	if(_cP >= 0.04) then {
		_message = "Balayage du réseau [####                ]";
	};
	if(_cP >= 0.05) then {
		_message = "Balayage du réseau [#####               ]";
	};
	if(_cP >= 0.06) then {
		_message = "Balayage du réseau [########            ]";
	};
	if(_cP >= 0.07) then {
		_message = "Balayage du réseau [##########          ]";
	};
	if(_cP >= 0.08) then {
		_message = "Balayage du réseau [############        ]";
	};
	if(_cP >= 0.09) then {
		_message = "Balayage du réseau [###############     ]";
	};
	if(_cP >= 0.10) then {
		_message = "Balayage du réseau [################### ]";
	};
	if(_cP >= 0.11) then {
		_message = "Balayage du réseau [####################]";
	};

	if(_cP >= 0.13) then {
		_message = "Balayage du réseau (Fini)";
	};

	if(_cP >= 0.14) then {
		_message = "Recherche d'une faille...";
	};

	if(_cP >= 0.18) then {
		_message = "Une faille a été trouvé.";
	};

	if(_cP >= 0.19) then {
		_message = "Exploitation de la faille";
	};

	if(_cP >= 0.21) then {
		_message = "Upload du virus [#                   ]";
	};

	if(_cP >= 0.22) then {
		_message = "Upload du virus [##                  ]";
	};

	if(_cP >= 0.23) then {
		_message = "Upload du virus [###                 ]";
	};

	if(_cP >= 0.24) then {
		_message = "Upload du virus [####                ]";
	};

	if(_cP >= 0.25) then {
		_message = "Upload du virus [#####               ]";
	};

	if(_cP >= 0.26) then {
		_message = "Upload du virus [######              ]";
	};

	if(_cP >= 0.27) then {
		_message = "Upload du virus [#######             ]";
	};

	if(_cP >= 0.28) then {
		_message = "Upload du virus [########            ]";
	};

	if(_cP >= 0.29) then {
		_message = "Upload du virus [#########           ]";
	};

	if(_cP >= 0.30) then {
		_message = "Upload du virus [##########          ]";
	};

	if(_cP >= 0.31) then {
		_message = "Upload du virus [###########         ]";
	};

	if(_cP >= 0.32) then {
		_message = "Upload du virus [############        ]";
	};

	if(_cP >= 0.33) then {
		_message = "Upload du virus [#############       ]";
	};

	if(_cP >= 0.34) then {
		_message = "Upload du virus [##############      ]";
	};

	if(_cP >= 0.35) then {
		_message = "Upload du virus [###############     ]";
	};

	if(_cP >= 0.40) then {
		_message = "Upload du virus [################    ]";
	};

	if(_cP >= 0.41) then {
		_message = "Upload du virus [#################   ]";
	};

	if(_cP >= 0.42) then {
		_message = "Upload du virus [##################  ]";
	};

	if(_cP >= 0.43) then {
		_message = "Upload du virus [################### ]";
	};

	if(_cP >= 0.44) then {
		_message = "Upload du virus [################### ]";
	};

	if(_cP >= 0.45) then {
		_message = "Upload du virus [####################]";
	};

	if(_cP >= 0.50) then {
		_message = "Upload du virus (Fini)";
	};

	if(_cP >= 0.51) then {
		_message = "Compromission en cours...";
	};
	
	if(_cP >= 0.6) then {
		_message = "Installation d’une porte dérobée";
	};

	if(_cP >= 0.7) then {
		_message = "Installation d’un rootkit";
	};

	if(_cP >= 0.8) then {
		_message = "Préparation à l'ouverture de la porte";
	};

	if(_cP >= 0.95) then {
		_message = "Commandes en attentes...";
	};

	if(_cP >= 0.99) then {
		_message = "Ouverture...";
	};

	_progress progressSetPosition _cP;
	_pgText ctrlSetText _message;
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {_interup = true;};

	if(player distance getPos box_bank > 10) exitWith {
		5 cutText ["","PLAIN"];
		["Warning", "Perte de la connexion"] spawn life_fnc_showPredefinedNotification;
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