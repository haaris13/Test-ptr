#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionVideFiole.sqf

	Autor: IronBlade
*/

_type = [_this,0,"",[""]] call BIS_fnc_param;

if (life_iceChimie_action) exitWith {diag_log "life_iceChimie_action !";};

_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgFluids = (_cfgChimie >> "Fluids");
_cfgResultats = (_cfgChimie >> "Resultats");

_fiole = [];

switch (_type) do {

	case "fiole1" : {
		_fiole = (life_iceChimie_fiole select 0);
	};

	case "fiole2" : {
		_fiole = (life_iceChimie_fiole select 1);
	};
};

_amount = _fiole select 0;
_fluidArray =  _fiole select 1;
_fluidCfg =  _fluidArray select 0;
_fluidPure =  _fluidArray select 1;

if (_amount == 0) exitWith {hint "La Fiole est Vide !";};

_result = getArray(_cfgFluids >> _fluidCfg >> "result");

if (count _result == 0) exitWith {hint "Ce fluide est irrécuparable dans cette état !"};

life_iceChimie_action = true;

_resultItem = "";

{
	_resultArray = _x;
	_resultCfg = _resultArray select 0;
	_resultPure = _resultArray select 1;

	if (_resultPure <= _fluidPure) then {
		_resultItem = _resultCfg;
	};
} forEach _result;
hint str(_fluidPure);
if (_resultItem == "") exitWith {hint "Ce produit est trop mauvais pour étre récupéré !"};

_amountResult = ceil (_amount / (getNumber(_cfgResultats >> _fluidCfg >> "nbWant")));

life_iceChimie_result pushBack [_resultItem, _amountResult];

for "_i" from _amount to 0 step -1 do {

	_fiole set[0, _i];

	uiSleep 0.5;
	
	[_type, "amount"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;
};

switch (_type) do {

	case "fiole1" : {
		life_iceChimie_fiole set[0, Chimie_Empty];
	};

	case "fiole2" : {
		life_iceChimie_fiole set[1, Chimie_Empty];
	};
};

_log = format["Chimie Recup: %1, %2", profileName, _resultItem];

[getPlayerUID player, 3, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

[] call life_fnc_iceSaveGlobalVar;

[_type] call life_fnc_iceUpdateFioleGlobal;

[] call life_fnc_iceInitList;

life_iceChimie_action = false;