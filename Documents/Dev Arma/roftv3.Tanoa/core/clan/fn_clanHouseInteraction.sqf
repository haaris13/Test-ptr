#include "..\..\script_macros.hpp"
/*
	File:fn_clanHouseInteractionMenu.sqf

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

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {hint "Il vous faut un clan pour faire cela !"};
if (playerSide == independent) exitWith {};
if (playerSide == west) exitWith {};
if !((_curTarget getVariable "clan_group") isEqualTo _group) exitWith {hint "Cette Maison de clan appartient a un autre clan !"};
if !(isNil {_curTarget getVariable "notBuy"}) exitWith {};

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

if (isNil {_curTarget getVariable "clan_group"}) then {

	_Btn1 ctrlSetText "Acheter Maison Clan";
	_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_clanHouseBuy;";
	_Btn1 ctrlShow true;
	
	if (((group player) getVariable "clan_owner") != getPlayerUID player) then {
		_Btn1 ctrlEnable false;
	};
} else {

	if !(_curTarget in life_vehicles) exitWith {
		if ((group player) getVariable["clan_build",objNull] == _curTarget) then {
			life_vehicles pushBack _curTarget;
			closeDialog 0;
		} else {
			closeDialog 0;
		};
	};

	_Btn1 ctrlSetText "Vendre";
	_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_clanHouseSell; closeDialog 0;";
	_Btn1 ctrlShow true;
	
	if (((group player) getVariable "clan_owner") != getPlayerUID player) then {
		_Btn1 ctrlEnable false;
	};

	_currentRank = [] call life_fnc_clanGetRank;
	_canDo = getArray(_currentRank >> "canDo");

	_Btn2 ctrlSetText "Garage";
	_Btn2 buttonSetAction "closeDialog 0; [life_pInact_curTarget] spawn life_fnc_clanVehicleTakeMenuOpen;";
	_Btn2 ctrlShow true;

	if !("garageTake" in _canDo) then {
		_Btn2 ctrlEnable false;
	};

	_Btn3 ctrlSetText "Ranger Véhicule";
	_Btn3 buttonSetAction "closeDialog 0; [life_pInact_curTarget] spawn life_fnc_clanVehicleStoreMenu;";
	_Btn3 ctrlShow true;

	if !("garageStore" in _canDo) then {
		_Btn3 ctrlEnable false;
	};
};