#include "..\..\script_macros.hpp"
/*
	File: fn_cellphone.sqf
	Author: IronBlade
*/

private ["_type","_toSend","_includeLocation","_fnc","_ctrlSearchEdit"];
disableSerialization;
_units = CONTROL(3000,3004);
_ctrlSearchEdit = CONTROL(3000,3005);

lbClear _units;

/* Staff */
_units lbAdd format["> Admins"];
_units lbSetData [(lbSize _units)-1,"STAFF"];

/* Police */
_units lbAdd format["> PNT"];
_units lbSetData [(lbSize _units)-1,"COP"];

/* EMS */
_units lbAdd format["> Secouristes"];
_units lbSetData [(lbSize _units)-1,"MED"];

if (playerSide == west || playerSide == independent) then {
	_units lbAdd format["> Population"];
	_units lbSetData [(lbSize _units)-1,"CIV"];
};


{
	_unitName = _x GVAR ["realname",name _x];
	if (toUpper _unitName find (toUpper ctrlText _ctrlSearchEdit) >= 0) then {
		if(alive _x && _x != player) then {
			switch (side _x) do {
				case west: {
					_type = "Police";
				};
				case civilian: {_type = "Citoyen"};
				case independent: {_type = "Médecin"};
			};



				_units lbAdd format["%1 (%2)",_unitName,_type];
				_units lbSetData [(lbSize _units)-1,str(_x)];
		};
	};
} foreach playableUnits;

lbSetCurSel [3004,0];
