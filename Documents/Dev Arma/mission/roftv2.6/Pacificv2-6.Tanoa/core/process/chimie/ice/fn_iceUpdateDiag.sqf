#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceUpdateDiag.sqf

	Autor: IronBlade
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;

if (_type == "") exitWith {};

disableSerialization;

switch (_type) do {

	case "list" : {
		[] call life_fnc_iceInitList;
	};

	case "button" : {
		_btn = CONTROL(DialogIce, ButtonTransf);
		_text = CONTROL(DialogIce, TextQtyMl);

		if((lbCurSel Listleft) == -1) then {
			_btn ctrlSetText "Transférer";
			_text ctrlsetstructuredtext parseText "cl";
		} else {
			_ctrl = ctrlSelData(Listleft);
			if (_ctrl in ["zippo"]) then {
				_btn ctrlSetText "Chauffer";
				_text ctrlsetstructuredtext parseText "°C";
			} else {
				_btn ctrlSetText "Transférer";
				_text ctrlsetstructuredtext parseText "cl";
			};
		};
	};

	case "fiole1" : {
		[_type, true] call life_fnc_iceUpdateFioleGlobal;
	};

	case "fiole2" : {
		[_type, true] call life_fnc_iceUpdateFioleGlobal;
	};
};