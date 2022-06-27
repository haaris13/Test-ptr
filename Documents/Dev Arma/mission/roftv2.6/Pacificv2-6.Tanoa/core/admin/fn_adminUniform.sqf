#include "..\..\script_macros.hpp"
/*
	File: fn_adminUniform.sqf

	Autor:IronBlade
*/

_var = "adm_sup";

switch (FETCH_CONST(life_adminlevel)) do {
	case 2 : {_var = "adm_sup";}; 
	case 3 : {_var = "adm_mod";}; 
	case 4 : {_var = "adm_adm";}; 
	case 5 : {_var = "adm_staff";};
};

if (life_mode_admin) then {
	player setVariable [_var, true, true];
} else {
	player setVariable [_var, nil, true];
};

if (true) exitWith {};


removeAllItem = {
		RemoveAllWeapons player;
		{player removeMagazine _x;} foreach (magazines player);
		removeUniform player;
		removeVest player;
		removeBackpack player;
		removeGoggles player;
		removeHeadGear player;

		{
			player unassignItem _x;
			player removeItem _x;
		} foreach (assignedItems player);

		if (hmd player != "") then {
			player unlinkItem (hmd player);
		};
	};

if (life_mode_admin) then {

	[false] spawn life_fnc_reloadBackpack;

	player enableFatigue true;

	life_uniform_gear params [
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
	    ["_lItems",[]]
	];


	if(!(EQUAL(_goggles,""))) then {player addGoggles _goggles;} else {removeGoggles player;};
	if(!(EQUAL(_headgear,""))) then {player addHeadgear _headgear;} else {removeHeadgear player;};
	if(!(EQUAL(_uniform,""))) then {player forceAddUniform _uniform;} else {removeUniform player;};
	if(!(EQUAL(_vest,""))) then {player addVest _vest;}  else {removeVest player;};
	if(!(EQUAL(_backpack,""))) then {player addBackpackGlobal _backpack;} else {removeBackpack player;};

	if (_prim != "") then {player addWeapon _prim;} else {player removeWeapon (primaryWeapon player);};

	{player addItem _x; player assignItem _x;} foreach _items;

	{player addItemToUniform _x;} foreach (_uItems);
	{(uniformContainer player) addItemCargoGlobal [_x,1];} foreach (_uMags);
	{player addItemToVest _x;} foreach (_vItems);
	{(vestContainer player) addItemCargoGlobal [_x,1];} foreach (_vMags);
	{player addItemToBackpack _x;} foreach (_bItems);
	{(backpackContainer player) addItemCargoGlobal [_x,1];} foreach (_bMags);

	//Primary & Secondary (Handgun) should be added last as magazines do not automatically load into the gun.
	
	player addWeapon _seco;
	player addWeapon _launcher;

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

	life_uniform_gear = [];

	[] call life_fnc_updateClothing;

} else {
	life_uniform_gear = [];

	life_uniform_gear pushBack uniform player;
	life_uniform_gear pushBack vest player;
	life_uniform_gear pushBack backpack player;
	life_uniform_gear pushBack goggles player;
	life_uniform_gear pushBack headgear player;
	life_uniform_gear pushBack assignedITems player;
	life_uniform_gear pushBack RIFLE;
	life_uniform_gear pushBack PISTOL;
	life_uniform_gear pushBack secondaryWeapon player;

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

	life_uniform_gear pushBack _uItems;
	life_uniform_gear pushBack _uMags;
	life_uniform_gear pushBack _bItems;
	life_uniform_gear pushBack _bMags;
	life_uniform_gear pushBack _vItems;
	life_uniform_gear pushBack _vMags;
	life_uniform_gear pushBack _pItems;
	life_uniform_gear pushBack _hItems;
	life_uniform_gear pushBack _lItems;

	[] spawn {

		[false] spawn life_fnc_reloadBackpack;

		[] spawn removeAllItem;

		uiSleep 1;

		_uniform = "U_I_Protagonist_VR";
		_vest = "V_TacVestIR_blk";

		switch (FETCH_CONST(life_adminlevel)) do {
			case 2 : {_uniform = "U_I_Protagonist_VR";}; 
			case 3 : {_uniform = "U_B_Protagonist_VR";}; 
			case 4 : {_uniform = "U_O_Protagonist_VR";}; 
			case 5 : {_uniform = "U_O_Protagonist_VR"; _vest = "V_PlateCarrierSpec_blk";};
		};

		

		player forceAddUniform _uniform;
		for "_i" from 1 to 3 do {player addItemToUniform "150Rnd_93x64_Mag";};
		player addVest _vest;
		for "_i" from 1 to 2 do {player addItemToVest "150Rnd_93x64_Mag";};

		player addHeadgear "H_CrewHelmetHeli_B";

		player addWeapon "MMG_01_tan_F";
		player addPrimaryWeaponItem "muzzle_snds_93mmg_tan";
		player addPrimaryWeaponItem "optic_Holosight_blk_F";
		player addPrimaryWeaponItem "bipod_01_F_snd";
		
		player addWeapon "Rangefinder";
		player addItem "NVGoggles_tna_F";
		
		player linkItem "NVGoggles_tna_F";
		player linkItem "ItemMap";
		player linkItem "ItemCompass";
		player linkItem "ItemWatch";
		player linkItem "ItemGPS";

		player enableFatigue false;
	};
};

