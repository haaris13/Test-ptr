#include "..\..\script_macros.hpp"
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;

if (player getVariable ["playerSurrender",false]) exitWith {["Error", "Comment est ce possible avec les mains sur la tête ?!"] spawn life_fnc_showPredefinedNotification;};
if (player getVariable ["restrained",false]) exitWith {["Error", "Comment est ce possible avec les mains dans le dos ?!"] spawn life_fnc_showPredefinedNotification;};

if(EQUAL(_data,"")) exitWith {["Error", "Vous n'avez rien sélectionné à supprimer."] spawn life_fnc_showPredefinedNotification;};
if(!([_value] call TON_fnc_isnumber)) exitWith {["Error", "Vous n'avez pas saisi un format de nombre réel."] spawn life_fnc_showPredefinedNotification;};
if(parseNumber(_value) <= 0) exitWith {["Error", "Vous devez entrer un montant réel que vous souhaitez supprimer."] spawn life_fnc_showPredefinedNotification;};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Impossible près d'un gendarme.","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Vous ne pouvez pas supprimer un élément lorsque vous êtes dans un véhicule.","PLAIN"]};
if (life_nb_supress >= 250 && ((getNumber(missionConfigFile >> "VirtualItems" >> _data >> "type")) == 1)) exitWith {["Error", "Le propriétaire du champ ne tolére pas autant de gachis ! Allez vendre !"] spawn life_fnc_showPredefinedNotification;};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {["Error", "Impossible de retirer une grande partie de cet élément, peut-être que vous n'avez pas ce montant?"] spawn life_fnc_showPredefinedNotification;};

if ((getNumber(missionConfigFile >> "VirtualItems" >> _data >> "type")) == 1 && playerSide == civilian) then {
	life_nb_supress = life_nb_supress + (parseNumber _value);
	profileNamespace setVariable ["pr_life_nb_supress", life_nb_supress];
};

["Accepted", format["Vous avez réussi à retirer %1 %2 de votre inventaire.",(parseNumber _value),(localize ITEM_NAME(_data))]] spawn life_fnc_showPredefinedNotification;

if(ITEM_VALUE(_data) == 0) then {
	_description = CONTROL(2050,2024);
	lbClear _description;
	_description ctrlSetStructuredText parsetext "";
};

[] call life_fnc_p_updateMenu;