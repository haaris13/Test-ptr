#include "..\..\script_macros.hpp"
/*
    File: fn_loadGear.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description:
    Loads saved civilian gear, this is limited for a reason and that's balance.
*/
private["_itemArray","_handle","_gearToLoad"];
_gearToLoad = [_this,0,[],[[]]] call BIS_fnc_param;

//Fixes a bug?
if !(_gearToLoad isEqualTo []) then {
    _itemArray = _gearToLoad;
} else {
    _itemArray = life_gear;
};

waitUntil {!(isNull (findDisplay 46))};

_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Player combat logged, meh way to do it 
if (GVAR_MNS LICENSE_VARNAME("isdead","civ")) exitWith {


    switch (playerSide) do {
        case civilian : {[] call life_fnc_civLoadout};
        case west : {[] call life_fnc_copLoadout};
        case independent : {[] call life_fnc_medicLoadout};
    };


    SVAR_MNS [LICENSE_VARNAME("isdead","civ"),false];
};

if(EQUAL(count _itemArray,0)) exitWith {
    switch(playerSide) do {
        case west: {
            [] spawn life_fnc_copLoadout;
        };
        
        case civilian: {
            [] spawn life_fnc_civLoadout;
        };

        case independent: {
            [] spawn life_fnc_medicLoadout;
        };
    };
};

 _itemArray params [
    "_uniform",
    "_vest",
    "_backpack",
    "_goggles",
    "_headgear",
    ["_items",[]],
    "_prim",
    "_seco",
    "_launcher",
    ["_uItems",[]],
    ["_uMags",[]],
    ["_bItems",[]],
    ["_bMags",[]],
    ["_vItems",[]],
    ["_vMags",[]],
    ["_pItems",[]],
    ["_hItems",[]],
    ["_lItems",[]],
    ["_yItems",[]]
];



_isNotAllowed = {
    _item = _this;

    _notAllowedciv = ["tf_radio_gen","tf_radio_fed","tf_radio_cp_gen","tf_radio_cp_fed","tf_radio_ghost"];

    _bad = false;

    {
        if (_item find _x != -1) then {
            _bad = true;
        };
    } forEach _notAllowedciv;
    _bad;
};


if(!(EQUAL(_goggles,""))) then {_handle = [_goggles,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_headgear,""))) then {_handle = [_headgear,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_uniform,""))) then {_handle = [_uniform,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_vest,""))) then {_handle = [_vest,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_backpack,""))) then {_handle = [_backpack,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};

/* Hotfix for losing virtual items on login */
if(!isNil {SEL(_this,0)}) then {
    ADD(life_maxWeight,(round(FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(backpack player),"maximumload") / 4)));
};

{
    if (!(_x call _isNotAllowed)) then {
       _handle = [_x,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};
    };
} foreach _items;

{
    if (!(_x call _isNotAllowed)) then {
        player addItemToUniform _x;
    };
} foreach (_uItems);

{
    if (!(_x call _isNotAllowed)) then {
        player addItemToVest _x;
    };
} foreach (_vItems);

{
    if (!(_x call _isNotAllowed)) then {
        player addItemToBackpack _x;
    };
} foreach (_bItems);

{(uniformContainer player) addItemCargoGlobal [_x,1];} foreach (_uMags);
{(vestContainer player) addItemCargoGlobal [_x,1];} foreach (_vMags);
{(backpackContainer player) addItemCargoGlobal [_x,1];} foreach (_bMags);
life_maxWeight = 100;

diag_log _yItems;

{
    [true,SEL(_x,0),SEL(_x,1)] call life_fnc_handleInv;
} foreach (_yItems);

life_maxWeight = 24;
//Primary & Secondary (Handgun) should be added last as magazines do not automatically load into the gun.
if(!(EQUAL(_prim,""))) then {_handle = [_prim,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_seco,""))) then {_handle = [_seco,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if(!(EQUAL(_launcher,""))) then {_handle = [_launcher,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};

{
    if (!(EQUAL(_x,""))) then {
        player addPrimaryWeaponItem _x;
    };
} foreach (_pItems);
{
    if (!(EQUAL(_x,""))) then {
        player addHandgunItem _x;
    };
} foreach (_hItems);
{
    if (!(EQUAL(_x,""))) then {
        player addSecondaryWeaponItem _x;
    };
} foreach (_lItems);


[] call life_fnc_updateClothing;