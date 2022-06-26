#include "..\..\script_macros.hpp"
/*
	File: fn_clothingMenu.sqf
	Author: Bryan "Tonic" Boardwine, IronBlade

	Description:
	Opens and initializes the clothing store menu.
*/
private["_list","_clothes","_pic","_filter","_oldBev","_pos","_oldPos","_oldDir","_flag","_shopTitle","_license","_shopSide","_exit"];
_exit = false;


/* License check & config validation */
if(!isClass(missionConfigFile >> "Clothing" >> (SEL(_this,3)))) exitWith {}; //Bad config entry.
_shopTitle = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"title");
_shopSide = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"side");
_license = M_CONFIG(getText,"Clothing",(SEL(_this,3)),"license");
if(!(EQUAL(_license,""))) then {
	_flag = M_CONFIG(getText,"Licenses",_license,"side");
	if(!(LICENSE_VALUE(_license,_flag))) exitWith {hint localize "STR_Shop_Veh_NoLicense"; _exit = true;};
};
if(_exit) exitWith {};

_flag = switch(playerSide) do {case west: {"cop"}; case independent: {"med"}; default {"civ"};};
if(!(EQUAL(_flag,_shopSide))) exitWith {};

_var = (SEL(_this,3));

if (_var == "sud" && ((group player) getVariable ["clan_id", -1]) != 90) exitWith {
	hint "Vous ne faites pas Parti du Sud !";
};

//ctrlSetText [3103,localize _shopTitle];
//ctrlSetText [3103,"Clothing Shop"];

/* Open up the menu */
createDialog "Life_Clothing";

disableSerialization;

(findDisplay 3100) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {closeDialog 0; [] call life_fnc_playerSkins;}"]; //Fix Custom Skin after ESC

//Cop / Civ Pre Check
if((SEL(_this,3) in ["bruce","dive","reb","kart"] && playerSide != civilian)) exitWith {hint localize "STR_Shop_NotaCiv"; closeDialog 0;};
//if((SEL(_this,3) isEqualTo "ins" && !license_civ_insurgent)) exitWith {hint "You are not allowed to access this shop"; closeDialog 0;};
if((SEL(_this,3) in ["cop"] && playerSide != west)) exitWith {hint localize "STR_Shop_NotaCop"; closeDialog 0;};
if((SEL(_this,3) in ["dive"] && !license_civ_dive)) exitWith { hint localize "STR_Shop_NotaDive"; closeDialog 0;};

if((SEL(_this,3) in ["depan"] && !license_civ_dep)) exitWith { "Vous n'êtes pas dépanneur"; closeDialog 0;};

if((SEL(_this,3) in ["onu"] && playerSide != civilian)) exitWith { hint "Vous ne faites pas parti de l'onu !"; closeDialog 0;};
if((SEL(_this,3) in ["onu"] && (call life_euLevel) <= 0)) exitWith { hint "Vous ne faites pas parti de l'onu !"; closeDialog 0;};
if ((SEL(_this,3) in ["security"]) && !('security' in life_entreprises)) exitWith {closeDialog 0;};

_pos = [1000,1000,10000];
_oldDir = getDir player;
_oldPos = visiblePositionASL player;
_oldBev = behaviour player;


player switchMove "";
player setBehaviour "SAFE";
life_clothing_store = SEL(_this,3);

/* Store license check */
if(isClass(missionConfigFile >> "Licenses" >> life_clothing_store)) then {
	_flag = M_CONFIG(getText,"Licenses",life_clothing_store,"side");
	_displayName = M_CONFIG(getText,"Licenses",life_clothing_store,"displayName");
	if(!(LICENSE_VALUE(life_clothing_store,_flag))) exitWith {
		hint format[localize "STR_Shop_YouNeed",localize _displayName];
		closeDialog 0;
	};
};

["Shop","Clothing",false] spawn life_fnc_showHelp;

[] spawn life_fnc_initInfoGear;

//initialize camera view

life_shop_cam = "CAMERA" camCreate getPos player;
showCinemaBorder false;
life_shop_cam cameraEffect ["Internal", "Back"];
life_shop_cam camSetTarget (player modelToWorld [0,0,1]);
life_shop_cam camSetPos (player modelToWorld [1,4,2]);
life_shop_cam camSetFOV .33;
life_shop_cam camSetFocus [50, 0];
life_shop_cam camCommit 0;
life_cMenu_lock = false;


if(isNull (findDisplay 3100)) exitWith {};
_list = (findDisplay 3100) displayCtrl 3101;
_filter = (findDisplay 3100) displayCtrl 3105;
lbClear _filter;
lbClear _list;

_filter lbAdd localize "STR_Shop_UI_Clothing";
_filter lbAdd localize "STR_Shop_UI_Hats";
_filter lbAdd localize "STR_Shop_UI_Glasses";
_filter lbAdd localize "STR_Shop_UI_Vests";
_filter lbAdd localize "STR_Shop_UI_Backpack";

_filter lbSetCurSel 0;

life_oldClothes = uniform player;
life_olduniformItems = uniformItems player;
life_oldBackpack = backpack player;
life_oldVest = vest player;
life_oldVestItems = vestItems player;
life_oldBackpackItems = backpackItems player;
life_oldGlasses = goggles player;
life_oldHat = headgear player;

[] call life_fnc_playerSkins;


/* Default to the uniform filter */
[0,0] call life_fnc_clothingFilterShop;


// -- wait until the clothing shop is closed 
waitUntil {isNull (findDisplay 3100)};
{if(_x != player) then {_x hideObject false;};} foreach playableUnits;


player setBehaviour _oldBev;
life_shop_cam cameraEffect ["TERMINATE","BACK"];
camDestroy life_shop_cam;

life_clothing_filter = 0;

if(isNil "life_clothesPurchased") exitWith {
	life_clothing_purchase = [-1,-1,-1,-1,-1];
	if(life_oldClothes != "") then {player addUniform life_oldClothes;} else {removeUniform player};
	if(life_oldHat != "") then {player addHeadgear life_oldHat} else {removeHeadgear player;};
	if(life_oldGlasses != "") then {player addGoggles life_oldGlasses;} else {removeGoggles player};
	if(backpack player != "") then {
		if(life_oldBackpack == "") then {
			removeBackpack player;
		} else {
			removeBackpack player;
			player addBackpack life_oldBackpack;
			clearAllItemsFromBackpack player;
			if(count life_oldBackpackItems > 0) then {
				{
					[_x,true,true] call life_fnc_handleItem;
				} foreach life_oldBackpackItems;
			};
		};
	};

	if(count life_oldUniformItems > 0) then {
		{[_x,true,false,false,true] call life_fnc_handleItem;} foreach life_oldUniformItems;
	};

	if(vest player != "") then {
		if(life_oldVest == "") then {
			removeVest player;
		} else {
			player addVest life_oldVest;
			if(count life_oldVestItems > 0) then {
				{[_x,true,false,false,true] call life_fnc_handleItem;} foreach life_oldVestItems;
			};
		};
	};
	[] call life_fnc_playerSkins;
};
life_clothesPurchased = nil;

//Check uniform purchase.
if((life_clothing_purchase select 0) == -1) then {
	if(life_oldClothes != uniform player) then {player addUniform life_oldClothes;};
};
//Check hat
if((life_clothing_purchase select 1) == -1) then {
	if(life_oldHat != headgear player) then {if(life_oldHat == "") then {removeHeadGear player;} else {player addHeadGear life_oldHat;};};
};
//Check glasses
if((life_clothing_purchase select 2) == -1) then {
	if(life_oldGlasses != goggles player) then {
		if(life_oldGlasses == "") then  {
			removeGoggles player;
		} else {
			player addGoggles life_oldGlasses;
		};
	};
};
//Check Vest
if((life_clothing_purchase select 3) == -1) then {
	if(life_oldVest != vest player) then {
		if(life_oldVest == "") then {removeVest player;} else {
			player addVest life_oldVest;
			{[_x,true,false,false,true] call life_fnc_handleItem;} foreach life_oldVestItems;
		};
	};
};

//Check Backpack
if((life_clothing_purchase select 4) == -1) then {
	if(life_oldBackpack != backpack player) then {
		if(life_oldBackpack == "") then {removeBackpack player;} else {
			removeBackpack player;
			player addBackpack life_oldBackpack;
			{[_x,true,true] call life_fnc_handleItem;} foreach life_oldBackpackItems;
		};
	};
};

life_clothing_purchase = [-1,-1,-1,-1,-1];
[] call life_fnc_saveGear;
