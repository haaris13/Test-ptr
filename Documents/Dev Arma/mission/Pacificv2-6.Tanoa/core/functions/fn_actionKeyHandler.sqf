#include "..\..\script_macros.hpp"
/*
    File: fn_actionKeyHandler.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Master action key handler, handles requests for picking up various items and
    interacting with other players (Cops = Cop Menu for unrestrain,escort,stop escort, arrest (if near cop hq), etc).
*/ 

private["_curTarget","_isWater","_curObject"];
_curTarget = cursorTarget;
_curObject = cursorObject;
if(life_action_inUse) exitWith {}; //Action is in use, exit to prevent spamming.
if(life_interrupted) exitWith {life_interrupted = false;};
_isWater = surfaceIsWater (visiblePositionASL player);
 
if(EQUAL(LIFE_SETTINGS(getNumber,"global_ATM"),1)) then {
    //Check if the player is near an ATM.
    if((call life_fnc_nearATM) && {!dialog}) exitWith {

        _distance = (player distance2D (markerPos "lbank_1"));
        if (_distance < 50) then {
            [1] call life_fnc_atmMenu;
        } else {
            [] call life_fnc_atmMenu;
        };
    };
};

if ((vehicle player) != player) then {
    _object = nearestObject [position player, "Land_BarGate_F"];
    if (((playerSide == west || playerSide == independent)) && (!isNull _object) && (alive _object) && ((getPosATL player) distance (position _object)) < 15) exitWith {
        if (_object animationPhase "Door_1_rot" == 1) then {
            _object animate ["Door_1_rot", 0];
        } else {
            _object animate ["Door_1_rot", 1];
        };
    };
};

if ((vehicle player) != player) then {
    _object = nearestObject [position player, "Land_ConcreteWall_01_m_gate_F"];
    if (((playerSide == west || playerSide == independent)) && (!isNull _object) && (alive _object) && ((getPosATL player) distance (position _object)) < 15) exitWith {
        if (_object animationPhase "door_1_move" == 1) then {
            _object animate ["door_1_move", 0];
        } else {
            _object animate ["door_1_move", 1];
        };
    };

    _object = nearestObject [position player, "Land_ConcreteWall_01_l_gate_F"];
    if (((playerSide == west || playerSide == independent)) && (!isNull _object) && (alive _object) && ((getPosATL player) distance (position _object)) < 15) exitWith {
        if (_object animationPhase "door_1_move" == 1) then {
            _object animate ["door_1_move", 0];
        } else {
            _object animate ["door_1_move", 1];
        };
    };
};

if (dialog) exitWith {}; //Don't bother when a dialog is open.


_checkZone = false;
if (isNull _curTarget) then {
    _checkZone = true;
} else {
    if (player distance _curTarget > 7) then {
        _checkZone = true;
    } else {
        if (isPlayer _curTarget) exitWith {
            if (isPlayer _curTarget && (player distance _curTarget) > 3) exitWith {
                _checkZone = true;
            };
        };

        if (!(_curTarget isKindOf "landVehicle" || _curTarget isKindOf "Ship" || _curTarget isKindOf "Air")) then {
            _checkZone = true;
        };
    };
};

//Shitty way to improve gather zones with cursorObject being used
if (_checkZone && playerSide == civilian) then {
    _zone = [] call life_fnc_nearestZone;
    if (_zone select 0 != "") exitWith {
        switch (_zone select 1) do {
            case "gather": {[_zone select 0] spawn life_fnc_gather;};
            case "mine": {[_zone select 0] spawn life_fnc_mine;};
            case "shovel": {[_zone select 0] spawn life_fnc_shovel;};
            case "axe": {[_zone select 0] spawn life_fnc_axe;};
            case "cut": {[_zone select 0] spawn life_fnc_cut;};
            case "filet": {[_zone select 0] spawn life_fnc_filet;};
            default {};
        };
    };
};

if ((typeOf _curTarget == "Land_MetalCase_01_large_F") && !(isNil {_curTarget getVariable "items"})) exitWith {
    switch (playerSide) do { 
        case west : {[] spawn life_fnc_fixChestBank;}; 
        case civilian : {[] spawn life_fnc_breakChestBank;};
    };
};

//Your not targeting anything, but might be in a specific zone
if (isNull _curObject) then {
    if(_isWater) then {

        private ["_fish"];
        _fish = (nearestObjects[visiblePosition player,["Fish_Base_F"],3]) select 0;
        if(!isNil "_fish") exitWith {
            [_fish] call life_fnc_catchFish;
        };

    } else {

        if(playerSide == civilian && !life_action_gathering) then {
            _zone = [] call life_fnc_nearestZone;
            switch (_zone select 1) do {
                case "gather": {[_zone select 0] spawn life_fnc_gather;};
                case "mine": {[_zone select 0] spawn life_fnc_mine;};
                case "shovel": {[_zone select 0] spawn life_fnc_shovel;};
                case "axe": {[_zone select 0] spawn life_fnc_axe;};
                case "cut": {[_zone select 0] spawn life_fnc_cut;};
                case "filet": {[_zone select 0] spawn life_fnc_filet;};
                default {};
            };
        };
    };
};

if ((isNull _curObject) && (isNull _curTarget)) exitWith {};

if(vehicle player != player) exitWith {["Error", "Vous ne pouvez pas utiliser la touche d’action à l’intérieur d’un véhicule !"] spawn life_fnc_showPredefinedNotification;}; //He's in a vehicle, cancel!
life_action_inUse = true;

if ((player distance _curObject < 15) && ((_curObject in life_explorer_wreck) || _curObject in life_explorer_caisses)) exitWith {
    [_curObject] spawn life_fnc_searchWreck;
};
 
if ([] call life_fnc_isBankChest) then {
    [] spawn life_fnc_bankInteraction;
};

//Fire
if(((typeOf _curObject) isEqualTo "Campfire_burning_F") && ((_curObject getVariable ["placedBy",false]) isEqualTo getPlayerUID player)) exitWith {
   [_curObject] spawn life_fnc_deleteVehicle;
   life_campfires = life_campfires - 1;
};

if ((typeOf _curObject) in (life_placeables_classes)) then {
    switch (true) do {
        case ((playerSide in [west,independent])) : {
            [] spawn life_fnc_removeObject;
        };
        case (!(isNil "life_depanLevel") && (playerSide == civilian)) : {
            if ((call(life_depanLevel) > 0)) then {
                [] spawn life_fnc_removeObject;
            };
        };
    };
};

if ((_curObject isKindOf "House_F" && {player distance _curObject < 12})) exitWith {

    if (_curObject getVariable ["ent_id","-1"] != "-1") then {
        [_curObject] call life_fnc_buildingEntrepriseMenu;
    } else {

        if (isClass(missionConfigFile >> "CfgClan" >> "Building" >> typeOf _curObject)) then {
            [_curObject] call life_fnc_clanHouseInteraction;
        } else {
            [_curObject] call life_fnc_houseInteractionMenu;
        };
    };    
};

//Temp fail safe.
[] spawn {
    sleep 60;
    life_action_inUse = false;
};

//Check if it's a dead body.

if (_curTarget isKindOf "Man" || life_mode_medic) then {
    if(!dialog && life_mode_admin) then {
        [_curTarget] call admin_fnc_adminCIVInteractionMenu;
    };

    if(!dialog && playerSide == independent) then {
        [_curTarget] call life_fnc_medInteractionMenu;
    };
};

//If target is a player then check if we can use the menus.
if(isPlayer _curTarget && _curTarget isKindOf "Man") then {
 
    if (player distance _curTarget <= 4) then {

        //Cop stuff
        if(!dialog && playerSide == west) then {
            [_curTarget] call life_fnc_copInteractionMenu;
        };
        
        //Civ stuff
        if(!dialog && playerSide == civilian) then {
            [_curTarget] call life_fnc_civInteractionMenu;
        };

        //Med stuff
        if(!dialog && playerSide == independent) then {
            [_curTarget] call life_fnc_medInteractionMenu;
        };
    };
} else {

    //OK, it wasn't a player so what is it?
    private["_isVehicle","_miscItems","_money","_list"];
 
    _list = ["landVehicle","Ship","Air"];
    _isVehicle = if(KINDOF_ARRAY(_curTarget,_list)) then {true} else {false};
    _miscItems = ["Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F","Land_Suitcase_F","Land_BakedBeans_F","Land_CerealsBox_F","Land_RiceBox_F","Land_Can_V3_F","Land_Can_V2_F","Land_Can_V1_F","Land_Shovel_F","Land_Axe_F","AluminiumFoil_01_F","Land_BottlePlastic_V1_F","Land_GasCanister_F","Land_HumanSkull_F","Land_CanisterPlastic_F","Land_DisinfectantSpray_F"];
    _animalTypes = ["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F","Turtle_F"];
    _money = "Land_Money_F";
 
    //It's a vehicle! open the vehicle interaction key!

    if(_isVehicle) then {
        if(!dialog) then {
            if(player distance _curTarget < SEL(SEL(boundingBox _curTarget,1),0)+2) then {
                if (life_mode_admin) then {
                    [_curTarget] call admin_fnc_adminVInteractionMenu;
                } else {
                    [_curTarget] call life_fnc_vInteractionMenu;
                };
            };            
        };
    } else {
        //Is it a animal type?
        if((typeOf _curObject) in _animalTypes) then {
            if(EQUAL((typeOf _curObject),"Turtle_F") && !alive _curObject) then {
                private "_handle";
                _handle = [_curObject] spawn life_fnc_catchTurtle;
                waitUntil {scriptDone _handle};
            } else {
                private "_handle";
                _handle = [_curObject] spawn life_fnc_catchFish;
                waitUntil {scriptDone _handle};
            }; 
        } else {
            //OK, it wasn't a vehicle so let's see what else it could be?
             if((typeOf _curObject) in _miscItems) then {
             [_curObject,player,false] remoteExecCall ["TON_fnc_pickupAction",RSERV];

            } else {
              //It wasn't a misc item so is it money?
                if(EQUAL((typeOf _curObject),_money) && {!(_curObject GVAR ["inUse",false])}) then {
                    [_curObject,player,true] remoteExecCall ["TON_fnc_pickupAction",RSERV];
                };
            };
        };
    };
};