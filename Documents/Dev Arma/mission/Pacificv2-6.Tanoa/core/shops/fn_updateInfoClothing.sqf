#include "..\..\script_macros.hpp"
/*
	File: fn_updateInfoClothing.sqf

	Autor: IronBlade
*/
_class = [_this,0,"",[""]] call BIS_fnc_param;
_arrayCond = [_this, 1, [], [[]]] call BIS_fnc_param;

_dialogID = 3100;
_controlStartID = 3201;
_controlEndID = 3204;

_textCond = "Niveau: Aucun<br/>Compétence: aucune";

if ((count _arrayCond) > 0) then {
	_textCond = _arrayCond select 1;
};

_itemCfg = "";

if (!isClass (configFile >> "cfgweapons" >> _class)) then {
	_itemCfg = (configFile >> "cfgvehicles" >> _class);
} else {
	_itemCfg = (configFile >> "cfgweapons" >> _class);
};

_clothingCfg = (missionConfigFile >> "CfgClothing" >> _class);

(CONTROL(_dialogID,3107)) ctrlSetStructuredText parseText format[ 
	"Nom: %1<br/>" +
	"Type: %2<br/>" +
	"Inventaire: %4<br/>" +
	"%3<br/>",
	getText(_itemCfg >> "displayName"),
	getText(_itemCfg >> "descriptionShort"),
	_textCond,
	getNumber(_clothingCfg >> "weight")
];


if (life_clothing_filter in [2]) exitWith { // Bad Categ Shop

	for "_i" from _controlStartID to _controlEndID do {
		CONTROL(_dialogID, _i) ctrlShow false;
		CONTROL(_dialogID, _i + 10) ctrlShow false;
	};
};

_statsGear = [_class] call life_fnc_getInfoGear;

if (count _statsGear > 0) then {

	{
		if (count _x > 0) then {
			_statValue = _x select 0;
			_statText = _x select 1;

			CONTROL(_dialogID,_controlStartID) progressSetPosition _statValue;
			CONTROL(_dialogID,_controlStartID + 10) ctrlSetStructuredText parseText format ["<t align = 'left'>%1</t>",_statText];
			
			CONTROL(_dialogID, _controlStartID) ctrlShow true;
			CONTROL(_dialogID,_controlStartID + 10) ctrlShow true;

			_controlStartID = _controlStartID + 1;
		};
	} forEach _statsGear;

	if (_controlStartID < _controlEndID) then {
		for "_i" from _controlStartID to _controlEndID do {
			CONTROL(_dialogID, _i) ctrlShow false;
			CONTROL(_dialogID, _i + 10) ctrlShow false;
		};
	};

} else {
	for "_i" from _controlStartID to _controlEndID do {
		CONTROL(_dialogID, _i) ctrlShow false;
		CONTROL(_dialogID, _i + 10) ctrlShow false;
	};
};
