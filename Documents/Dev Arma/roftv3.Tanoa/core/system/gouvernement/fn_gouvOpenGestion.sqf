/*
	File: fn_gouvOpenGestion.sqf

	Autor: IronBlade
*/

if (isNil "life_cash") exitWith {};

if(!(createDialog "Dialog_gouv_gestion")) exitWith {};

disableSerialization;

_display = (findDisplay 9200);
_cashCtrl = _display displayCtrl 9203;
_bankCtrl = _display displayCtrl 9201;
_bankGenCtrl = _display displayCtrl 9205;

//Cash 
_cashCtrl ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>", [life_cash] call life_fnc_numberText];

//Gouv
_bankCtrl ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>", [gouv_bank_gouv] call life_fnc_numberText];

//Gen
_bankGenCtrl ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>", [gouv_bank_gen] call life_fnc_numberText];