/*
	File: fn_tortureVictimClient.sqf

	Autor: IronBlade
*/
_action = [_this,0,0,[0]] call BIS_fnc_param;

switch (_action) do { 
	case 2 : {
		player switchMove "Acts_ExecutionVictim_Forehand";
		[player,"Acts_ExecutionVictim_Forehand",true] remoteExecCall ["life_fnc_animSync",-2];
	};

	case 3 : {
		player switchMove "Acts_ExecutionVictim_Kill";
		[player,"Acts_ExecutionVictim_Kill",true] remoteExecCall ["life_fnc_animSync",-2];
		uiSleep 1; //origin 6
		player setDamage 1;
	};

	case 4 : {
		player switchMove "Acts_ExecutionVictim_Backhand";
		[player,"Acts_ExecutionVictim_Backhand",true] remoteExecCall ["life_fnc_animSync",-2];
	};
};