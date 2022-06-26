/*
	File: fn_phoneOpenList.sqf

	Autor: Iron

	life_phones: 
		[
			[id, number]
		]

	life_phone: [id, number]

*/
disableSerialization;

createDialog "Dialog_Phone_List";

_display = (findDisplay 24100);
_phoneList = (_display displayCtrl 24101);
_phoneInfo = (_display displayCtrl 24102);
_applyButton = (_display displayCtrl 24103);
_removeButton = (_display displayCtrl 24104);

lbClear _phoneList;

_phoneInfo ctrlSetStructuredText parseText "";

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

_applyButton ctrlEnable false;
_removeButton ctrlEnable false;