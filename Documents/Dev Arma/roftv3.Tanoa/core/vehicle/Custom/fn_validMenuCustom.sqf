#include "..\..\..\script_macros.hpp"
#include "script_macros_custom.hpp"
/*
	File : fn_validMenuCustom.sqf

	Autor: IronBlade
*/
disableSerialization;

_className =  lbData [ListUpdgrade,(lbCurSel ListUpdgrade)];
_color =  lbData [ListUpdgrade,(lbCurSel ListUpdgrade)];
_colorIndex = lbValue[ColorList,(lbCurSel ColorList)];

_priceUpgrade = 0;
_priceAnim = 0;
_priceTotal = 0;

if ((lbCurSel ListUpdgrade) == -1) exitWith {hint "Aucune Séléction !"; playSound "addItemFailed";};

if ((life_vehicle_to_custom distance player) > 25)  exitWith {
	closeDialog 0;

	deleteVehicle life_view_vehicle;
	life_view_vehicle = nil;
};

if (_className == life_custom_classVeh) then {

	// Color :
	
	if (_colorIndex != -1) then {
		if (_colorIndex != life_custom_texturesIndex) then {
			life_vehicle_to_custom setVariable["Life_VEH_color", _colorIndex, true];
			_priceTotal = 5000;
		};
	};

	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	{
		_anim = _x select 0;
		_price = _x select 2;

		if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
			_priceAnim = _priceAnim + _price;
		};
	} forEach _anims;

} else {

	// Upgrade
	_priceCurrent = getNumber(missionConfigFile >> "CfgVehicleUpgrade" >> life_custom_actualGroup >> life_custom_classVeh >> "price" );
	_priceNew = getNumber(missionConfigFile >> "CfgVehicleUpgrade" >> life_custom_actualGroup >> _className >> "price" );

	_priceUpgrade = _priceNew - _priceCurrent;

	if (_priceUpgrade < 0) then {_priceUpgrade = 0};

	_priceTotal = _priceTotal + _priceUpgrade;

	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	

	{
		_anim = _x select 0;
		_price = _x select 2;

		if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
			_priceAnim = _priceAnim + _price;
		};
	} forEach _anims;
};
_priceTotal = _priceTotal + _priceAnim;
_priceTotal = [_priceTotal] call life_fnc_priceRepCalc;


// Check Price

if (life_cash < _priceTotal) exitWith {
	closeDialog 0;
	playSound "addItemFailed";
	hint format["Vous n'avez pas l'argent nécésaire ! Manque: %1", [(_priceTotal - life_cash)] call life_fnc_numberText];
};

life_cash = life_cash - _priceTotal;

[0] call SOCK_fnc_updatePartial;

if (_className == life_custom_classVeh) then {
	if (_colorIndex != -1) then {
		if (_colorIndex != life_custom_texturesIndex) then {

			_textures = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "textures");
			_textures = (_textures select _colorIndex) select 2;

			{
				life_vehicle_to_custom setObjectTextureGlobal [_forEachIndex, _x];
			} forEach _textures;
		};
	};

	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	_validAnims = [];
	{
		_anim = _x select 0;

		if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
			life_vehicle_to_custom animate [_anim,  (life_view_vehicle animationphase _anim), true];
			if (_anim == "HideDoor2") then {life_vehicle_to_custom animate ["HideGlass2", 1, true];};
		};

		_validAnims pushBack [_anim, (life_view_vehicle animationphase _anim)];

		if (count _x > 3) then {

			_lock = false;

			if ((life_view_vehicle animationphase _anim) isEqualTo 0) then {
				_lock = true;
			};

			_locks = _x select 3;
			{
			  life_vehicle_to_custom lockCargo [_x, _lock];
			} forEach _locks;
		};

	} forEach _anims;

	[life_vehicle_to_custom, 1, _validAnims] remoteExecCall ["TON_fnc_customVehicle", 2];
	life_vehicle_to_custom spawn life_fnc_spawnIndicator;

	closeDialog 0;

} else {
	_pos = getPosATL life_vehicle_to_custom;
	_dir = getDir life_vehicle_to_custom;

	_vInfo = life_vehicle_to_custom getVariable["dbInfo",[]];
	_imma = life_vehicle_to_custom getVariable ["immatriculation", "NaI"];
	_assure = life_vehicle_to_custom getVariable ["assure", 0];

	deleteVehicle life_vehicle_to_custom;
	life_vehicle_to_custom = nil;

	uiSleep 0.5;

	// Create
	_vehicle = createVehicle [_className, _pos, [], 0, "NONE"];
	waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
	_vehicle allowDamage false;
	_vehicle setPos _pos;
	_vehicle setVectorUp (surfaceNormal _pos);
	_vehicle setDir _dir;

	// Set All Variables
	if (isClass(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle))) then {
		_vehicle setVariable ["immatriculation", _imma, true];
	};
	_vehicle setVariable ["dbInfo", _vInfo, true];
	[_vehicle] call life_fnc_clearVehicleAmmo;
	_vehicle setVariable ["ACE_isRepairVehicle", 0, true];
	[_vehicle,"info_life",12548,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	_vehicle setVariable ["assure",_assure, true];
	_vehicle lock 2;
	life_vehicles pushBack _vehicle;
	_vehicle disableTIEquipment true;
	_vehicle allowDamage true;

	if (_colorIndex != -1) then {
		_textures = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "textures");
		_textures = (_textures select _colorIndex) select 2;

		{
			_vehicle setObjectTextureGlobal [_forEachIndex, _x];
		} forEach _textures;

		_vehicle setVariable["Life_VEH_color", _colorIndex, true];
	};

	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	_validAnims = [];
	{
		_anim = _x select 0;
		_vehicle animate [_anim,  (life_view_vehicle animationphase _anim), true];
		_validAnims pushBack [_anim,  (life_view_vehicle animationphase _anim)];
	} forEach _anims;

	[_vehicle , 0, _validAnims] remoteExecCall ["TON_fnc_customVehicle", 2];
	_vehicle spawn life_fnc_spawnIndicator;

	closeDialog 0;
};

deleteVehicle life_view_vehicle;
life_view_vehicle = nil;