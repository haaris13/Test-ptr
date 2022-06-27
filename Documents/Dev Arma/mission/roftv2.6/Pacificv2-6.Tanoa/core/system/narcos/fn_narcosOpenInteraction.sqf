/*
	File: fn_narcosOpenInteraction.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:24:11
	Version: 0.1
*/

if (!license_civ_narcos) exitWith {
	["Error", "Vous n'avez pas l'autorisation."] spawn life_fnc_showPredefinedNotification;
};

#define Btn1 37650
#define Btn2 37651
#define Btn3 37652
#define Btn4 37653
#define Btn5 37654
#define Btn6 37655
#define Btn7 37656
#define Btn8 37657
#define Btn9 37658
#define Btn10 37659
#define Title 37601
#define CloseButton 37602

disableSerialization;

if(dialog) exitWith {};

createDialog "Narcos_Interaction";

_display = findDisplay 37600;
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

_indexButton = 0;
_buttons = [_Btn1, _Btn2, _Btn3, _Btn4, _Btn5, _Btn6, _Btn7, _Btn8, _Btn9, _Btn10];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Déposer";
_button buttonSetAction format["closeDialog 0; [] spawn life_fnc_narcosOpenDeposeCash;"];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Progression";
_button buttonSetAction format["closeDialog 0; [] spawn life_fnc_narcosOpenProgress;"];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Historique";
_button buttonSetAction format["closeDialog 0; [player] remoteExec ['TON_fnc_narcosFindClanStats', 2];"];

for "_i" from _indexButton to ((count _buttons) - 1) do {
	_button = _buttons select _i;
	_button ctrlShow false;
};