/*
	File: fn_fourriereVehiclesReceive.sqf

	Autor: Iron
*/
_data = [_this,0,[],[[]]] call BIS_fnc_param;

life_fourriere_vehs = _data;

createDialog "Life_Vehicle_Fourriere";
disableSerialization;

_display = findDisplay 29100;
if(isNull _display) exitWith {};

_cars = _display displayCtrl 29102;
_buttonGet = _display displayCtrl 29101;
lbClear _cars;

_buttonGet ctrlEnable false;

if (count _data == 0) exitWith {
	ctrlSetText[29102, "Aucun."];
};

{
	_id = _x select 0;
	_vid = _x select 1;
	_ownerName = _x select 2;
	_deposeName = _x select 3;
	_class = _x select 4;
	_immatriculation = _x select 5;
	_timeAdded = _x select 6;

	_vehicleInfo = [_class] call life_fnc_fetchVehInfo;
	_nameVeh = (_vehicleInfo select 3);

	_cars lbAdd format["%1 (%2)", _nameVeh, _ownerName];
	_tmp = [_class, _id, _vid, _ownerName, _deposeName, _immatriculation, _timeAdded];
	_tmp = str(_tmp);

	_index = (lbSize _cars)-1;

	_cars lbSetData [_index, _tmp];
	//_cars lbSetPicture [_index, _vehicleInfo select 2];
	_cars lbSetValue [_index, _id];

} foreach _data;