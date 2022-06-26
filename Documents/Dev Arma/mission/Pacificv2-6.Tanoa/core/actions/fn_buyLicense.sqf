#include "..\..\script_macros.hpp"
/*
	File: fn_buyLicense.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called when purchasing a license. May need to be revised.
*/
private["_type","_varName","_displayName","_sideFlag","_price"];
_type = CONTROL_DATA(15001);

waitUntil{!isNil "life_server_code"};


if (_type isEqualTo "") exitWith {["Warning", "Vous n'avez pas sélectionné une licence à acheter !"] spawn life_fnc_showPredefinedNotification};
if(!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith {}; //Bad entry?
_varName = M_CONFIG(getText,"Licenses",_type,"variable");
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_varName,_sideFlag);

if (_type == "insurge" && life_playerlevel < 15) exitWith {
	["Error", "Vous êtes trop Jeune sur cette Ile !"] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
};

closeDialog 0;
uiSleep 0.2;

// Insurge
_good = true;
if (_type == "insurge") then {
	_group = group player;

	if (isNull _group) exitWith {_good = false;};

	_idClan = _group getVariable ["clan_id", -1];
	if (_idClan == -1) exitWith {_good = false;};

	_members = (_group getVariable ["clan_members", []]);
	if ((count _members) < 3) exitWith {_good = false;};
};

if (!_good) exitWith {
	["Error", "Il faut étre dans un clan. Et avec au moins 3 membres pour pouvoir acheter la license narcos."] spawn life_fnc_showPredefinedNotification;
};

if (license_civ_mafia && _type == "insurge") exitWith {
	["Error", "Impossible vous avez déja l'entrainement mafieux."] spawn life_fnc_showPredefinedNotification;
};

if (license_civ_insurge && _type == "mafia") exitWith {
	["Error", "Impossible vous avez déja l'entrainement narcos."] spawn life_fnc_showPredefinedNotification;
};

_good = true;
if (_type in ["insurge", "mafia"]) then {
	_action = [
		format["Voulez vous vraiment acheter la licence %1, Attention, c'est un choix entre #### ou mafia, il sera impossible de revenir en arrière.", localize _displayName],
		"Acheter la license ?",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
	] call BIS_fnc_guiMessage;

	if (!_action) then {_good = false;};
};

if (!_good) exitWith {};

if(CASH < _price) exitWith {
	["Error", format[localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName]] spawn life_fnc_showPredefinedNotification
};

SUB(CASH,_price);

[0] call SOCK_fnc_updatePartial;
["Accepted", format[localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
SVAR_MNS [_varName,true];

[2] call SOCK_fnc_updatePartial;

["add", _type] spawn life_fnc_licenseActionEvent;

closeDialog 0;