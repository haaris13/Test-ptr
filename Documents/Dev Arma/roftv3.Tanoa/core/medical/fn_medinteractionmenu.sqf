#include "..\..\script_macros.hpp"
/*
	File: fn_copInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Replaces the mass addactions for various cop actions towards another player.
*/
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

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];

if (life_mode_medic) then {
	_curTarget = life_mode_medic_civ;
};

if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

if ((player GVAR ["restrained",false]) || (player GVAR ["ziptied",false])) exitWith {closeDialog 0;}; // cant do this while restrained

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

life_pInact_curTarget = _curTarget;
_targetZiptied = life_pInact_curTarget GVAR ["ziptied",false];
_targetRestrained = life_pInact_curTarget GVAR ["restrained",false];

if (!alive _curTarget) exitWith {

	if (!life_mode_medic) then {
		_Btn1 ctrlSetText "Preparer Secours";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_actionheal;";

		if (!("Medikit" in (items player))) then {
			_Btn1 ctrlEnable false;
		};

		_Btn2 ctrlShow false;
		_Btn3 ctrlShow false;
		_Btn4 ctrlShow false;
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;	
		_Btn10 ctrlShow false;
	} else {
		_Btn1 ctrlSetText "Vérifier les blessures";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_checkDamageMedic; closeDialog 0; ";

		_Btn2 ctrlSetText "Appliquer un bandage";
		_Btn2 buttonSetAction "[] spawn life_fnc_useBandage; closeDialog 0; ";

		_Btn3 ctrlSetText "Massage Cardiaque";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_healMedic; closeDialog 0; ";

		if (life_medic_canRevive isEqualTo -1) then {_Btn3 ctrlEnable false; _Btn2 ctrlEnable false;};

		_Btn4 ctrlShow false;
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;	
		_Btn10 ctrlShow false;
	};
};

if(!isPlayer _curTarget) exitWith {closeDialog 0;}; //Bad side check?

if (!_targetRestrained) exitWith {
	_Btn1 ctrlSetText "Donner Argent";
	_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

	_Btn2 ctrlSetText "Donner Objets";
	_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

	_Btn3 ctrlSetText "Appliquer Morphine";
	_Btn3 buttonSetAction "closeDialog 0; [life_pInact_curTarget] spawn life_fnc_useMorphine;";

	_Btn4 ctrlSetText "Opérer";
	_Btn4 buttonSetAction "closeDialog 0; [life_pInact_curTarget] spawn life_fnc_operation;";

	if ((player distance (getMarkerPos "spawn_medic_1") > 200) && (player distance (getMarkerPos "spawn_medic_2") > 200) && (player distance (getMarkerPos "spawn_medic_3") > 200)) then {
		_Btn4 ctrlEnable false;
	};

	if ((FETCH_CONST(life_medicLevel)) >= 5) then {
			_Btn5 ctrlSetText "WhiteList";
			_Btn5 buttonSetAction "[life_pInact_curTarget, 3, 'MEDIC'] spawn life_fnc_whiteListTeam;";

			if ((player distance (getMarkerPos "spawn_medic_1") > 200)) then {
				_Btn5 ctrlEnable false;
			};

	} else {
		_Btn5 ctrlShow false;
	};

	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
};

//Set Unrestrain Button
if (_targetRestrained) exitWith {
		_Btn1 ctrlSetText "Donner Argent";
	_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

	_Btn2 ctrlSetText "Donner Objets";
	_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;

};
