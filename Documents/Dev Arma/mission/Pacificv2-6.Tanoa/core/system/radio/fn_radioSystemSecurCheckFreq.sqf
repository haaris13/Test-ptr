/*
	File: fn_radioSystemSecurCheckFreq.sqf

	Autor: Iron
*/
private ["_freq", "_secur"];
_freq = [_this,0,"",[""]] call BIS_fnc_param;
_secur = false;

{
	_cfg = (_x);
	_rds = getArray(_cfg >> "idRadios");
	_sideDetect = getText(_cfg >> "sideDetect");
	_side = getText(_cfg >> "side");

	if (_side == "WEST") then {
		_side = west;
	};

	if (_sideDetect == "CIV") then {
		_sideDetect = civilian;
	};

	if ((_freq in _rds) && (_sideDetect == playerSide)) exitWith {
		_secur = true;
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgRadio" >> "Securized"));

_secur;