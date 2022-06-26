#include "..\..\script_macros.hpp"
/*
	File: fn_garageLBChange.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Can't be bothered to answer it.. Already deleted it by accident..
*/
diag_log "fn_garageLBChange";
disableSerialization;
private["_control","_index","_className","_classNameLife","_dataArr","_vehicleColor","_vehicleInfo","_trunkSpace","_sellPrice","_retrievePrice","_controlStartID","_vehicleStats"];
_control = SEL(_this,0);
_index = SEL(_this,1);

//Fetch some information.
_dataArr = CONTROL_DATAI(_control,_index);
_dataArr = call compile format["%1",_dataArr];
_className = SEL(_dataArr,0);
_classNameLife = _className;

if (!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _classNameLife)) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};

_vehicleColor = SEL(SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures"),SEL(_dataArr,1)),0);
if(isNil "_vehicleColor") then {_vehicleColor = "Default";};

_isAssureInfo = SEL(_dataArr,2);

_isAssure = "";
if (_isAssureInfo == 1) then {
	_isAssure = "<t color='#04B404'>Oui</t>";
} else {
	_isAssure = "<t color='#FF0000'>Non</t>";
};

_isIllegal = SEL(_dataArr,3);
_four = SEL(_dataArr,5);


_immatriculation = SEL(_dataArr,4);


if (_isIllegal == 1) then {
	_isIllegal = "Illégale";
} else {
	_isIllegal = "Enregistrée";
};

if (isClass(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife)) then {
	if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> _classNameLife >> "isIllegal") isEqualTo 1) then {
		_isIllegal = "Illégale";
	};
} else {
	_isIllegal = "Sans Plaque";
	_immatriculation = "Aucune";
};

_sellPrice = ([_classNameLife] call life_fnc_vehicleAssuranceCfg) select 1;

if(!(EQUAL(typeName _sellPrice,typeName 0)) OR _sellPrice < 1) then {_sellPrice = 1000};

//Should be slightly faster
_vehicleConfig = (configFile >> "CfgVehicles" >> _className);
_maxSpeed = getNumber (_vehicleConfig >> "maxSpeed");
_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_fuelCapacity = (_vehicleInfo select 12);
_armorRating = getNumber(_vehicleConfig >> "armor");
_trunkCapacity = [_className] call life_fnc_vehicleWeightCfg;
_assurance = ([_className] call life_fnc_vehicleAssuranceCfg) select 0;
_fourrierePrice = ([_className] call life_fnc_vehicleFourriereCfg) select 0;

_info = "Assurance:";
_infoValue = format["$%1", [_assurance] call life_fnc_numberText];

if (_four == 1) then {
	_info = "Montant fourrière:";
	_infoValue = format["$%1", [_fourrierePrice] call life_fnc_numberText];
};

(CONTROL(2800,2803)) ctrlSetStructuredText parseText format[
	(localize "STR_Shop_Veh_UI_SellP") + " <t color='#8cff9b'>$%1</t><br/>" + 
	(localize "STR_Shop_Veh_UI_Color") + " %2<br/>" +
	"Assuré: %3<br/>" +
	"%6 <t color='#8cff9b'>%7</t><br/>" +
	"Type: <t color='#8cff9b'>%4</t><br/>" +
	"Immatriculation: <t color='#8cff9b'>%5</t><br/>",
	[_sellPrice] call life_fnc_numberText,
	_vehicleColor,
	_isAssure,
	_isIllegal,
	_immatriculation,
	_info,
	_infoValue
];

_vehicleStats = [];
_vehicleStats pushBack ["Vitesse maximale", format["%1km/h", _maxSpeed], _maxSpeed/1059];
_vehicleStats pushBack ["Coffre", format["%1", _trunkCapacity], _trunkCapacity/425];
_vehicleStats pushBack ["Résistance",format["%1", _armorRating], _armorRating/5000];
_vehicleStats pushBack ["Réservoir d'essence", format["%1l", _fuelCapacity], _fuelCapacity/3000];
	
_controlStartID = 2810;
{

	CONTROL(2800,_controlStartID) progressSetPosition (_x select 2);
	CONTROL(2800,_controlStartID + 1) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t><t align = 'right'>%2</t>",(_x select 0), (_x select 1)];
	_controlStartID = _controlStartID + 2;

} forEach _vehicleStats;

if (_isAssureInfo == 1) then {
	ctrlEnable [2801, false];
} else {
	ctrlEnable [2801, true];	
};

ctrlShow [2803,true];
ctrlShow [2830,true];

_display = (findDisplay 2800);
_buttonGet = _display displayCtrl 2804;

if (_four == 1) then {
	_buttonGet ctrlSetText "Payer";
	ctrlShow [2801,false];
} else {
	_buttonGet ctrlSetText (localize "STR_Global_Retrieve");
	ctrlShow [2801,true];
};