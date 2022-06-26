#include "..\..\script_macros.hpp"
/*
	File:fn_eatItemResto.sqf

	Autor:IronBlade
*/
_item = [_this,0,"",[""]] call BIS_fnc_param;
/*
_markConfVar = getText(missionconfigFile >> "CfgEntreprise" >> "kaelevra" >> "mapMarkVar");
_markConfText = getArray(missionconfigFile >> "CfgEntreprise" >> "kaelevra" >> "mapMarkText");

_etat = 1;

if (markerText _markConfVar == (_markConfText select 0)) then {
	_etat = 0;
} else {
	_etat = 1;
};

if ((player distance (markerPos "ent_spawn_kaelevra") > 250) || _etat == 1) exitWith {
	titleText ["Vous devez consommer sur place !","PLAIN DOWN"]; titleFadeOut 4;
};
*/
if(!([false,_item,1] call life_fnc_handleInv)) exitWith {};

if (_item == "tacos") exitWith {
	[_item,true] spawn life_fnc_launchAtouts;
	["tacos"] call life_fnc_addXP;
};

if (_item == "tacosp") exitWith {
	[_item,true] spawn life_fnc_launchAtouts;
	["tacosp"] call life_fnc_addXP;
};

if (life_eat) exitWith {hint "Vous étes en train de manger !";};
life_eat = true;

["Kaelevra",_item,true] spawn life_fnc_showHelp;

player say3D "Eat";

life_thirst = 100;
life_hunger = 100;

[] call life_fnc_hudUpdate;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_upp = "Récupération de réputation";
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0;

_bad = false;

while{true} do {
	sleep 0.30;
	_cP = _cP + 0.001;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!(alive player)) exitWith {_bad = true;};
	if(player != vehicle player) exitWith {_bad = true;};
	//if (player distance (markerPos "ent_spawn_kaelevra") > 70) exitWith {_bad = true;};
};

5 cutText ["","PLAIN"];

life_eat = false;

if (_bad) exitWith {};

player say3D "Eat";

switch (_item) do {
	case "tajin" : {
		[true,250] call life_fnc_changeRep;

		if ((damage player) > 0.25) then {
			[player] call ace_medical_treatment_fnc_fullHealLocal;
		};
	};

	case "platJour" : {
		[true,500] call life_fnc_changeRep;

		if ((independent countSide playableUnits) == 0) then {
			[player] call ace_medical_treatment_fnc_fullHealLocal;
		};
	};

};
