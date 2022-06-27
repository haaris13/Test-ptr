#include "..\..\script_macros.hpp"
/*
	Author: IronBlade

	Description:
	Check container if are in house and if house are owner of player and if all this conditions are true add container in database
*/
private["_container","_number","_type","_house","_containers","_houseCfg"];
_container = param [0,ObjNull,[ObjNull]];
_number = 1;
_uid = steamid;
_house = cursorTarget;
switch(true) do {
	case ((typeOf _container) == "CargoNet_01_box_F"): {_type = "storagebigEntre"};
	//case ((typeOf _container) == "Box_IND_Grenades_F") : {_type = "storagesmall"};
	default {_type = ""};
};

if (!isNull _house && _house isKindOf "House_F" && {player distance _house < 20}) then {

	_entID = _house getVariable ["ent_id","-1"];

	if(_entID == "-1") exitWith {
		[_container] spawn life_fnc_deleteVehicle;
		[true,_type,_number] call life_fnc_handleInv;
		["Error", "Le batiment n'est pas un batiment d'entreprise !"] spawn life_fnc_showPredefinedNotification;
	};



	if(!(_house in life_vehicles)) then {
		[_container] spawn life_fnc_deleteVehicle;
		[true,_type,_number] call life_fnc_handleInv;
		["Error", "Vous n'avez pas les clefs !"] spawn life_fnc_showPredefinedNotification;

	} else {

		_nbChest = getNumber(missionConfigFile >> "CfgEntreprise" >> _entID >> "nbChest");

		_containers = _house GVAR ["containers",[]];

		if(_nbChest == 0) exitWith {}; //What the fuck happened?
		if(count _containers >= _nbChest) then {
			[_container] spawn life_fnc_deleteVehicle;
			[true,_type,_number] call life_fnc_handleInv;
			["Error", localize "STR_ISTR_Box_HouseFull"] spawn life_fnc_showPredefinedNotification;
		} else {
			[_entID,_container] remoteExec ["TON_fnc_addChest",RSERV];
			_container SVAR ["Trunk",[[],0],true];
			//_container SVAR ["container_owner",[_uid],true];
			_container SVAR ["container_ent",_entID,true];
			_container allowDamage true;
			_containers pushBack _container;
			_house setVariable["containers",_containers,true];
		};
	};

} else {
	[_container] spawn life_fnc_deleteVehicle;
	[true,_type,_number] call life_fnc_handleInv;
	["Error", "Aucun batîment proche !"] spawn life_fnc_showPredefinedNotification;
};