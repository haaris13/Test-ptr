#include "..\..\..\script_macros.hpp"
#include "script_macros_custom.hpp"
/*
	File : fn_lbchangeMenuCustom.sqf

	Autor: IronBlade
*/

disableSerialization;

_control = _this select 0;
_index = _this select 1;

_className = _control lbData _index;
_vIndex = _control lbValue _index;

_actualTab = (life_vehicle_custom_list select _vIndex);

// Price
_basePrice = _actualTab select 1; 
_basePrice = [_basePrice] call life_fnc_priceRepCalc;

_canBuy = true;
_cond = false;

// Condition
_textCond = "Niveau: Aucun<br/>Compétence: aucune";
_condition = (_actualTab select 2);

_code = _condition select 0;
if (_code != "") then {
	_canBuy = [] call (compile _code);
	_cond = true;
	_textCond = _condition select 1;
};


//Show Info
_vehicleConfig = configFile >> "CfgVehicles" >> _className;
_maxSpeed = getNumber (_vehicleConfig >> "maxSpeed");
_vehicleInfo = [_className]call life_fnc_fetchVehInfo;
_fuelCapacity = (_vehicleInfo select 12);
_armorRating = getNumber(_vehicleConfig >> "armor");
_trunkCapacity = [_className] call life_fnc_vehicleWeightCfg;

(CONTROL(DisplayCustom,VehicleInfomationList)) ctrlSetStructuredText parseText format[
	"Upgrade: <t color='#8cff9b'>$%1</t><br/>"+
	"%2",
	[_basePrice] call life_fnc_numberText,
	_textCond
];

_vehicleStats = [];
_vehicleStats pushBack ["Vitesse maximale", format["%1km/h", _maxSpeed], _maxSpeed/1059];
_vehicleStats pushBack ["Coffre", format["%1", _trunkCapacity], _trunkCapacity/425];
_vehicleStats pushBack ["Resistance",format["%1", _armorRating], _armorRating/5000];
_vehicleStats pushBack ["Réservoir d'essence", format["%1l", _fuelCapacity], _fuelCapacity/3000];
	
_controlStartID = MaxSpeedProgress;
{

	CONTROL(DisplayCustom,_controlStartID) progressSetPosition (_x select 2);
	CONTROL(DisplayCustom,_controlStartID + 10) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t><t align = 'right'>%2</t>",(_x select 0), (_x select 1)];
	
	ctrlShow[_controlStartID,true];
	ctrlShow[_controlStartID + 10,true];
	_controlStartID = _controlStartID + 1;

} forEach _vehicleStats;

// Textures list
_ctrlTexture = CONTROL(DisplayCustom,ColorList);
lbClear _ctrlTexture;


// Gestion Couleurs :

// Filtre

_flagF = [];

if (life_custom_texturesIndex != -1) then {
	_flagF = ((getArray(missionConfigFile >> "LifeCfgVehicles" >> life_custom_classVeh >> "textures")) select life_custom_texturesIndex) select 1;
};

_filtre = false;
_canFlag = [];

if ((life_vehicle_to_custom isKindOf "Air") && (_flagF in ["reb"]) && life_custom_type == "civ") exitWith {
	closeDialog 0;
	hint "C'est Impossible pour ce Véhicule Ici !";
};

switch (true) do {

	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["civ"]) && life_custom_type == "reb") : {_canFlag = ["civ","reb"]; _filtre = true;};
	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["civ"]) && life_custom_type == "civ") : {_canFlag = ["civ"]; _filtre = true;};

	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["reb"]) && life_custom_type == "reb") : {_canFlag = ["reb","civ"]; _filtre = true;};
	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["reb"]) && life_custom_type == "civ") : {_canFlag = ["civ"]; _filtre = true;};

	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["mafia"]) && life_custom_type == "civ") : {_canFlag = ["civ","mafia"]; _filtre = true;};
	case ((life_vehicle_to_custom isKindOf "Car") && (_flagF in ["mafia"]) && life_custom_type == "reb") : {_canFlag = ["civ","mafia","reb"]; _filtre = true;};

	case ((life_vehicle_to_custom isKindOf "Air") && (_flagF in ["reb"]) && life_custom_type == "reb") : {_canFlag = ["reb"]; _filtre = true;};
	case ((life_vehicle_to_custom isKindOf "Air") && (_flagF in ["civ"]) && life_custom_type == "civ") : {_canFlag = ["civ"]; _filtre = true;};
	case ((life_vehicle_to_custom isKindOf "Air") && (_flagF in ["civ"]) && life_custom_type == "reb") : {_canFlag = ["civ","reb"]; _filtre = true;};

	default {_canFlag = []; _filtre = false;}; 
};

_colorArray = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "textures");

_colorIndex = -1;
life_custom_currentTextures = [];

_textures = 0;

// Map Color
if (count _colorArray > 0) then {

	{
		_textureName = _x select 0;
		_flag = _x select 1;
		_texture = _x select 2;

		if ((!_filtre || (_filtre && _flag in _canFlag)) && !(_flag in ["cop","sos","med"])) then {

			_ctrlTexture lbAdd _textureName;
			_ctrlTexture lbSetValue [(lbSize _ctrlTexture)-1,_forEachIndex];

			if (_forEachIndex isEqualTo life_custom_texturesIndex && _className == life_custom_classVeh) then {
				life_custom_colorIndex = (lbSize _ctrlTexture)-1;
				_ctrlTexture lbSetColor [(lbSize _ctrlTexture)-1,[0,0.7,0,1]];
			};

			_textures = _textures + 1;
		};
	} foreach _colorArray;

	if (_className == life_custom_classVeh) then {
		_ctrlTexture lbSetCurSel life_custom_colorIndex;
		_colorIndex = life_custom_colorIndex;
	} else {
		_ctrlTexture lbSetCurSel 0;
		_colorIndex = 0;
	};

	if (_textures == 0) then {
		ctrlShow[ColorList,false];
	} else {
		ctrlShow[ColorList,true];
	};	
} else {
	ctrlShow[ColorList,false];
};

life_custom_newclassVeh = _className;

if (_colorIndex != -1) then {
	life_custom_newTexturesIndex = lbValue[ColorList,(lbCurSel ColorList)];
} else {
	life_custom_newTexturesIndex = -1;
};

[_className, life_custom_newTexturesIndex] call life_fnc_updateViewCustomVeh;

// Map Anims : 
_anims = M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,_className,"addons");
_checkboxTextures = [
	tolower gettext (configfile >> "RscCheckBox" >> "textureUnchecked"),
	tolower gettext (configfile >> "RscCheckBox" >> "textureChecked")
];

if (count _anims > 0) then {

	_ctrlAnim = CONTROL(DisplayCustom,AnimList);

	lbClear _ctrlAnim;

	_vehToAnim = life_view_Vehicle;

	if (_className == life_custom_classVeh) then {
		_vehToAnim = life_vehicle_to_custom;
	};

	{
		_anim = _x select 0;

		_displayName = getText (_vehicleConfig >> "animationSources" >> _anim >> "displayName");
		_lbAdd = _ctrlAnim lbadd _displayName;
		_ctrlAnim lbsetdata [_lbAdd,_anim];
		_ctrlAnim lbsetpicture [_lbAdd,_checkboxTextures select ((_vehToAnim animationphase _anim) max 0)];

		life_view_Vehicle animate [_anim, (_vehToAnim animationphase _anim), true];

	} forEach _anims;

	ctrlShow[AnimList,true];
	ctrlShow[TitleAnim,true];
	ctrlShow[AnimPriceText,true];
	ctrlShow[CustomBackground,true];

} else {
	ctrlShow[AnimList,false];
	ctrlShow[TitleAnim,false];
	ctrlShow[CustomBackground,false];
	ctrlShow[AnimPriceText,false];
};

_condition = getArray(missionConfigFile >> "CfgVehicleUpgrade" >> life_custom_actualGroup >> _className >> "condition");

_canBuy = true;

// Condition

_code = _condition select 0;
_text = _condition select 1;

if (_code != "") then {
	_canBuy = [] call (compile _code);
};

if (!_canBuy) then {
	ctrlEnable[ValidCustom,false];
} else {
	ctrlEnable[ValidCustom, true];
};

[] spawn life_fnc_updatePriceCustom;

true;