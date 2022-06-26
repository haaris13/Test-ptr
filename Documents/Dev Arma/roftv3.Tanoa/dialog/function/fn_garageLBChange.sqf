#include "..\..\script_macros.hpp"
/*
    File: fn_garageLBChange.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Can't be bothered to answer it.. Already deleted it by accident..
*/
disableSerialization;
private ["_control","_index","_className","_classNameLife","_dataArr","_vehicleColor","_vehicleInfo","_trunkSpace","_sellPrice","_retrievePrice","_sellMultiplier","_price","_storageFee","_purchasePrice"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_dataArr = CONTROL_DATAI(_control,_index);
_dataArr = call compile format ["%1",_dataArr];
_className = (_dataArr select 0);
_classNameLife = _className;
if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife)) then {
    _classNameLife = "Default"; //Use Default class if it doesn't exist
    diag_log format ["%1: LifeCfgVehicles class doesn't exist",_className];
};

_vehicleColor = SEL(SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures"),SEL(_dataArr,1)),0);
if(isNil "_vehicleColor") then {_vehicleColor = "Default";};

_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_trunkSpace = [_className] call life_fnc_vehicleWeightCfg;

_price = M_CONFIG(getNumber,"LifeCfgVehicles",_classNameLife,"price");
_sellPrice = _price/2;

_retrievePrice = 0;
//hint format["%1 , %2 , %3 , %4 , %5 , %6 , %7 , %8 , %9 , %10 , %11 , %12 , %13",_dataArr select 1,_dataArr select 2,_dataArr select 3,_dataArr select 4,_dataArr select 5,_dataArr select 6,_dataArr select 7,_dataArr select 8,_dataArr select 9,_dataArr select 10,_dataArr select 11,_dataArr select 12,_dataArr select 13 ];

if (!(_sellPrice isEqualType 0) || _sellPrice < 1) then {_sellPrice = 500;};
if (!(_retrievePrice isEqualType 0) || _retrievePrice < 1) then {_retrievePrice = 0;};


_immatriculation = (_dataArr select 2);
if (isNil "_immatriculation") then {_immatriculation = "0";};

if (_immatriculation isEqualTo "0") then {_immatriculation = "Aucune"};

_vehicleConfig = configFile >> "CfgVehicles" >> _className;
_maxSpeed = getNumber (_vehicleConfig >> "maxSpeed");
_vehicleInfo = [_className]call life_fnc_fetchVehInfo;
_fuelCapacity = (_vehicleInfo select 12);
_fuel = round(_fuelCapacity * (_dataArr select 5));
_armorRating = getNumber(_vehicleConfig >> "armor");
_trunkCapacity = [_className] call life_fnc_vehicleWeightCfg;
//_assurance = ([_className] call life_fnc_vehicleAssuranceCfg) select 0;
(CONTROL(2800,2803)) ctrlSetStructuredText parseText format [
    "Plaque d'immatriculation : %6<br/>
    "+(localize "STR_Shop_Veh_UI_Color")+ " %5<br/>
    "+(localize "STR_Shop_Veh_UI_HPower")+ " %1<br/>
    "+(localize "STR_Shop_Veh_UI_PSeats")+ " %2<br/>
    "+(localize "STR_Shop_Veh_UI_Trunk")+ " %3<br/>
    "+(localize "STR_Shop_Veh_UI_Fuel")+ " %4 / %7 L
    ",
(_vehicleInfo select 11),
(_vehicleInfo select 10),
if (_trunkSpace isEqualTo -1) then {"None"} else {_trunkSpace},
_fuel,
_vehicleColor,
_immatriculation,
_fuelCapacity
];
(CONTROL(2800,2804)) ctrlSetStructuredText parseText format [
   (localize "STR_Shop_Veh_UI_SellP")+ " <t color='#8cff9b'>$%1</t><br/>
    "+ ([(_dataArr select 2),(_dataArr select 3),(_dataArr select 4)] call advanced_insurance_fnc_insuranceStatus)
    ,
[_sellPrice] call life_fnc_numberText
];
	
_vehicleStats = [];
_vehicleStats pushBack ["Vitesse maximale", format["%1km/h", _maxSpeed], _maxSpeed/1059];
_vehicleStats pushBack ["Coffre", format["%1", _trunkCapacity], _trunkCapacity/425];
_vehicleStats pushBack ["Resistance",format["%1", _armorRating], _armorRating/5000];
_vehicleStats pushBack ["Réservoir d'essence", format["%1l", _fuelCapacity], _fuelCapacity/3000];
	
_controlStartID = 2810;
{

	CONTROL(2800,_controlStartID) progressSetPosition (_x select 2);
	CONTROL(2800,_controlStartID + 1) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t><t align = 'right'>%2</t>",(_x select 0), (_x select 1)];
	_controlStartID = _controlStartID + 2;

}forEach _vehicleStats;

ctrlShow [2803,true];
ctrlShow [2830,true];
