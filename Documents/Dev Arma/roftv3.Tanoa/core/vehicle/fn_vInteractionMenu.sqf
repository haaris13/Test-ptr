#include "..\..\script_macros.hpp"
/*
	File: fn_vInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Replaces the mass addactions for various vehicle actions
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
#define Title 37401
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6"];
if(!dialog) then {
	createDialog "vInteraction_Menu";
};
disableSerialization;

_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
_isVehicle = if((_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0;};

_display = findDisplay 37400;
_title = _display displayCtrl Title;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
life_vInact_curTarget = _curTarget;

_title ctrlSetText localize "STR_vInAct_Title";

//Set Repair Action
_Btn1 ctrlSetText localize "STR_vInAct_Repair";
_Btn1 buttonSetAction "[cursorObject] spawn TheProgrammer_fnc_RepairSwitch; closeDialog 0;";

//if((ITEM_VALUE("toolKit") >= 1)) && {alive life_vInact_curTarget} && {([life_vInact_curTarget] call life_fnc_isDamaged)}) then {_Btn1 ctrlEnable true;} else {_Btn1 ctrlEnable false;};
if ((ITEM_VALUE("toolKit") >= 1)) then {_Btn1 ctrlEnable true} else {_Btn1 ctrlEnable false};

if(playerSide == west) then {
	
	
	_Btn2 ctrlSetText "Vérifier l'assurance";
	_Btn2 buttonSetAction "[life_vInact_curTarget] spawn advanced_insurance_fnc_checkInsurance; closeDialog 0;";

	/*
	if (_curTarget isKindOf "Air" || _curTarget isKindOf "Ship") then {_Btn2 ctrlEnable true} else {_Btn2 ctrlEnable false};

	if (typeof _curTarget == "C_Offroad_01_repair_F") then {
		_Btn2 ctrlSetText "Démantèlement";
		_Btn2 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vehicleDemantelerList;";
		
		_Btn2 ctrlEnable true;
	};
	*/
	_Btn3 ctrlSetText localize "STR_vInAct_SearchVehicle";
	_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vehInvSearch;";
	
	_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
	_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction;";
	if(count crew _curTarget == 0) then {_Btn4 ctrlEnable false;};
	
	_Btn5 ctrlSetText localize "STR_vInAct_Impound";
	_Btn5 buttonSetAction "[life_vInact_curTarget] spawn max_fourriere_fnc_impoundAction;";

	if (([] call life_fnc_fourriereNbPlayers) > 0) then {
		_Btn5 ctrlEnable false;
	};
	
	if(_curTarget isKindOf "Ship") then {
		_Btn6 ctrlSetText localize "STR_vInAct_PushBoat";
		_Btn6 buttonSetAction "[] spawn life_fnc_pushObject; closeDialog 0;";
		if(_curTarget isKindOf "Ship" && {local _curTarget} && {count crew _curTarget == 0}) then { _Btn6 ctrlEnable true;} else {_Btn6 ctrlEnable false};
	} else {
		if(typeOf (_curTarget) in ["C_Kart_01_Blu_F","C_Kart_01_Red_F","C_Kart_01_Fuel_F","C_Kart_01_Vrana_F"]) then {
			_Btn6 ctrlSetText localize "STR_vInAct_GetInKart";
			_Btn6 buttonSetAction "player moveInDriver life_vInact_curTarget; closeDialog 0;";
			if(count crew _curTarget == 0 && {canMove _curTarget} && {locked _curTarget == 0}) then {_Btn6 ctrlEnable true;} else {_Btn6 ctrlEnable false};
		} else {
			_Btn6 ctrlSetText localize "STR_vInAct_Unflip";
			_Btn6 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
			if(count crew _curTarget == 0 && {canMove _curTarget}) then { _Btn6 ctrlEnable false;} else {_Btn6 ctrlEnable true;};
		};
	};

	_Btn7 ctrlSetText "Placer Traceur";
	_Btn7 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_placeTraceur;";

	if ((ITEM_VALUE("traceur") >= 1)) then {_Btn7 ctrlEnable true} else {_Btn7 ctrlEnable false};

	if ((FETCH_CONST(life_coplevel) <= 5)) then {_Btn7 ctrlShow false;};

	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;

} else {

	_Btn2 ctrlSetText "Saboter le Moteur";
	_Btn2 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_saboterVeh; closeDialog 0;";
	
	if(count crew _curTarget == 0 && ['saboteur'] call life_fnc_hasPerk) then { _Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false;};

	_Btn3 ctrlSetText "Contrebande";
	_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vInteractionCachesMenu;";

	if((locked _curTarget == 0) && (['hide'] call life_fnc_hasPerk) && (life_vInact_curTarget isKindOf "landVehicle") && (life_vInact_curTarget in life_vehicles)) then { _Btn3 ctrlEnable true;} else {_Btn3 ctrlEnable false;};

	switch (true) do {
		case (_curTarget isKindOf "Ship") : {
			_Btn4 ctrlSetText localize "STR_vInAct_PushBoat";
			_Btn4 buttonSetAction "[] spawn life_fnc_pushObject; closeDialog 0;";
			if ((local _curTarget) && (count crew _curTarget == 0)) then { _Btn3 ctrlEnable true;} else {_Btn3 ctrlEnable false};
		}; 

		case (typeOf (_curTarget) in ["C_Kart_01_Blu_F","C_Kart_01_Red_F","C_Kart_01_Fuel_F","C_Kart_01_Vrana_F"]) : {
			_Btn4 ctrlSetText localize "STR_vInAct_GetInKart";
			_Btn4 buttonSetAction "player moveInDriver life_vInact_curTarget; closeDialog 0;";
			if(count crew _curTarget == 0 && {canMove _curTarget} && {locked _curTarget == 0}) then {_Btn3 ctrlEnable true;} else {_Btn3 ctrlEnable false};
		};

		case (typeOf _curTarget == "O_Truck_03_device_F") : {
			_Btn4 ctrlSetText localize "STR_vInAct_DeviceMine";
			_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_deviceMine";
			if(!isNil {(_curTarget getVariable "mining")} OR !local _curTarget && {_curTarget in life_vehicles}) then {
				_Btn4 ctrlEnable false;
			} else {
				_Btn4 ctrlEnable true;
			};

			_Btn4 ctrlEnable false; // Current
		};

		default {
			_Btn4 ctrlSetText localize "STR_vInAct_Unflip";
			_Btn4 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
			if (count crew _curTarget == 0 && {canMove _curTarget}) then { _Btn4 ctrlEnable false;} else {_Btn4 ctrlEnable true;};
		}; 
	};

	_Btn5 ctrlSetText localize "STR_vInAct_PullOut";
	_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction;";
	if(count crew _curTarget == 0) then {_Btn5 ctrlEnable false;};

	if (playerside == civilian) then {
		if ((FETCH_CONST(life_erpLevel)) >= 1 && playerside == civilian) then {
			switch (true) do { 
				case (!(life_vInact_curTarget getVariable ["fourriere", false])) : {
					_Btn6 ctrlSetText localize "STR_vInAct_Impound";
					_Btn6 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_fourriereVehStore;";
				};

				case (life_vInact_curTarget getVariable ["fourriere", false]) : {
					_Btn6 ctrlSetText "Retirer Fourrière";
					_Btn6 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_fourriereVehGet;";
				};
			};

			if ((player distance (getMarkerPos "spawn_erp_1") > 300) || (vest player) != "GiletFluoDepan") then {
				_Btn6 ctrlEnable false;
			};

		} else {
			_Btn6 ctrlShow false;
		};
	} else {
		_Btn6 ctrlShow false;
	};

	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
};