#include "..\..\script_macros.hpp"
/*
	File:fn_anticheat.sqf

	Autor:IronBlade
*/

// Init:

_shopsW = "true" configClasses (missionconfigFile >> "WeaponShops");

AntiCheat_AllowedItem = [];

{
	_name = configName(_x);
	_items = (M_CONFIG(getArray,"WeaponShops",_name,"primary"));

	_items = _items + (M_CONFIG(getArray,"WeaponShops",_name,"secondary"));
	_items = _items + (M_CONFIG(getArray,"WeaponShops",_name,"ammo"));
	_items = _items + (M_CONFIG(getArray,"WeaponShops",_name,"attachments"));
	_items = _items + (M_CONFIG(getArray,"WeaponShops",_name,"other"));


	{
		AntiCheat_AllowedItem pushBack (_x select 0);
	} forEach _items;

} forEach _shopsW;

_shopsV = "true" configClasses (missionconfigFile >> "Clothing");

{
	_name = configName(_x);
	_items = (M_CONFIG(getArray,"Clothing",_name,"uniforms"));

	_items = _items + (M_CONFIG(getArray,"Clothing",_name,"headgear"));
	_items = _items + (M_CONFIG(getArray,"Clothing",_name,"goggles"));
	_items = _items + (M_CONFIG(getArray,"Clothing",_name,"vests"));
	_items = _items + (M_CONFIG(getArray,"Clothing",_name,"backpacks"));
	
	{
		AntiCheat_AllowedItem pushBack (_x select 0);
	} forEach _items;

} forEach _shopsV;

// Config Craft

_configCraft = "MacGyver";
_macGyver = "true" configClasses (missionconfigFile >> _configCraft);

{
	_name = configName(_x);
	_type = (M_CONFIG(getNumber, _configCraft, _name, "type"));
	_item = (M_CONFIG(getText, _configCraft, _name, "item"));

	if (_type == 2) then {
		AntiCheat_AllowedItem pushBack _item;
	};
} forEach _macGyver;

AntiCheat_AllowedItem pushBack "muzzle_snds_L";

// Craft
AntiCheat_AllowedItem pushBack "optic_MRD";
AntiCheat_AllowedItem pushBack "U_O_V_Soldier_Viper_F";
AntiCheat_AllowedItem pushBack "V_TacVestIR_blk";
AntiCheat_AllowedItem pushBack "B_ViperLightHarness_blk_F";
AntiCheat_AllowedItem pushBack "B_ViperHarness_blk_F";
AntiCheat_AllowedItem pushBack "optic_ERCO_blk_F";
AntiCheat_AllowedItem pushBack "V_PlateCarrierGL_rgr";
AntiCheat_AllowedItem pushBack "V_PlateCarrierIAGL_dgtl";
AntiCheat_AllowedItem pushBack "V_PlateCarrierIAGL_oli";
AntiCheat_AllowedItem pushBack "U_B_T_Sniper_F";
AntiCheat_AllowedItem pushBack "U_O_T_Sniper_F";
AntiCheat_AllowedItem pushBack "U_I_GhillieSuit";
AntiCheat_AllowedItem pushBack "U_O_GhillieSuit";
AntiCheat_AllowedItem pushBack "Rangefinder";
AntiCheat_AllowedItem pushBack "muzzle_snds_acp";
AntiCheat_AllowedItem pushBack "optic_LRPS";
AntiCheat_AllowedItem pushBack "optic_LRPS_ghex_F";
AntiCheat_AllowedItem pushBack "optic_LRPS_tna_F";
AntiCheat_AllowedItem pushBack "U_I_FullGhillie_ard";
AntiCheat_AllowedItem pushBack "U_O_FullGhillie_ard";
AntiCheat_AllowedItem pushBack "U_B_FullGhillie_ard";
AntiCheat_AllowedItem pushBack "U_B_T_FullGhillie_tna_F";
AntiCheat_AllowedItem pushBack "U_I_FullGhillie_lsh";
AntiCheat_AllowedItem pushBack "U_O_FullGhillie_lsh";
AntiCheat_AllowedItem pushBack "U_B_FullGhillie_lsh";
AntiCheat_AllowedItem pushBack "U_I_FullGhillie_sard";
AntiCheat_AllowedItem pushBack "U_O_FullGhillie_sard";
AntiCheat_AllowedItem pushBack "U_B_FullGhillie_sard";
AntiCheat_AllowedItem pushBack "V_PlateCarrierSpec_rgr";
AntiCheat_AllowedItem pushBack "V_PlateCarrierSpec_mtp";
AntiCheat_AllowedItem pushBack "B_Bergen_hex_F";
AntiCheat_AllowedItem pushBack "B_Bergen_mcamo_F";
AntiCheat_AllowedItem pushBack "B_Bergen_dgtl_F";
AntiCheat_AllowedItem pushBack "B_Bergen_tna_F";
AntiCheat_AllowedItem pushBack "U_O_V_Soldier_Viper_hex_F";
AntiCheat_AllowedItem pushBack "V_PlateCarrierIA2_dgtl";
AntiCheat_AllowedItem pushBack "V_PlateCarrierIA1_dgtl";

// Weapons Level
AntiCheat_AllowedItem pushBack "srifle_DMR_01_F";	//	Rahim

AntiCheat_AllowedItem pushBack "srifle_DMR_06_camo_F";	// Mk14
AntiCheat_AllowedItem pushBack "srifle_DMR_06_olive_F";

AntiCheat_AllowedItem pushBack "srifle_EBR_F";	// Mk18

AntiCheat_AllowedItem pushBack "arifle_SPAR_03_blk_F";	// SPAR-17
AntiCheat_AllowedItem pushBack "arifle_SPAR_03_khk_F";
AntiCheat_AllowedItem pushBack "arifle_SPAR_03_snd_F";

AntiCheat_AllowedItem pushBack "srifle_DMR_03_F";		// Mk1-EMR
AntiCheat_AllowedItem pushBack "srifle_DMR_03_tan_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_03_khaki_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_03_multicam_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_03_woodland_F";

AntiCheat_AllowedItem pushBack "srifle_DMR_05_blk_F";	//	Cyrus
AntiCheat_AllowedItem pushBack "srifle_DMR_05_tan_f";
AntiCheat_AllowedItem pushBack "srifle_DMR_05_hex_F";



AntiCheat_AllowedItem pushBack "srifle_DMR_07_ghex_F";	// CMR
AntiCheat_AllowedItem pushBack "srifle_DMR_07_hex_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_07_blk_F";

AntiCheat_AllowedItem pushBack "srifle_DMR_02_camo_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_02_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_02_sniper_F";



AntiCheat_AllowedItem pushBack "srifle_DMR_04_Tan_F";
AntiCheat_AllowedItem pushBack "srifle_DMR_04_F";



AntiCheat_AllowedItem pushBack "srifle_LRR_F";
AntiCheat_AllowedItem pushBack "srifle_LRR_camo_F";
AntiCheat_AllowedItem pushBack "srifle_LRR_tna_F";



AntiCheat_AllowedItem pushBack "RPG7_F";
// GM6
AntiCheat_AllowedItem pushBack "srifle_GM6_F";
AntiCheat_AllowedItem pushBack "srifle_GM6_camo_F";
AntiCheat_AllowedItem pushBack "srifle_GM6_ghex_F";
AntiCheat_AllowedItem pushBack "U_C_Commoner1_1";

AntiCheat_AllowedItem pushBack "arifle_CTARS_ghex_F";
AntiCheat_AllowedItem pushBack "arifle_CTARS_hex_F";
AntiCheat_AllowedItem pushBack "arifle_CTARS_blk_F";
AntiCheat_AllowedItem pushBack "arifle_SPAR_02_snd_F";

//

[] spawn
{
	while {true} do
	{

		if (!life_god) then {
			player allowDamage true;
		};

		uiSleep 60;
		_nb = 0;
		{
			if (primaryWeapon _x == "LMG_03_F") then {
				_nb = _nb + 1;
			};
		} forEach units (group player);

		if (_nb > 1) then {
			["Attention le Nombre d'arme de Type LIM dans une Team est Limité (Voir Régles !) ! (Admin Prévenue !)"] remoteExecCall ["life_fnc_dynamicText", (group player)];
			[format ["Group de %1 Alert NB LIM %2",profileName, _nb], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
		};
	};
};

if (life_ftrNiv > 0) exitWith {};

[] spawn
{
	while {true} do
	{
		waitUntil {sleep 3; currentWeapon player == "MMG_01_tan_F"};
		if (currentWeapon player == "MMG_01_tan_F") then {
			removeAllWeapons player;
			_text = getText(configFile >> "CfgWeapons" >> "MMG_01_tan_F" >> "displayName");
			[format ["Alert %1 loot %2 [Admin Weapons]",profileName, _text], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
			player setDamage 1;
			player setVariable ["executed", true];

			uiSleep 10;

			["adminweapons"] spawn life_fnc_achievementLearn;
		};
	};
};

[] spawn
{
	while {true} do
	{
		waitUntil {sleep 3; uniform player in ["U_I_Protagonist_VR","U_B_Protagonist_VR","U_O_Protagonist_VR"]};
		if (uniform player in ["U_I_Protagonist_VR","U_B_Protagonist_VR","U_O_Protagonist_VR"]) then {
			player addUniform "";
			[format ["Alert %1 loot [Admin uniform]",profileName], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
			player setDamage 1;
			player setVariable ["executed", true];
		};
	};
};

[] spawn
{
	while {true} do
	{
		waitUntil {sleep 3; (vehicle player != player)};
		if ((typeOf (vehicle player) == "RHS_Stinger_AA_pod_USMC_WD") && (call life_euLevel) <= 0) then {
			moveOut player;
		};
	};
};


if (playerSide == west || playerSide == independent) exitWith {};

[] spawn {

	while {true} do {
		sleep (2 * 60);

		_itemList = [];

		_itemList pushBack uniform player;
		_itemList pushBack vest player;
		_itemList pushBack backpack player;
		_itemList pushBack goggles player;
		_itemList pushBack headgear player;
		_itemList pushBack RIFLE;
	    _itemList pushBack PISTOL;
	    _itemList pushBack secondaryWeapon player;

	    _itemList append (uniformItems player);

	    _itemList append (backpackItems player);

	    _itemList append (vestItems player);

	    _itemList append (primaryWeaponItems player);

	    _itemList append (secondaryWeaponItems player);

	    _itemList append (handGunItems player);

	    {
	    	if (_x != "") then {
	    		if ((!(_x in AntiCheat_AllowedItem)) && !life_dead && (_x find "tf_radio" == -1)) then {
	    			_text = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
	    			//[format ["Alert %1 give %2 [Cheat]",profileName, _text], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
	    		};
	    	};
		} forEach _itemList;
	};	
};


[] spawn {
	while {true} do {
		uiSleep (60);

		{
			_curator = _x;
			if (!isNull (getAssignedCuratorUnit _curator)) then {
				if ((getAssignedCuratorUnit _curator) == player) then {
					[format ["Alert %1 Zeus [Cheat]",profileName,_x], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
				};
			};
		} forEach [zeus_1, zeus_2];
	};
};


[] spawn
{
	while {true} do
	{
		uiSleep 10;
		if (life_mode_admin) then {
			life_mode_admin = false;
			[format ["Alert %1 [Mode Admin Actif]",profileName], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
		};
	};
};

[] spawn
{
	while {true} do
	{
		uiSleep 10;
		if (life_maxWeight > 300) then {
			[false] spawn life_fnc_reloadBackpack;
			[format ["Alert %1 Taille du sac: %2 !",profileName, life_maxWeight], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
		};
	};
};




[] spawn
{
	while {true} do
	{
		waitUntil {sleep 3; (goggles player) == "G_Goggles_VR"};
		if ((goggles player) == "G_Goggles_VR") then {
			removeGoggles player;
		};
	};
};

[] spawn
{
	while {true} do
	{
		uiSleep (2 * 60);
		if ((vehicle player != player) && ((vehicle player) isKindOf "Air")) then {

			_find = false;

			{

				_nb = ITEM_VALUE(configName _x);

				if (_nb > 0) then {
					_vInfo = typeOf (vehicle player);

					_plate = 0;

					[getPlayerUID player, 2, (configName _x), ITEM_VALUE(configName _x), _vInfo, (position player)] remoteExecCall ["TON_fnc_insertTrunkLogs", 2];
					
					_find = true;

					life_nb_supress = life_nb_supress + _nb;

					[false, (configName _x), _nb] call life_fnc_handleInv;
				};
			} foreach ("getNumber(_x >> 'type') isEqualTo 1" configClasses (missionConfigFile >> "VirtualItems"));

			if (_find) then {
				profileNamespace setVariable ["pr_life_nb_supress", life_nb_supress];
				["<t color='#ff0000'>Attention les Items de FARM doivent rester au SOL ! (Farm aérien interdit !)</t>"] call life_fnc_dynamicText;
				uiSleep (5 * 60);
			};
		};
	};
};