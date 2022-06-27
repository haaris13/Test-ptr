#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Building interaction menu
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
if(EQUAL(count _houseCfg,0) && playerSide == civilian) exitWith {["Error", "Ce batiment appartient a une entreprise."] spawn life_fnc_showPredefinedNotification;};

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
	closeDialog 0;
};

if(!(_curTarget in life_vehicles)) then {
	closeDialog 0;
} else {
	closeDialog 0;
};