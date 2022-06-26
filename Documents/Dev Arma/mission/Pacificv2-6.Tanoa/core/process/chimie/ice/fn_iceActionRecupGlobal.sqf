#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionRecupGlobal.sqf

	Autor: IronBlade
*/

if (count life_iceChimie_result == 0) exitWith {["Error", "Il y a rien à récupérer !"] spawn life_fnc_showPredefinedNotification;};

{
	_item = _x select 0;
	_ammount = _x select 1;

	if ((isClass(missionConfigFile >> "VirtualItems" >> _item))&& _ammount > 0) then {

		_nbCan = 0;
		for "_i" from 1 to _ammount do {
			if ([true,_item, 1] call life_fnc_handleInv) then {
				_nbCan = _nbCan + 1;
			};
		};

		if ((_ammount - _nbCan) > 0) then {
			life_iceChimie_result set[_forEachIndex, [_item, (_ammount - _nbCan)]];
		} else {
			life_iceChimie_result deleteAt _forEachIndex;
		};
	} else {
		diag_log "No VItem !";
	};

} forEach life_iceChimie_result;

[] call life_fnc_iceSaveGlobalVar;

[] call life_fnc_iceInitList;