/*
	File: fn_targetTrainingSuccessMessage.sqf

	Autor: Iron
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_message = [_this, 1, "", [""]] call BIS_fnc_param;

if (life_targets_training_weapon != "") then {
	switch (_type) do {
		case 1 : {[life_targets_training_weapon, 20] spawn life_fnc_targetTrainingStatsIncrease;}; 
		case 2 : {[life_targets_training_weapon, 15] spawn life_fnc_targetTrainingStatsIncrease;}; 
		case 3 : {[life_targets_training_weapon, 10] spawn life_fnc_targetTrainingStatsIncrease;}; 
		default {}; 
	};
};

uiSleep 3;

/*
["<t shadow='1' size='1.9' font='PuristaBold'>Meilleur score !</t>", -1, -1, 1, 0.5, 0, 788] spawn BIS_fnc_dynamicText;

playSound "EXP_m05_dramatic";
uiSleep 4;
*/

[format["<t shadow='1'>%1</t>", _message], -1, -1, 0.5, 3.5, 0, 789] spawn BIS_fnc_dynamicText;
playSound "EXP_m05_dramatic";

uiSleep 2;

switch (_type) do { 
	case 1 : {["trainingtrgbest"] spawn life_fnc_achievementLearn;}; 
	case 2 : {["trainingtrgmybest"] spawn life_fnc_achievementLearn;}; 
	case 3 : {["trainingtrgwbest"] spawn life_fnc_achievementLearn;}; 
	default {}; 
};

["x", 100] call life_fnc_addXP;