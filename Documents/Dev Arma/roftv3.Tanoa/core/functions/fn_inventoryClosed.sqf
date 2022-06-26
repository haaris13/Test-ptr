#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Used for syncing house container data but when the inventory menu
	is closed a sync request is sent off to the server.
*/
private "_container";
_container = param [1,ObjNull,[ObjNull]];

player say3D "CloseInv";

if(isNull _container) exitWith {}; //MEH


if((typeOf _container) in ["CargoNet_01_box_F"]) exitWith {
	[_container] remoteExecCall ["TON_fnc_updateChestEntre",RSERV];

	_containerID = _container getVariable["container_id",-1];

	_log = format["Joueur : %1 Coffre Entreprise ID: %2", profileName, _containerID];

	[getPlayerUID player, 2, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

	[3] call SOCK_fnc_updatePartial;
	[8] call SOCK_fnc_updatePartial;
};

if (!(isNil {_container getVariable "inventory"})) exitWith {

	diag_log "Close";
	
	[_container, 1, getPosATL player] remoteExecCall ["TON_fnc_houseUpdate",RSERV];

	[3] call SOCK_fnc_updatePartial;
	[8] call SOCK_fnc_updatePartial;
};

if (!(isNil {_container getVariable "clan_inventory"})) exitWith {

	diag_log "Close";
	
	[_container, 1] remoteExec ["TON_fnc_clanHouseUpdate",RSERV];

	[3] call SOCK_fnc_updatePartial;
	[8] call SOCK_fnc_updatePartial;
};

if((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"]) exitWith {
	[_container] remoteExecCall ["TON_fnc_updateHouseContainers",RSERV];
	[3] call SOCK_fnc_updatePartial;
	[8] call SOCK_fnc_updatePartial;
};

life_isInInventory = false;

[3] call SOCK_fnc_updatePartial;
[8] call SOCK_fnc_updatePartial;