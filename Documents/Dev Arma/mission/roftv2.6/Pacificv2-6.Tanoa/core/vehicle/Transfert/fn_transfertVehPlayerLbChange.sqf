/*
	File: fn_transfertVehPlayerLbChange.sqf

	Autor: Iron
	Date: 29 Feb 2020 16:14:03
	Version: 0.1
*/
diag_log "fn_transfertVehPlayerLbChange";
disableSerialization;
private["_control","_selection","_price","_priceTag"];
_control = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_selection = [_this,1,-1,[0]] call BIS_fnc_param;

//Error checks
if (isNull _control) exitWith {diag_log format["fn_transfertVehPlayerLbChange: null"]};

_display = (findDisplay 74400);
_validBtn = _display displayCtrl 74403;
_validBtn ctrlEnable true;

_priceTag = (_display displayCtrl 74401);
_priceTag ctrlSetStructuredText parseText format ["<t size='1' color='#b2ec00'>Transférer</t>"];