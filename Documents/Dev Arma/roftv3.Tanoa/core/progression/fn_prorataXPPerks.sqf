/*
	File:fn_prorataXPPerks.sqf

	Autor: IronBlade
*/

_var_prof_craft = (missionNamespace getVariable ["prof_craft",0]);
_var_prof_gathering = (missionNamespace getVariable ["prof_gathering",0]);
_var_prof_mining = (missionNamespace getVariable ["prof_mining",0]);
_var_prof_treasure = (missionNamespace getVariable ["prof_treasure",0]);

if (_var_prof_craft != 0 || _var_prof_gathering != 0 || _var_prof_mining != 0 || _var_prof_treasure != 0) exitWith {};

if (life_atmbank >= 200000) then {
	life_playerxp = round(86214 * EXP(0.0000001 * life_atmbank));
	if (life_playerxp > 790000) then {
		life_playerxp = 790000;
	};
};

_var_prof_gathering = round((96.731 * ln(life_atmbank)) - 1092.1);
_var_prof_mining = round((96.731 * ln(life_atmbank)) - 1092.1);

_var_prof_craft = round((0.00003 * life_atmbank) - 1.5715);
_var_prof_treasure = round((0.00003 * life_atmbank) - 1.5715);

if (_var_prof_gathering > 750) then {
	_var_prof_gathering = 750;
};

if (_var_prof_mining > 750) then {
	_var_prof_mining = 750;
};

if (_var_prof_craft > 750) then {
	_var_prof_craft = 750;
};

if (_var_prof_treasure > 750) then {
	_var_prof_treasure = 750;
};

missionNamespace setVariable ["prof_craft", _var_prof_craft];
missionNamespace setVariable ["prof_gathering", _var_prof_gathering];
missionNamespace setVariable ["prof_mining", _var_prof_mining];
missionNamespace setVariable ["prof_treasure", _var_prof_treasure];