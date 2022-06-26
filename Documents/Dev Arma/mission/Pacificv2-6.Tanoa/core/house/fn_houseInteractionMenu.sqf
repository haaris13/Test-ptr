#include "..\..\script_macros.hpp"
/*
	File:fn_houseInteractionMenu.sqf

	Author: IronBlade
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
if(isNull _curTarget) exitWith {}; //Bad target
_houseCfg = [(typeOf _curTarget)] call life_fnc_houseConfig;
if(EQUAL(count _houseCfg,0) && playerSide == civilian) exitWith {};

if (playerSide == independent) exitWith {closeDialog 0;};

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

_Btn1 = CONTROL(37400,Btn1);
_Btn2 = CONTROL(37400,Btn2);
_Btn3 = CONTROL(37400,Btn3);
_Btn4 = CONTROL(37400,Btn4);
_Btn5 = CONTROL(37400,Btn5);
_Btn6 = CONTROL(37400,Btn6);
_Btn7 = CONTROL(37400,Btn7);
_Btn8 = CONTROL(37400,Btn8);
_Btn9 = CONTROL(37400,Btn9);
_Btn10 = CONTROL(37400,Btn10);

{_x ctrlShow false;} foreach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8,_Btn9,_Btn10];

life_pInact_curTarget = _curTarget;
if(_curTarget isKindOf "House_F" && playerSide == west) exitWith {
    if((nearestObject [(getMarkerPos "fed_reserve"),"Land_SM_01_shed_F"]) == _curTarget OR (nearestObject [(getMarkerPos "tuv_jewelers"),"Land_SM_01_shed_F"]) == _curTarget OR (nearestObject [(getMarkerPos "nicoletbank"),"Land_MilOffices_V1_F"]) == _curTarget) then { 


		_Btn1 ctrlSetText localize "STR_pInAct_Repair";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_repairDoor; closeDialog 0;";
		_Btn1 ctrlShow true;
		
		_Btn2 ctrlSetText localize "STR_pInAct_CloseOpen";
		_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_doorAnimate; closeDialog 0;";
		_Btn2 ctrlShow true;
		
	} else {
		if(!isNil {_curTarget GVAR "house_owner"}) then {
			_Btn1 ctrlSetText localize "STR_House_Raid_Owner";
			_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_houseGetOwner;";
			_Btn1 ctrlShow true;
			
			_Btn2 ctrlSetText localize "STR_pInAct_BreakDown";
			_Btn2 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_houseCopBreakDoor; closeDialog 0;";
			_Btn2 ctrlShow true;
			
			_Btn3 ctrlSetText localize "STR_pInAct_LockHouse";
			_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_houseLockAll; closeDialog 0;";
			_Btn3 ctrlShow true;
		} else {
			closeDialog 0;
		};
	};
};

if (!(_curTarget in life_vehicles) && ((_curTarget getVariable ["house_owner", ["",0]] select 0) == getPlayerUID player)) then {
	life_vehicles pushBack _curTarget;
};

if(!(_curTarget in life_vehicles) OR isNil {_curTarget GVAR "house_owner"}) then {
	if(_curTarget in life_vehicles) then {SUB(life_vehicles,[_curTarget]);};
	_Btn1 ctrlSetText localize "STR_pInAct_BuyHouse";
	_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_houseBuy;";
	_Btn1 ctrlShow true;
	
	if (!isNil {_curTarget GVAR "house_owner"}) then {
		_Btn1 ctrlEnable false;
	} else {
		
	};
} else {

	_Btn1 ctrlSetText localize "STR_pInAct_SellHouse";
	_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_houseSell; closeDialog 0;";
	_Btn1 ctrlShow true;
	
	if(((_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
		_Btn1 ctrlEnable false;
	};
	
	if(isNull (_curTarget GVAR ["lightSource",ObjNull])) then {
		_Btn2 ctrlSetText localize "STR_pInAct_LightsOn";
	} else {
		_Btn2 ctrlSetText localize "STR_pInAct_LightsOff";
	};
	_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_houseLightAction; closeDialog 0;";
	_Btn2 ctrlShow true;

	_Btn3 ctrlSetText "Intéragir avec la porte";
	_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_openNearDoor; closeDialog 0;";
	_Btn3 ctrlShow true;

	_Btn4 ctrlSetText "Améliorer le Coffre";
	_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_houseUpgradeMenu;";
	_Btn4 ctrlShow true;
	
	if(((_curTarget GVAR "house_owner") select 0) != (getPlayerUID player)) then {
		_Btn4 ctrlEnable false;
	};

	_Btn5 ctrlSetText "Sortir véhicule";
	_Btn5 buttonSetAction "[0, life_pInact_curTarget] spawn life_fnc_houseVehicle;";

	_Btn6 ctrlSetText "Ranger véhicule";
	_Btn6 buttonSetAction "[1, life_pInact_curTarget] spawn life_fnc_houseVehicle;";

	_houseCfg = (missionConfigFile >> "CfgHouses" >> "CfgBuild" >> (typeOf _curTarget));
	_garagePos = getArray(_houseCfg >> "garagePos");

	if (count _garagePos > 0) then {

		_Btn5 ctrlShow true;
		_Btn6 ctrlShow true;

		if (_curTarget getVariable["house_garage", 0] != 0) then {
			_Btn6 ctrlEnable false;
		} else {
			_Btn5 ctrlEnable false;
		};
	} else {
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
	};
};