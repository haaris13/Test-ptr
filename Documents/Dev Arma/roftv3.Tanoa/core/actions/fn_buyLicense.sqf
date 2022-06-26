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

if (_type isEqualTo "") exitWith {hint "Vous n'avez pas sélectionné une licence a acheter!"};
if(!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith {}; //Bad entry?
_varName = M_CONFIG(getText,"Licenses",_type,"variable");
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_varName,_sideFlag);

if (_type == "insurge" && license_civ_insurge_syndik) exitWith {
	playSound "addItemFailed";
	hint "Le Syndikat ne vous veut plus dans le mouvement !";
	closeDialog 0;
};

if (_type == "insurge" && life_playerlevel < 20) exitWith {
	playSound "addItemFailed";
	hint "Vous étes trop Jeune sur cette Ile !";
	closeDialog 0;
};

if(CASH < _price) exitWith {playSound "addItemFailed"; hint format[localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};

_action = true;

if (_action) then {

	SUB(CASH,_price);

	[0] call SOCK_fnc_updatePartial;

	titleText[format[localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText],"PLAIN"];
	SVAR_MNS [_varName,true];
};

[_type] call max_permisPoints_fnc_permisLicenseCheck;


closeDialog 0;

//-- Close shop
