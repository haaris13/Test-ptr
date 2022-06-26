#include "..\..\..\script_macros.hpp"
/*
	File: fn_searchwreck.sqf 
	
	Author: IronBlade
*/
private["_sum","_finding","_txt","_items","_wreck","_combinedWeight","_lootArray","_wreckLoot"];
_wreck = _this select 0;
life_current_explorer = _wreck;
life_action_inUse = true;
titleText["Fouille en cours..","PLAIN"];
titleFadeOut 5;
sleep 5;
	
_wreckLoot = _wreck getVariable ["loot",[]];
_players = _wreck getVariable ["players",[]];

if (life_current_explorer in life_explorer_caisses_pirate && (count _players > 0)) exitWith {hint "C'est Vide !"; life_action_inUse = false;};

if ((getPlayerUID player) in _players) exitWith {hint "C'est Vide !"; life_action_inUse = false; _wreck setVariable ["searched",true,false];};

if (count _wreckLoot isEqualTo 0) exitWith {hint "C'est Vide !"; life_action_inUse = false; _wreck setVariable ["searched",true,false];};

if (dialog) exitWith {life_action_inUse = false;};
if (!createDialog "wreckSearchDialog") exitWith {hint "An error occured"; life_action_inUse = false;};

disableSerialization;

_itemList = CONTROL(25500,25503);
_editBox = CONTROL(25500,25504);
_editBox ctrlEnable false;
lbClear _itemList;

{	
	_displayName = M_CONFIG(getText,"VirtualItems",_x,"displayName");
	_itemList lbAdd format ["%1",localize _displayName];
	_itemList lbSetData [(lbSize _itemList) -1,_x];

} forEach _wreckLoot;

if (!(_wreck getVariable ["searched",true])) then {
	["treasure"] call life_fnc_addXP;
	["prof_treasure",2,100] call life_fnc_levelProfession;
	_wreck setVariable ["searched",true,false];
};

life_action_inUse = false;

sleep 2;