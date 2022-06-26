#include "..\..\script_macros.hpp"
/*
	File: fn_slotOpen.sqf
	Author: stuffz - CheapSuit Inc

	Desc:
	Opens the slot display

	this allowDamage false; this enableSimulation false; this setVariable["nametag_title","Slot Machine"]; this addAction["Slot Machine (£10,000)",life_fnc_slotOpen,"highroller",0,false,true,"",''];
	this allowDamage false; this enableSimulation false; this setVariable["nametag_title","Slot Machine"]; this addAction["Slot Machine (£1,000)",life_fnc_slotOpen,"averageroller",0,false,true,"",''];
	this allowDamage false; this enableSimulation false; this setVariable["nametag_title","Slot Machine"]; this addAction["Slot Machine (£100)",life_fnc_slotOpen,"hoboroller",0,false,true,"",''];

	missionConfigFile >> "Slots"
*/

private["_display","_type","_slotType","_slot","_player","_action","_param","_price"];

// Params
_slot = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_player = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
_param = [_this,3,"",[""]] call BIS_fnc_param;

// Error Checking
if(_param == "") exitWith {};
if !(alive _player) exitWith {};

if(((player distance _slot) > 2)) exitWith {["Error", "Vous êtes trop loin !"] spawn life_fnc_showPredefinedNotification;};

if ((ITEM_VALUE("ticket") <= 0)) exitWith {["Error", "Vous n'avez pas de tickets !"] spawn life_fnc_showPredefinedNotification;};

// Save inputs in a local variables for easier passing
life_casino_slotmachine = [_slot,_player,_action,_param];

// Set up the "slot machine"
disableSerialization;

createDialog "Slots";
waitUntil {!isNull findDisplay 41000};

_display = findDisplay 41000;
_type = _display displayCtrl 41002;

// Check which of slot machine we opened
_slotType = switch(_param) do
{
	case "highroller": { "Machine à sous - 10,000$ par jeu"; };
	case "averageroller": { "Machine à sous - 1,000$ par jeu"; };
	case "hoboroller": { "Machine à sous - 100$ par jeu"; };
	default { "Machine à sous - 100$ par jeu"; };
};

// Set the text to show which slot machine we opened
_type ctrlSetText _slotType;

// Save the icons in a local variable
life_casino_slotIcons =
[
	"icons\casino\seven.paa",
	"icons\casino\orange.paa",
	"icons\casino\cherries.paa",
	"icons\casino\bar.paa",
	"icons\casino\bananas.paa",
	"icons\casino\grape.paa",
	"icons\casino\melon.paa",
	"icons\casino\lemon.paa"
];