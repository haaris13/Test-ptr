/*
	File: fn_garageCommonReceive.sqf

	Autor: Iron
	Date: 02 Mar 2020 16:57:36
	Version: 0.1
*/
_data = [_this,0,[],[[]]] call BIS_fnc_param;

life_garage_common_vehs = _data;

createDialog "Life_Garage_Common";
disableSerialization;

_display = findDisplay 30100;
if(isNull _display) exitWith {};

_cars = _display displayCtrl 30102;
_buttonGet = _display displayCtrl 30101;
_buttonRemove = _display displayCtrl 30103;
lbClear _cars;

_buttonGet ctrlEnable false;
_buttonRemove ctrlEnable false;

if (count _data == 0) exitWith {
	ctrlSetText[30102, "Aucun."];
};

{
	_id = _x select 0;
	_vid = _x select 1;
	_class = _x select 2;
	_ownerPid = _x select 3;
	_ownerName = _x select 4;
	_immatriculation = _x select 5;
	_color = _x select 6;
	_assure = _x select 7;

	_vehicleInfo = [_class] call life_fnc_fetchVehInfo;
	_nameVeh = (_vehicleInfo select 3);

	_cars lbAdd format["%1", _nameVeh];
	_tmp = [_class, _id, _vid, _ownerPid, _ownerName, _immatriculation, _color, _assure];
	_tmp = str(_tmp);

	_index = (lbSize _cars)-1;

	_cars lbSetData [_index, _tmp];
	//_cars lbSetPicture [_index, _vehicleInfo select 2];
	_cars lbSetValue [_index, _id];

} foreach _data;