#include "..\..\script_macros.hpp"
/*
    File: fn_virt_menu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initialize the virtual shop menu.
*/
private["_shop"];
_shop = _this select 3;
if(isNil {_shop}) exitWith {};
private _cnt = {side _x isEqualTo west} count playableUnits;
life_shop_type = _shop;
life_shop_npc = _this select 0;
if (_shop == "cop" && playerSide != west) exitWith {hint localize "STR_NOTF_NotACop"};
if (_shop == "medic" && playerSide != independent) exitWith {hint "Vous n'étes pas médecin !"};
if (_shop == "depan" && !license_civ_dep) exitWith {hint "Vous n'étes pas dépaneur !"};
if (_shop == "mafia" && !license_civ_mafia) exitWith {hint "Vous n'avez pas l'entrainement Mafieux !"};
if (_shop == "polloPalace" && !("polloPalacePlus" in life_entreprises)) exitWith {hint "Je ne vous connais pas !"};
//if (_shop == "drugdealer" and _cnt < 3) ExitWith {hint format ["Désolé %1 mais il n'y a que %2 Policier de connecté, il en faut au-moins 3 tu ne peux pas vendre ce type d'objet.",name player,_cnt];};


createDialog "shops_menu";

[] call life_fnc_virt_update;

["Shop","Item",false] spawn life_fnc_showHelp;