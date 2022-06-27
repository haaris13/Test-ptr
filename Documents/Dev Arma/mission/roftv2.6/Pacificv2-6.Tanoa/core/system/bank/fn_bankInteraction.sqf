#include "..\..\..\script_macros.hpp"
/*
	File: fn_bankInteraction.sqf

	Autor: Iron
	Date: 29 Mar 2020 16:57:53
	Version: 0.1
*/
life_baInact_curTarget = cursorTarget;

if (isNull life_baInact_curTarget) exitWith {};

//if (life_bank_doors <= 1) exitWith {diag_log "life_bank_doors <= 1";};

if (((bank_bat animationPhase 'Door_Handle_10_rot') < 0.1) || ((bank_bat animationPhase 'Door_Handle_12_rot') < 0.1)) exitWith {diag_log "life_bank_doors <= 2";};

_class = typeOf life_baInact_curTarget;

if (!(isClass(missionConfigFile >> "BankCfg" >> "Chests" >> _class)) && !(isClass(missionConfigFile >> "BankCfg" >> "MultiChest" >> _class))) exitWith {};

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401
#define CloseButton 37402

private["_buttons","_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

disableSerialization;
if (!life_session_completed) exitWith {closeDialog 0;};
if(!dialog) then {
	createDialog "pInteraction_Menu";
};

if ((player getVariable ["restrained",false]) || (player getVariable ["ziptied",false])) exitWith {closeDialog 0;}; // cant do this while restrained

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

_allButtons = [_Btn1, _Btn2, _Btn3, _Btn4, _Btn5, _Btn6, _Btn7, _Btn8, _Btn9, _Btn10];
_indexButton = 0;

_classChest = (missionConfigFile >> "BankCfg" >> "Chests" >> _class);
_isMulti = false;

if !(isClass(_classChest)) then {
	_classChest = (missionConfigFile >> "BankCfg" >> "MultiChest" >> _class);
	_isMulti = true;
};

if (_isMulti) then {

	{
		_curClass = _x;
		_button = _allButtons select _indexButton;

		_button ctrlSetText format["%1 %2", "Forcer", getText(_curClass >> "displayName")];
		_button buttonSetAction format["closeDialog 0; [life_baInact_curTarget, '%1'] spawn life_fnc_bankForceMultiChest;", configName(_curClass)];
		_indexButton = _indexButton + 1;

	} forEach ("true" configClasses (_classChest));
	
} else {
	_button = _allButtons select _indexButton;

	_button ctrlSetText "Forcer";
	_button buttonSetAction "closeDialog 0; [life_baInact_curTarget] spawn life_fnc_bankForceChest";
	_indexButton = _indexButton + 1;
};

for "_i" from _indexButton to ((count _allButtons) - 1) do {
	_button = _allButtons select _i;
	_button ctrlShow false;
};