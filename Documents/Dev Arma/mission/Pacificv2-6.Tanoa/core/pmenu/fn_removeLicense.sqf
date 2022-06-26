#include "..\..\script_macros.hpp"
/*
	File: fn_removeLicense.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2101,(lbCurSel 2101)];

if(EQUAL(_data,"")) exitWith {["Error", "Vous avez rien sélectionné à supprimer."] spawn life_fnc_showPredefinedNotification;};
if(([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Vous ne pouvez pas retirer une license avec la police a proximité.","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Vous ne pouvez pas retirer une license en vehicules","PLAIN"]};


_varName = M_CONFIG(getText,"Licenses",_data,"variable");
_licenceName = M_CONFIG(getText,"Licenses",_data,"displayName");

closeDialog 0;

_action = [
	format["Voulez vous vraiment supprimer la licence %1, Attention vous l'aurez plus, faudra aller la racheter",_licenceName],
	"Suppression de licence",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	SVAR_MNS [_varName,false];
	["Error", "Vous avez rien sélectionné à supprimer."] spawn life_fnc_showPredefinedNotification;

	["remove", _data] spawn life_fnc_licenseActionEvent;
};