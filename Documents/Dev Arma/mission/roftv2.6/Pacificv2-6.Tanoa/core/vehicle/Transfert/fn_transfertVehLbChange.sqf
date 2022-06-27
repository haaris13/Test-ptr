/*
	File: fn_transfertVehLbChange.sqf

	Autor: Iron
	Date: 29 Feb 2020 16:11:37
	Version: 0.1
*/
diag_log "fn_transfertVehLbChange";

disableSerialization;
private["_control","_selection","_price","_priceTag"];
_control = [_this,0,controlNull,[controlNull]] call BIS_fnc_param;
_selection = [_this,1,-1,[0]] call BIS_fnc_param;

//Error checks
if (isNull _control) exitWith {
	diag_log format["fn_transfertVehLbChange: null"];
};

_price = _control lbValue (lbCurSel _control);

_color = "#b2ec00";

_display = (findDisplay 73400);
_validBtn = _display displayCtrl 73403;

if (life_atmbank < _price) then {
	_color = "#b70000";
	_validBtn ctrlEnable false;
} else {
	_validBtn ctrlEnable true;
};

_priceTag = (_display displayCtrl 73401);
_priceTag ctrlSetStructuredText parseText format ["<t size='1'>Coût: <t color='%2'>$%1</t>", [(_price)] call life_fnc_numberText, _color];