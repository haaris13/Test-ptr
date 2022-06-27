/*
	File: fn_fourriereLBChange.sqf

	Autor: Iron
*/
disableSerialization;
private["_control","_index","_className","_classNameLife","_dataArr"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_dataArr = _control lbData _index;
_dataArr = call compile format["%1",_dataArr];
_className = _dataArr select 0;
_classNameLife = _className;

if(!(isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife))) then {
	_classNameLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_className];
};

_id = _dataArr select 1;
_vid = _dataArr select 2;
_ownerName = _dataArr select 3;
_deposeName = _dataArr select 4;
_immatriculation = _dataArr select 5;
_timeAdded = _dataArr select 6;

//Should be slightly faster
_vehicleInfo = [_className] call life_fnc_fetchVehInfo;

_fourrierePrice = ([_className] call life_fnc_vehicleFourriereCfg) select 0;
_infoValue = format["$%1", [_fourrierePrice] call life_fnc_numberText];

_display = findDisplay 29100;
_info = _display displayCtrl 29103;

_info ctrlSetStructuredText parseText format[
	"Propriétaire: <t color='#8cff9b'>%1</t><br/>" + 
	"Immatriculation: <t color='#8cff9b'>%2</t><br/>" + 
	"Prix par défault: <t color='#8cff9b'>%3</t><br/>" + 
	"Déposé par: <t color='#8cff9b'>%4</t><br/>" + 
	"Déposé le: <t color='#8cff9b'>%5</t><br/>",
	_ownerName,
	_immatriculation,
	_infoValue,
	_deposeName,
	_timeAdded
];

ctrlEnable [29101, true];