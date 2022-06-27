#include "..\..\script_macros.hpp"
/*
	File:fn_initSystem.sqf

	Autor:IronBlade
*/

waitUntil{!isNil "life_server_code"};

[] spawn life_fnc_initfatigue;
//[] spawn life_fnc_mapCreateMenu;
[] spawn life_fnc_papierInit;
[] spawn life_fnc_targetTrainingInit;

[] spawn life_fnc_phoneInit;
[] spawn life_fnc_invoiceMoneyLaunderingInit;

[] spawn life_fnc_effectSystem;
[] spawn life_fnc_radioSystemInit;
[] spawn life_fnc_depanInit;
[] spawn life_fnc_insurgeCheckZone;
[] spawn life_fnc_narcosCheckZone;

player setVariable ["___wsc___", true];