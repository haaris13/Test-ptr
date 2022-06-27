/*
	File: fn_tortureVictimAction.sqf

	Autor: IronBlade
*/
_victim = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_action = [_this,1,0,[0]] call BIS_fnc_param;

switch (_action) do {
	case 1 : {
		player playMove "Acts_Executioner_StandingLoop";
	};

	case 2 : {
		player playMove "Acts_Executioner_Forehand";
		uiSleep 0.2;
	};

	case 3 : {
		player playMove "Acts_Executioner_Kill";
		uisleep 1.9;
		player forceWeaponFire [(handgunWeapon player), "Single"];
	};

	case 4 : {
		player playMove "Acts_Executioner_Backhand";
		uiSleep 0.2;
	};
};

if (_action != 1) then {
	[_action] remoteExec ["life_fnc_tortureVictimClient", _victim];
};