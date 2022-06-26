#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopLBChange.sqf
		
	Author: Tonic, IronBlade
	    
	Description:
		- Called when a new selection is made in the list box and displays various bits of information about the vehicle.

*/


disableSerialization;
private["_control","_index","_className","_classNameLife","_basePrice","_vehicleConfig","_vehicleStats","_colorArray","_ctrl","_maxSpeed","_fuelCapacity","_trunkCapacity","_armorRating","_controlStartID"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_className = _control lbData _index;
_classNameLife = _className;
_vIndex = _control lbValue _index;

_vehicleList = M_CONFIG(getArray,"CfgCarShops",SEL(life_veh_shop,0),"vehicles");

if (["preparateur"]call life_fnc_hasPerk && (SEL(life_veh_shop,0)) == "reb_car") then {
	_vehicleList pushBack ["B_G_Offroad_01_armed_F", 800000, ["insurge"], ["", "", -1]];
	_vehicleList pushBack ["O_T_LSV_02_armed_F", 1200000, ["insurge"], ["", "", -1]];
};

_basePrice = SEL(SEL(_vehicleList,_vIndex),1);

_basePrice = (["sop_vehicle", _basePrice] call life_fnc_gouvTaxesCalc);

_basePrice = [_basePrice] call life_fnc_priceRepCalc; //krep
if (["Negociant"] call life_fnc_hasPerk) then {
	_basePrice = _basePrice * 0.9;
};
_canBuy = true;
_cond = false;

_vehicleArray = (_vehicleList select _vIndex);

// Condition
_textCond = "Niveau: Aucun<br/>Compétence: aucune";
if ((count _vehicleArray) == 5) then {
	_code = (_vehicleArray select 4) select 0;
	if (_code != "") then {
		_canBuy = [] call (compile _code);
		_cond = true;
		_textCond = (_vehicleArray select 4) select 1;
	};
};

//Should be slightly faster
_vehicleConfig = configFile >> "CfgVehicles" >> _className;
_maxSpeed = getNumber (_vehicleConfig >> "maxSpeed");
_vehicleInfo = [_className]call life_fnc_fetchVehInfo;
_horsepower = (_vehicleInfo select 11);
_fuelCapacity = (_vehicleInfo select 12);
_armorRating = getNumber(_vehicleConfig >> "armor");
_trunkCapacity = [_className] call life_fnc_vehicleWeightCfg;


ctrlShow [2330,true];
(CONTROL(2300,2303)) ctrlSetStructuredText parseText format[
	(localize "STR_Shop_Veh_UI_Ownership")+ " <t color='#8cff9b'>$%1</t><br/>"+
	(localize "STR_Shop_Veh_UI_PSeats")+ " <t color='#8cff9b'>%2</t><br/>" +
	"%3",
	[round(_basePrice * 1.5)] call life_fnc_numberText,
	(_vehicleInfo select 10),
	_textCond
];

_vehicleStats = [];
_vehicleStats pushBack ["Vitesse maximale", format["%1km/h", _maxSpeed], _maxSpeed/1059];
if (_horsepower >= 1) then {
_vehicleStats pushBack ["Puissance", format["%1 Chevaux", _horsepower], _horsepower/2000];  
};

_vehicleStats pushBack ["Coffre", format["%1", _trunkCapacity], _trunkCapacity/425];
_vehicleStats pushBack ["Resistance",format["%1", _armorRating], _armorRating/5000];
//_vehicleStats pushBack ["Réservoir d'essence", format["%1l", _fuelCapacity], _fuelCapacity/3000];
	
_controlStartID = 2310;
{

	CONTROL(2300,_controlStartID) progressSetPosition (_x select 2);
	CONTROL(2300,_controlStartID + 1) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t><t align = 'right'>%2</t>",(_x select 0), (_x select 1)];
	_controlStartID = _controlStartID + 2;

}forEach _vehicleStats;

// Textures list
_ctrl = CONTROL(2300,2304);
lbClear _ctrl;

if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};

_colorArray = M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures");

_anims = M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"addons");

_color = [];

{
	_flag = SEL(_x,1);
	_textureName = SEL(_x,0);
	_texture = _x select 2;

	if(EQUAL(SEL(life_veh_shop,2),_flag)) then {

		_ctrl lbAdd _textureName;
		_ctrl lbSetValue [(lbSize _ctrl)-1,_forEachIndex];

		_colorC = [];

		{
			_colorC pushBack [_forEachIndex, _x];
		} forEach _texture;

		_color pushBack _colorC;
	};
} foreach _colorArray;

lbSetCurSel[2304,0];
if((lbSize _ctrl)-1 != -1) then {
	ctrlShow[2304,true];
	[_className, _color select 0, []] spawn life_fnc_vehicleViewUpdate;
} else {
	ctrlShow[2304,false];
	[_className, [], []] spawn life_fnc_vehicleViewUpdate;
};

if(_className in (LIFE_SETTINGS(getArray,"vehicleShop_rentalOnly"))) then {
	ctrlEnable [2309,false];
} else {
	if(!(life_veh_shop select 3)) then {
		ctrlEnable [2309,true];
	};
};

switch (true) do {
	case (_canBuy && _cond) : { ctrlEnable [2309, true];};
	case (!_canBuy && _cond) : { ctrlEnable [2309,false];};
	default { ctrlEnable [2309, true];}; 
};

true;