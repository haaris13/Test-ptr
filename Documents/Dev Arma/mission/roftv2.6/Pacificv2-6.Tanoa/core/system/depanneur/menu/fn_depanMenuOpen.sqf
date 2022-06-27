/*
	File: fn_depanMenuOpen.sqf

	Autor: Iron
	Date: 12 Mar 2020 19:51:42
	Version: 0.1
*/

//[] call life_fnc_depanClear;

disableSerialization;
createDialog "Dialog_Depan_System";

_display = (findDisplay 24500);
_list = (_display displayCtrl 24502);
_map = (_display displayCtrl 24506);
_ctrlInfo = (_display displayCtrl 24503);

lbClear _list;

life_depan_balises_cp =+ life_depan_balises;

{
	_var = _x select 0;
	_vehClass = _x select 2;
	_uidTake = _x select 3;

	_name = getText(configfile >> "CfgVehicles" >> _vehClass >> "displayName");

	_list lbAdd format["%1", _name];
	_index = (lbSize _list)-1;

	if (_uidTake != "") then {
		if (_uidTake == (getPlayerUID player)) then {
			_list lbSetColor [_index, [0,0.7,0,1]];
		} else {
			_list lbSetColor [_index, [1,0,0,1]];
		};
	};
} foreach life_depan_balises_cp;

if (count life_depan_balises_cp > 0) then {
	_selected = life_depan_balises_cp select 0; //First option is set by default

	_var = _selected select 0;
	_pos = _selected select 1;
	_vehClass = _selected select 2;
	_uidTake = _selected select 3;

	_name = getText(configfile >> "CfgVehicles" >> _vehClass >> "displayName");

	[_map, 1, 0.1, _pos] call life_fnc_setMapPosition;
	life_depan_bal_selected = _selected;


	_pos = [_pos] call life_fnc_getNearLocation;

	_ctrlInfo ctrlSetStructuredText parseText format[
		"Balise:" + "%1<br/>" +
		"Position: %2",
		_name,
		_pos
	];

	if (_uidTake == (getPlayerUID player)) then {
		ctrlEnable [24504, false];
	};
} else {
	ctrlEnable [24504, false];
	ctrlEnable [24505, false];
};