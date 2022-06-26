/*
	File:fn_actionHeal.sqf


	autor:IronBlade

	player playaction "medicstart";

	anims:
		On:
			ainvpknlmstpsnonwnondnon_ainvpknlmstpsnonwnondnon_medic,ainvpknlmstpsnonwnondnon_medic0s

		Off:
			ainvpknlmstpsnonwnondnon_medicend
*/
_civ = [_this,0,objNull,[objNull]] call BIS_fnc_param;

life_mode_medic_civ = _civ;

closeDialog 0;

if (isNull _civ) exitWith {};
if (life_mode_medic) exitWith {};


life_mode_medic = true;

_anims = ["","ainvpknlmstpsnonwnondnon_medic","ainvpknlmstpsnonwnondnon_medic1","ainvpknlmstpsnonwnondnon_medic2","ainvpknlmstpsnonwnondnon_medic3","ainvpknlmstpsnonwnondnon_medic4","ainvpknlmstpsnonwnondnon_medic5","ainvpknlmstpsnonwnondr_medic0","ainvpknlmstpsnonwnondr_medic1","ainvpknlmstpsnonwnondr_medic2","ainvpknlmstpsnonwnondr_medic3","ainvpknlmstpsnonwnondr_medic4","ainvpknlmstpsnonwnondr_medic5"];

_pos = 2;

while{true} do {
	if(!(animationstate player in _anims)) then {
		player playmoveNow (_anims select _pos);
		_pos = _pos + 1;
		if (_pos > ((count _anims) - 1)) then {_pos = 2;};
		sleep 1;
	};
	sleep 0.001;
	if (!alive player) exitwith {};
	if (player != vehicle player) exitwith {};
	if (life_interrupted) exitwith {};
	if (!life_mode_medic) exitWith {};
	if (alive life_mode_medic_civ) exitWith {};
};

player playActionNow "stop";


life_interrupted = false;

life_mode_medic = false;

life_medic_canRevive = -1;

life_mode_medic_civ = objNull;