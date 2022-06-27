/*
	File: fn_garageCommonLBChange.sqf

	Autor: Iron
	Date: 02 Mar 2020 16:57:40
	Version: 0.1
*/
diag_log "fn_garageCommonLBChange";

disableSerialization;
private["_control","_index","_className","_classNameLife","_dataArr"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_dataArr = _control lbData _index;
_dataArr = call compile format["%1",_dataArr];
_className = _dataArr select 0;

_id = _dataArr select 1;
_vid = _dataArr select 2;
_ownerPid = _dataArr select 3;
_ownerName = _dataArr select 4;
_immatriculation = _dataArr select 5;
_colorIndex = _dataArr select 6;
_isAssureInfo = _dataArr select 7;

_isAssure = "";
if (_isAssureInfo == 1) then {
	_isAssure = "<t color='#04B404'>Oui</t>";
} else {
	_isAssure = "<t color='#FF0000'>Non</t>";
};

//Should be slightly faster
_vehicleInfo = [_className] call life_fnc_fetchVehInfo;

_vehicleColor = ((getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "textures")) select _colorIndex) select 0;
if (isNil "_vehicleColor") then {
	_vehicleColor = "Default";
};

_display = findDisplay 30100;
_info = _display displayCtrl 30104;

_info ctrlSetStructuredText parseText format[
	"Propriétaire: <t color='#8cff9b'>%1</t><br/>" + 
	"Immatriculation: <t color='#8cff9b'>%2</t><br/>" + 
	"Couleur: <t color='#8cff9b'>%3</t><br/>" + 
	"Assuré: %4<br/>",
	_ownerName,
	_immatriculation,
	_vehicleColor,
	_isAssure
];

ctrlEnable [30101, true];

if (_ownerPid == getPlayerUID player) then {
	ctrlEnable [30103, true];
};