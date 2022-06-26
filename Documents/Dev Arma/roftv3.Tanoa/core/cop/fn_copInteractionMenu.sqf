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
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};
	
if(!isPlayer _curTarget) exitWith {closeDialog 0;}; //Bad side check?
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
_targetDown = life_pInact_curTarget getVariable ["torture",false];


if (!_targetRestrained) exitWith {

	_surrender = life_pInact_curTarget GVAR ["playerSurrender",false];

	if (_surrender) exitWith {
		//Set Check Licenses Button
		_Btn1 ctrlSetText localize "STR_pInAct_checkLicenses";
		_Btn1 buttonSetAction "[player] remoteExecCall [""life_fnc_licenseCheck"",life_pInact_curTarget];";

		//Set Search Button
		//_Btn2 ctrlSetText localize "STR_pInAct_SearchPlayer";
		//_Btn2 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

		//Set Ticket Button
		_Btn3 ctrlSetText localize "STR_pInAct_TicketBtn";
		_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

		_Btn4 ctrlSetText "Donner Objets";
		_Btn4 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn5 ctrlSetText "Donner Argent";
		_Btn5 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn6 ctrlSetText "Controler";
		_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

		if ((ITEM_VALUE("mouchard") >= 1)) then {_Btn7 ctrlEnable true} else {_Btn7 ctrlEnable false};

		_Btn7 ctrlSetText "Placer Mouchard";
		_Btn7 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_placeMouchard;";

		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	};

	if (!_surrender) exitWith {
		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objets";
		_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn3 ctrlSetText "Donner Papier";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_papierMenuGiveOpen;";

		_Btn4 ctrlSetText "Test alcool, Drogue";
		_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_alcotest; closeDialog 0;";

		if ((ITEM_VALUE("alcotest") >= 1)) then {_Btn4 ctrlEnable true} else {_Btn4 ctrlEnable false};

		_Btn5 ctrlSetText localize "STR_pInAct_TicketBtn";
		_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";
		
		if ((FETCH_CONST(life_coplevel)) >= 12) then {
			_Btn6 ctrlSetText "WhiteList";
			_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_whiteListCop;";

			if ((player distance (getMarkerPos "marker_139") > 200)) then {
				_Btn6 ctrlEnable false;
			};

		} else {
			_Btn6 ctrlShow false;
		};

		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	};
};

//Set Unrestrain Button
if (_targetRestrained) exitWith {
	_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
	_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

	//Set Check Licenses Button
	_Btn2 ctrlSetText localize "STR_pInAct_checkLicenses";
	_Btn2 buttonSetAction "[player] remoteExecCall [""life_fnc_licenseCheck"",life_pInact_curTarget];";

	//Set Search Button
	_Btn3 ctrlSetText localize "STR_pInAct_SearchPlayer";
	_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

	//Set Escort Button
	if((_curTarget getVariable["Escorting",false])) then {
		_Btn4 ctrlSetText localize "STR_pInAct_StopEscort";
		_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; [life_pInact_curTarget] call life_fnc_copInteractionMenu;";
	} else {
		_Btn4 ctrlSetText localize "STR_pInAct_Escort";
		_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
	};

	//Set Ticket Button
	_Btn5 ctrlSetText localize "STR_pInAct_TicketBtn";
	_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

	_Btn6 ctrlSetText "Saisir les armes";
	_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_seizeWeapons;";

	_Btn7 ctrlSetText localize "STR_pInAct_Arrest";
	_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_arrestAction;";

	//Check that you are near a place to jail them.
	if((player distance (getMarkerPos "jail_marker") > 300)) then  {
		_Btn6 ctrlEnable false;
		_Btn7 ctrlEnable false;
	};
	
	_Btn8 ctrlSetText localize "STR_pInAct_PutInCar";
	_Btn8 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

	_Btn9 ctrlSetText "Controler";
	_Btn9 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

	_Btn10 ctrlSetText "Retirer Communication";
	_Btn10 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_retirerCom;";

	_Btn11 ctrlSetText "Informations Permis";
	_Btn11 buttonSetAction "[] remoteExec ['max_permisPoints_fnc_getPermisInfo',life_pInact_curTarget];";

	_Btn12 ctrlSetText "Arracher les clefs";
	_Btn12 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_arracherClef;";

};

