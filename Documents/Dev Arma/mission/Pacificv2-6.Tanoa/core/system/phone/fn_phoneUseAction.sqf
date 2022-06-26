/*
	File: fn_phoneUseAction.sqf

	Autor: Iron
*/
disableSerialization;

_display = (findDisplay 24100);
_phoneList = (_display displayCtrl 24101);

_selection = lbCurSel _phoneList;

if (_selection < 0) exitWith {};

life_phone = life_phones select _selection;

lbClear _phoneList;

_found = 0;

{
	_index = (_phoneList lbAdd (_x select 1));
	_phoneList lbSetValue [_index, _forEachIndex];

	if (count life_phone > 0) then {
		if (_x select 0 == life_phone select 0) then {
			_phoneList lbSetPicture [_index, "A3\Ui_f\data\igui\cfg\actions\ico_on_ca.paa"];
			_found = _forEachIndex;
		};
	};	
} forEach life_phones;

_phoneList lbSetCurSel _found;

profileNamespace setVariable ["phone_p_used", life_phone select 0];
saveProfileNamespace;