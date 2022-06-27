#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceOpenDiag.sqf

	Autor: IronBlade
*/

if (life_action_inUse) exitWith {};
if (playerside != civilian) exitWith {};
if (vehicle player != player) exitWith {};
if (!(['chimiste'] call life_fnc_hasPerk)) exitWith {["Error", "Vous n'avez pas les compétences requises !"] spawn life_fnc_showPredefinedNotification;};

_type = _this select 3;

if (_type == "") exitWith {};

disableSerialization;
createDialog 'chimieDialog_Ice';

life_iceChimie_type = _type;
life_iceChimie_action = true;

[] call life_fnc_iceInitGlobal;

// Init List
["list"] spawn life_fnc_iceUpdateDiag;
["button"] spawn life_fnc_iceUpdateDiag;
["fiole1"] spawn life_fnc_iceUpdateDiag;
["fiole2"] spawn life_fnc_iceUpdateDiag;

life_iceChimie_action = false;