/**
	File: fn_onuDoorGetState.sqf
	
	Autor: Iron
*/
private ["_door", "_cfgOnuGate", "_anim", "_etatOpen", "_etatFerme", "_etat"];

_door = [_this,0, objNull, [objNull]] call BIS_fnc_param;

_cfgOnuGate = (missionConfigFile >> "CfgOnu" >> "Gates" >> (typeof _door));
_anim = getText(_cfgOnuGate >> "anim");
_etatOpen = getNumber(_cfgOnuGate >> "etatOpen");
_etatFerme = getNumber(_cfgOnuGate >> "etatFerme");

_etat = "";

switch (true) do {
	case ((_door animationPhase _anim) == _etatFerme): {
		_etat = "close";
	};
	
	case ((_door animationPhase _anim) != _etatFerme) : {
		_etat = "open";
	};
};

_etat;