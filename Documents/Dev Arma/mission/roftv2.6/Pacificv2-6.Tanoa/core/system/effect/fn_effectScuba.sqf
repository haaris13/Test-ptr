/*
	File: fn_effectScuba.sqf

	Autor: Iron
*/

_modeScuba = false;

while {true} do {
	uiSleep 4;

	if (_modeScuba) then {
		if (!(((backpack player) == "B_SCBA_01_F") && ((goggles player) == "G_RegulatorMask_F"))) exitWith {
			_modeScuba = false;
		};
	} else {
		if (((backpack player) == "B_SCBA_01_F") && ((goggles player) == "G_RegulatorMask_F")) exitWith {
			_modeScuba = true;
			(backpackContainer player) setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
		};
	};
};