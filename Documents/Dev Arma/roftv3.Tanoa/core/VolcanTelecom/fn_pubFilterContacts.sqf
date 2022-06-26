#include "..\..\script_macros.hpp"
/* ------------------------------------------------------------------------------
	File: fn_pubFilterContacts.sqf
	Author: IronBlade
	
	Description:
		- Refreshes cell phone contact list

------------------------------------------------------------------------------ */

private ["_type","_toSend","_includeLocation","_fnc","_ctrlSearchEdit"];
disableSerialization;
_units = CONTROL(9000,9004);
_ctrlSearchEdit = CONTROL(9000,9005);

lbClear _units;

_units lbAdd format["> Gendarmerie"];
_units lbSetData [(lbSize _units)-1,"COP"];

/* EMS */
_units lbAdd format["> Secouristes"];
_units lbSetData [(lbSize _units)-1,"MED"];

_units lbAdd format["> Population"];
_units lbSetData [(lbSize _units)-1,"CIV"];

{
	_unitName = _x GVAR ["realname",name _x];
	if (toUpper _unitName find (toUpper ctrlText _ctrlSearchEdit) >= 0) then {
		if(alive _x && _x != player) then {
			switch (side _x) do {
				case west: {
					_type = "Gendarme";
				};
				case civilian: {_type = "Civ"};
				case independent: {_type = "Med"};
			};

				

				_units lbAdd format["%1 (%2)",_unitName,_type];
				_units lbSetData [(lbSize _units)-1,str(_x)];
		};
	};
} foreach playableUnits;

lbSetCurSel [9004,0];