	#include "..\..\script_macros.hpp"
/*
	WIP, needs to be cleaned up alot
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
#define CloseButton 37402

private["_buttons","_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_hasTies","_playerRestrained","_playerZiptied","_targetZiptied","_zipTied","_targetRestrained"];

if(FETCH_CONST(life_adminlevel) < 1)  exitWith {};

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
_type = _this select 1;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

_playerRestrained = player getVariable["restrained",false];
_playerZiptied = player getVariable["ziptied",false];
if ((player GVAR ["restrained",false]) || (player GVAR ["ziptied",false])) exitWith {}; // cant do this while restrained


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
_targetZiptied = _curTarget GVAR ["ziptied",false];
_targetRestrained = _curTarget GVAR ["restrained",false];

if (!alive _curTarget) exitWith {

	_Btn1 ctrlSetText "Revive";
	_Btn1 buttonSetAction "[life_pInact_curTarget] call admin_fnc_adminRevivePlayer; closeDialog 0; ";

	_Btn2 ctrlSetText "Supprimer Cadavre";
	_Btn2 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_deleteVehicle; closeDialog 0; ";

	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;	
	_Btn10 ctrlShow false;
};

if(!isPlayer _curTarget) exitWith {closeDialog 0;}; 

/*
	Normal player
*/

if ((!_targetZiptied) && (!_targetRestrained)) exitWith {

	_surrender = life_pInact_curTarget GVAR ["playerSurrender",false];

	if (_surrender) exitWith {

		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objets";
		_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";
		
		_Btn3 ctrlSetText "Soigner";
		_Btn3 buttonSetAction "closeDialog 0; [player] remoteExecCall ['admin_fnc_adminHealPlayer',life_pInact_curTarget];";

		_Btn4 ctrlShow false;
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	};

	if (!_surrender) exitWith {
		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objets";
		_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn3 ctrlSetText "Soigner";
		_Btn3 buttonSetAction "closeDialog 0; [player] remoteExecCall ['admin_fnc_adminHealPlayer',life_pInact_curTarget];";

		_Btn4 ctrlSetText "Whitelist Femme";
		_Btn4 buttonSetAction "closeDialog 0; ['Women', getPlayerUID player] remoteExecCall ['life_fnc_playerUnlockAdd', life_pInact_curTarget]; hint 'Ok';";

		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	};
};


if ((_targetZiptied) || (_targetRestrained)) exitWith {
	_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
	_Btn1 buttonSetAction "[life_pInact_curTarget] call admin_fnc_adminUnrestrain2; closeDialog 0;";

	_Btn2 ctrlSetText "Soigner";
	_Btn2 buttonSetAction "closeDialog 0; [player] remoteExecCall ['admin_fnc_adminHealPlayer',life_pInact_curTarget];";

	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
};


/*
	Dead player
*/