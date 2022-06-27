#include "..\..\script_macros.hpp"
/*
    File: fn_saveGear.sqf
    Author: Bryan "Tonic" Boardwine
    Full Gear/Y-Menu Save by Vampire
    Edited: Itsyuka
    
    Description:
    Saves the players gear for syncing to the database for persistence..
*/
private["_return","_uItems","_bItems","_vItems","_pItems","_hItems","_yItems","_uMags","_vMags","_bMags","_pMag","_hMag","_lItems","_uni","_ves","_bag","_handled"];
_return = [];

/*
_return pushBack uniform player;
_return pushBack vest player;
_return pushBack backpack player;
_return pushBack goggles player;
_return pushBack headgear player;
_return pushBack assignedITems player;
if(playerSide == west || playerSide == civilian && {EQUAL(LIFE_SETTINGS(getNumber,"save_civ_weapons"),1)}) then {
    _return pushBack RIFLE;
    _return pushBack PISTOL;
    _return pushBack secondaryWeapon player;
} else {
    _return pushBack [];
    _return pushBack [];
    _return pushBack [];
};

_uItems = [];
_uMags  = [];
_bItems = [];
_bMags  = [];
_vItems = [];
_vMags  = [];
_pItems = [];
_hItems = [];
_lItems = [];
_yItems = [];
_uni = [];
_ves = [];
_bag = [];

if(!(EQUAL(uniform player,""))) then {
    {
        if (_x in (magazines player)) then {
            ADD(_uMags,[_x]);
        } else {
            ADD(_uItems,[_x]);
        };
    } forEach (uniformItems player);
};

if(!(EQUAL(backpack player,""))) then {
    {
        if (_x in (magazines player)) then {
            ADD(_bMags,[_x]);
        } else {
            ADD(_bItems,[_x]);
        };
    } forEach (backpackItems player);
};

if(!(EQUAL(vest player,""))) then {
    {
        if (_x in (magazines player)) then {
            ADD(_vMags,[_x]);
        } else {
            ADD(_vItems,[_x]);
        };
    } forEach (vestItems player);
};

if(count (primaryWeaponMagazine player) > 0 && alive player) then {
    _pMag = SEL((primaryWeaponMagazine player),0);
    
    if(!(EQUAL(_pMag,""))) then {
        _uni = player canAddItemToUniform _pMag;
        _ves = player canAddItemToVest _pMag;
        _bag = player canAddItemToBackpack _pMag;
        _handled = false;
        
        if(_ves) then {
            ADD(_vMags,[_pMag]);
            _handled = true;
        };
        
        if(_uni && !_handled) then {
            ADD(_uMags,[_pMag]);
            _handled = true;
        };
        
        if(_bag && !_handled) then {
            ADD(_bMags,[_pMag]);
            _handled = true;
        };
    };
};

if(count (handgunMagazine player) > 0 && alive player) then {
    _hMag = ((handgunMagazine player) select 0);
    
    if(!(EQUAL(_hMag,""))) then {
        _uni = player canAddItemToUniform _hMag;
        _ves = player canAddItemToVest _hMag;
        _bag = player canAddItemToBackpack _hMag;
        _handled = false;
        
        if(_ves) then {
            ADD(_vMags,[_hMag]);
            _handled = true;
        };
        
        if(_uni && !_handled) then {
            ADD(_uMags,[_hMag]);
            _handled = true;
        };
        
        if(_bag && !_handled) then {
            ADD(_uMags,[_hMag]);
            _handled = true;
        };
    };
};

if(count (secondaryWeaponMagazine player) > 0 && alive player) then {
    _lMag = ((secondaryweaponMagazine player) select 0);
    
    if(!(EQUAL(_lMag,""))) then {
        _uni = player canAddItemToUniform _lMag;
        _ves = player canAddItemToVest _lMag;
        _bag = player canAddItemToBackpack _lMag;
        _handled = false;
        
        if(_ves) then {
            ADD(_vMags,[_lMag]);
            _handled = true;
        };
        
        if(_uni && !_handled) then {
            ADD(_uMags,[_lMag]);
            _handled = true;
        };
        
        if(_bag && !_handled) then {
            ADD(_uMags,[_lMag]);
            _handled = true;
        };
    };
};

_backpackItemsCargo = weaponsItemsCargo backpackContainer player;

{
    _weapon = _x select 0;


} forEach _backpackItemsCargo;

_vestItemsCargo = weaponsItemsCargo vestContainer player;


if(count (RIFLE_ITEMS) > 0) then {
    {
        ADD(_pItems,[_x]);
    } forEach (primaryWeaponItems player);
};

if(count (PISTOL_ITEMS) > 0) then {
    {
        ADD(_hItems,[_x]);
    } forEach (handGunItems player);
};

if(count (secondaryWeaponItems player) > 0) then {
    {
        ADD(_lItems,[_x]);
    } forEach (secondaryWeaponItems player);
};
*/

_itemsconfig = "true" configClasses (missionconfigFile >> "VirtualItems"); 

_yItems = [];
_items = []; 
 
{
    _varname = getText(_x >> "variable"); 
    _items pushBack _varname;
 
} forEach _itemsconfig;

{
    _val = ITEM_VALUE(_x);
    if (_val > 0 && _val < 500) then {
        _yItems pushBack [_x,_val];
    };
} forEach _items;

/*
_return pushBack _uItems;
_return pushBack _uMags;
_return pushBack _bItems;
_return pushBack _bMags;
_return pushBack _vItems;
_return pushBack _vMags;
_return pushBack _pItems;
_return pushBack _hItems;
_return pushBack _lItems;
*/

_loadOut = (getUnitLoadout player);

// Uniform
_uniformData =+ _loadOut select 3;

if (count _uniformData > 0) then {
    _uniformItems = _uniformData select 1;

    _uniformItemFix = [];
    {
        _itemData = [_x, playerSide] call life_fnc_gearClearRadio;
        _uniformItemFix pushBack _itemData;
    } forEach _uniformItems;

    _uniformData set [1, _uniformItemFix];
    _loadOut set [3, _uniformData];
};


// Vest
_vestData =+ _loadOut select 4;

if (count _vestData > 0) then {
    _vestItems = _vestData select 1;
    _vestItemsFix = [];
    {
        _itemData = [_x, playerSide] call life_fnc_gearClearRadio;
        _vestItemsFix pushBack _itemData;
    } forEach _vestItems;

    _vestData set [1, _vestItemsFix];
    _loadOut set [4, _vestData];
};


// BankPack
_backPackData =+ _loadOut select 5;

if (count _backPackData > 0) then {
    _backPackItems = _backPackData select 1;
    _backPackItemsFix = [];
    {
        _itemData = [_x, playerSide] call life_fnc_gearClearRadio;
        _backPackItemsFix pushBack _itemData;
    } forEach _backPackItems;

    _backPackData set [1, _backPackItemsFix];
    _loadOut set [5, _backPackData];
};

// Linkeds
_linkeds =+ _loadOut select 9;
_linkedsFix = [_linkeds, playerSide] call life_fnc_gearClearRadio;
_loadOut set[9, _linkedsFix];

_return pushBack _loadOut;

if(EQUAL(LIFE_SETTINGS(getNumber,"save_virtualItems"),1)) then {
    _return pushBack _yItems;
} else {
    _return pushBack [];
};

life_gear = _return;