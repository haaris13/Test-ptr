#include "..\..\script_macros.hpp"
/*
File: fn_placeObjectRoft.sqf
Author: Emmett Dalton

Description:
Met en place un objet
*/
private["_classname", "_object"];
_classname = _this select 0;

if (([false, _classname, 1] call life_fnc_handleinv)) then {
    
	closeDialog 2;
	_object = _classname createvehicle [0, 0, 0];
    _object setDamage 0;
    _object attachto[player, [0, 2.5, 0.5]];
    // _object setDir 90;
    // rotation de l'obj
    _object setVariable["item", "itemObjectDeployed", true];

    life_action_itemObjectDeploy = player addAction["<t color='#5CFF77'>Déposer</t>", {
        if (!isNull life_itemObject) then {
            detach life_itemObject;
            life_itemObject = objNull;
        };
        player removeAction life_action_itemObjectDeploy; life_action_itemObjectDeploy = nil;
    }, "", 999, false, false, "", '!isNull life_itemObject'];
    life_itemObject = _object;
    waitUntil {
        isNull life_itemObject;
    };
        
    if (!isnil "life_action_itemObjectDeploy") then {
        player removeAction life_action_itemObjectDeploy;
    };
    if (isNull _object) exitwith {
        life_itemObject = objNull;
    };
    
    //_object setPos [(getPos _object select 0), (getPos _object select 1), (getPosATL player select 2)+0.3];
    detach _object;
    sleep 2; // Attendre que l'objet soit bien sortie
    _object enableSimulation true;     
    _object allowDamage true; 
    
    life_action_itemObjectpickup = player addAction["<t color='#ff0000'>Ranger</t>", life_fnc_packupItemRoft, "", 0, false, false, "", 
		format ['_object = nearestobjects[getPos player, ["%1"], 2] select 0;
        !isnil "_object" && !isnil {
            (_object getVariable "item")
        }',_className],2];
        
        [_object] remoteExec ["TON_fnc_placeobjectRoft", RSERV];
    };