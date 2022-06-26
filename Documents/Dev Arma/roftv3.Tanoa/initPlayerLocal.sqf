/*
	File: initPlayerLocal.sqf

	Description:
	Starts the initialization of the player.
*/
"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};
if(!hasInterface) exitWith {}; //This is a headless client, he doesn't need to do anything but keep being headless..
#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#define EQUAL(condition1,condition2) condition1 isEqualTo condition2
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
[] execVM "script\nekro\argentsal\init.sqf";
[] execVM "core\init.sqf";
[] execVM "core\functions\fn_emptyFuel.sqf";
[] execVM "scripts\fn_brighternight.sqf";
[] execVM "script\nekro\init.sqf"; //ADD BY NEKRO
[] execVM "LID\init.sqf";
/*
	[] execVM "scripts\anticheat.sqf";
*/
["ace_unconscious",{[_this] call life_fnc_unconcious;}] call CBA_fnc_addEventHandler; 
tf_terrain_interception_coefficient = 4.0;  // ==> Réglage de l'interception sur le terrain
player setVariable ["tf_sendingDistanceMultiplicator", 20.0];  // radio coef
player setVariable ["tf_receivingDistanceMultiplicator", 10.0];  // radio coef
//TF_terrain_interception_coefficient = 4.0;// radio coef

