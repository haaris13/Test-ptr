/*
	File:fn_getCalibresByAmmo.sqf

	Autor:IronBlade
*/
_c = [_this,0,"",[""]] call BIS_fnc_param;

if (_c == "") exitWith {};

_calibres = "true" configClasses (missionconfigFile >> "DamagesEffects" >> "Calibres");

_goodConf = "";

{
	_liste_calibres = getArray(_x >> "liste_calibres");

	_conf = configName(_x);

	{

		if (_x == _c) exitWith {
			_goodConf = _conf;
		};

	} forEach _liste_calibres;

	if (_goodConf != "") exitWith {};

} forEach _calibres;

if (_goodConf == "") then {
	_goodConf = "Default";
};

_goodConf;