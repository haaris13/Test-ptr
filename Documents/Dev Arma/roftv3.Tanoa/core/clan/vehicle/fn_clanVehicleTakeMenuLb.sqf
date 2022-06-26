#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleTakeMenuLb.sqf

	Autor: IronBlade
*/

_list = CONTROL(6900,6902);

if (lbCurSel _list == -1) exitWith {};

_value = _list lbValue (lbCurSel _list);

_current = life_clan_house_vehicles select _value;

_classNameLife = _current select 1;
//hint format["%1 %2 %3 %4 %5 %6 %7 %8 %9 %10 %11 %12 %13",(_current select 1) ,(_current select 2) ,(_current select 3) ,(_current select 4) ,(_current select 5) ,(_current select 6) ,(_current select 7) ,(_current select 8) ,(_current select 9) ,(_current select 10) ,(_current select 11)  ,(_current select 12) ,(_current select 13) ];
_vehicleColor = SEL(SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_classNameLife,"textures"),SEL(_current,4)),0);
if(isNil "_vehicleColor") then {_vehicleColor = "Default";};
/*
_isAssure = _current select 6;

if (_isAssure >= 1) then {
	_isAssure = "Oui";
} else {
	_isAssure = "Non";
};
*/
_immatriculation = _current select 8;

_isIllegal = _current select 7;

if (_isIllegal) then {
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

//_sellPrice = ([_classNameLife] call life_fnc_vehicleAssuranceCfg) select 1;
_date = call compile SEL(_current,9);
if(!(EQUAL(typeName _sellPrice,typeName 0)) OR _sellPrice < 1) then {_sellPrice = 1000};

//Should be slightly faster
_vehicleConfig = configFile >> "CfgVehicles" >> _classNameLife;
_maxSpeed = getNumber (_vehicleConfig >> "maxSpeed");
_vehicleInfo = [_classNameLife] call life_fnc_fetchVehInfo;
_fuelCapacity = (_vehicleInfo select 12);
_fuel = round(_fuelCapacity * (_current select 5));
_armorRating = getNumber(_vehicleConfig >> "armor");
_trunkCapacity = [_classNameLife] call life_fnc_vehicleWeightCfg;
_assurance = ([_classNameLife] call life_fnc_vehicleAssuranceCfg) select 0;

(CONTROL(6900,6903)) ctrlSetStructuredText parseText format[ 
	(localize "STR_Shop_Veh_UI_Fuel")+ " <t color='#8cff9b'>%1 /%4</t><br/>"+
	([(_current select 6),_date,(_current select 10)] call advanced_insurance_fnc_insuranceStatus)+
	"Immatriculation: <t color='#8cff9b'>%2</t><br/>",
	_fuel,
	_immatriculation,
	_fuelCapacity
];

_vehicleStats = [];
_vehicleStats pushBack ["Vitesse maximale", format["%1km/h", _maxSpeed], _maxSpeed/1059];
_vehicleStats pushBack ["Coffre", format["%1", _trunkCapacity], _trunkCapacity/425];
_vehicleStats pushBack ["Resistance",format["%1", _armorRating], _armorRating/5000];
_vehicleStats pushBack ["Réservoir d'essence", format["%1l", _fuelCapacity], _fuelCapacity/3000];
	
_controlStartID = 6910;
{

	CONTROL(6900, _controlStartID) progressSetPosition (_x select 2);
	CONTROL(6900, _controlStartID + 1) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t><t align = 'right'>%2</t>",(_x select 0), (_x select 1)];
	_controlStartID = _controlStartID + 2;

}forEach _vehicleStats;
