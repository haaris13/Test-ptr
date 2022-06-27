/*
	File: fn_targetTrainingLaunchTimer.sqf

	Autor: IronBlade
*/

uiSleep 7;

if (!life_targets_training_exit) then {
	["<t shadow='1'>3</t>", -1, -1, 0.5, 0.2, 0, 789] spawn life_fnc_dynamicText;
	playSound "Orange_PhoneCall_Accept";
};

uiSleep 1;

if (!life_targets_training_exit) then {
	["<t shadow='1'>2</t>", -1, -1, 0.5, 0.2, 0, 788] spawn life_fnc_dynamicText;
	playSound "Orange_PhoneCall_Accept";
};

uiSleep 1;

if (!life_targets_training_exit) then {
	["<t shadow='1'>1</t>", -1, -1, 0.5, 0.2, 0, 789] spawn life_fnc_dynamicText;
	playSound "Orange_PhoneCall_Accept";
};

uiSleep 1;

if (!life_targets_training_exit) then {
	["<t shadow='1'>C'est parti !</t>", -1, -1, 0.4, 0.1, 0, 788] spawn life_fnc_dynamicText;
	playSound "FD_Course_Active_F";
};

uiSleep 0.2;