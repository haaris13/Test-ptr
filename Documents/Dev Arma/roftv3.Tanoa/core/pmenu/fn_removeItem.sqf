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
//_isIllegal = ITEM_ILLEGAL(_data);
if (player getVariable ["playerSurrender",false]) exitWith {hint "Comment c'est possible avec les mains sur la tête ?!";};
if (player getVariable ["restrained",false]) exitWith {hint "Comment c'est possible avec les mains dans le dos ?!";};
if (life_nb_supress == 499) then {
  [format ["%1 supp %2",profileName, _data], getPlayerUID player, 3] remoteExecCall ["TON_fnc_logsAdmin",2];
};
if(EQUAL(_data,"")) exitWith {hint "Vous avez rien sélectionné à supprimer.";};
if(!([_value] call TON_fnc_isnumber)) exitWith {hint "Vous n'avez pas saisi un format de nombre réel."};
if(parseNumber(_value) <= 0) exitWith {hint "Vous devez entrer un montant réel que vous souhaitez supprimer."};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Ceci est un objet illégal et les flics sont à proximité, vous ne pouvez pas supprimer des preuves","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Vous ne pouvez pas supprimer un élément lorsque vous êtes dans un véhicule.","PLAIN"]};
if (life_nb_supress >= 500 && ((getNumber(missionConfigFile >> "VirtualItems" >> _data >> "type")) == 1)) exitWith {hint "Le propriétaire du champ ne tolére pas autant de gachis ! Allez vendre !";};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {hint "Impossible de supprimer autant de cet article, peut-être que vous n'avez pas ce montant?"};

if ((getNumber(missionConfigFile >> "VirtualItems" >> _data >> "type")) == 1 && !life_ent_contrat_jewel) then {
	life_nb_supress = life_nb_supress + (parseNumber _value);
	[11] call SOCK_fnc_updatePartial;

	//life_delete_time = time;
};

hint format["Vous avez réussi à retirer %1 %2 de votre inventaire.",(parseNumber _value),(localize ITEM_NAME(_data))];
	
[] call life_fnc_p_updateMenu;

// ligne 21 :EQUAL(ITEM_ILLEGAL(_data),1