/*
	File: fn_gouvOpenMenu.sqf

	Autor: IronBlade
*/

disableSerialization;

createDialog "Dialog_Gouv_Menu";

_display = findDisplay 9100;
_btn1 = _display displayCtrl 9101;
_btn2 = _display displayCtrl 9102;

if (playerside == west) exitWith {
	if (((call(life_coplevel)) >= 11)) then {
		_btn2 ctrlEnable false;
	} else {
		_btn1 ctrlShow false;
		_btn2 ctrlShow false;
	};
};

if ((getPlayerUID player) != gouv_president_uid) exitWith {
	_btn1 ctrlShow false;
	_btn2 ctrlShow false;
};