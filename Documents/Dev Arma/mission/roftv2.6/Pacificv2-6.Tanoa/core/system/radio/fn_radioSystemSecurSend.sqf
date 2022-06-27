/*
	File: fn_radioSystemSecurSend.sqf

	Autor: Iron
*/
private ["_id", "_freq", "_pos", "_side", "_rds", "_cfg"];
_id = [_this,0,"",[""]] call BIS_fnc_param;
_freq = [_this,1,"",[""]] call BIS_fnc_param;
_pos = [_this,2,[],[[]]] call BIS_fnc_param;

diag_log format["fn_radioSystemSecurSend: %1 - %2", _id, _freq];

{
	_cfg = (_x);
	_rds = getArray(_cfg >> "idRadios");
	_side = getText(_cfg >> "side");

	if (_side == "WEST") then {
		_side = west;
	};

	if ((_freq in _rds) && _side != playerSide) exitWith {
		[_id, _freq, _pos] remoteExec ["life_fnc_radioSystemSecurReceivePos", _side];
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgRadio" >> "Securized"));