#include "..\..\..\script_macros.hpp"
#include "script_macros_custom.hpp"
/*
	File : fn_initMenuCustom.sqf

	Autor: IronBlade
*/

disableSerialization;
if(dialog) exitWith {};
if(vehicle player != player) exitWith {};

if (count (crew life_vehicle_to_custom) != 0) then {
	{
		[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
	} forEach (crew life_vehicle_to_custom);
};

life_custom_classVeh = typeOf life_vehicle_to_custom;
life_custom_texturesIndex = life_vehicle_to_custom getVariable ["Life_VEH_color",-1];

life_custom_newclassVeh = life_custom_classVeh;
life_custom_currentTextures = [];
life_custom_anims = [life_vehicle_to_custom] call life_fnc_getAnimationsVeh;

if(!createDialog "Life_Vehicle_Custom") exitWith {};

life_shop_cam = "CAMERA" camCreate markerPos "markshow_vehicle";
showCinemaBorder false;
life_shop_cam cameraEffect ["Internal", "Back"];
life_shop_cam camSetTarget (shop_vehicle_markObj modelToWorld [0,0,2]); 
life_shop_cam camSetPos (shop_vehicle_markObj modelToWorld [6,12,5]); 
life_shop_cam camSetFOV 0.85; 
life_shop_cam camSetFocus [50, 0]; 
life_shop_cam camCommit 0;

// Get Info
_customs = [];
_group = "";

{
	_groupClass = configName(_x);
	{
		if (configName _x == life_custom_classVeh) exitWith {
			_group = _groupClass;
		};
	} forEach ("true" configClasses (_x));
} forEach ("true" configClasses (missionConfigFile >> "CfgVehicleUpgrade"));

if (_group != "") then {
	{
		_class = (configName _x);
		_price = getNumber (_x >> "price");
		_condition = getArray (_x >> "condition");

		_customs pushBack [_class, _price, _condition];

	} forEach ("true" configClasses (missionConfigFile >> "CfgVehicleUpgrade" >> _group));
} else {
	_customs pushBack [life_custom_classVeh, 0, ["",""]];
};

life_custom_actualGroup = _group;

_textures = [];

// Init Dialog
_control = CONTROL(DisplayCustom,ListUpdgrade);
lbClear _control;

life_custom_actualIndex = -1;

// Populate
{
	_className = _x select 0;
	_price = _x select 1;
	_condition = _x select 2;

	_vehicleInfo = [_className] call life_fnc_fetchVehInfo;

	_control lbAdd (_vehicleInfo select 3);
	_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
	_control lbSetData [(lbSize _control)-1,_className];
	_control lbSetValue [(lbSize _control)-1,_ForEachIndex];

	_canBuy = true;
	_cond = false;

	// Condition

	_code = _condition select 0;
	_text = _condition select 1;

	if (_code != "") then {
		_canBuy = [] call (compile _code);
		_cond = true;
	};

	switch (true) do {
		case (!_canBuy && _cond) : {_control lbSetColor [(lbSize _control)-1,[1,0,0,1]];};
		default {}; 
	};

	if (_className == life_custom_classVeh) then {
		_control lbSetColor [(lbSize _control)-1, [0,0.7,0,1]];
		life_custom_actualIndex = ((lbSize _control)-1);
	};
} forEach _customs;

life_vehicle_custom_list = _customs;
lbSetCurSel [DisplayCustom, life_custom_actualIndex];

// Disable 
ctrlShow[ColorList,false];
ctrlShow[AnimList,false];
ctrlShow[CustomBackground,false];
ctrlShow[TitleAnim,false];
ctrlShow[AnimPriceText,false];

[] spawn life_fnc_initViewCustomVeh;

[] spawn life_fnc_updatePriceCustom;

waitUntil {isNull (findDisplay DisplayCustom)};

life_shop_cam cameraEffect ["TERMINATE","BACK"];
camDestroy life_shop_cam;

uiSleep 2;

if (!isNil "life_view_Vehicle") then {
	deleteVehicle life_view_Vehicle;
	life_view_Vehicle = objNull;
	life_view_Vehicle = nil;
};
