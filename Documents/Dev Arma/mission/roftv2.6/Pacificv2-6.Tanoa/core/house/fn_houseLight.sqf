/*
	File: fn_houseLight.sqf

	Author: IronBlade
*/
private["_lightSource","_exit"];
params [
	["_house",objNull,[objNull]],
	["_mode",false,[false]]
];

if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F")) exitWith {};

_exit = false;
if(_mode) then {
	_lightSource = "#lightpoint" createVehicleLocal [0,0,0];

	_cfgHouses = (missionConfigFile >> "CfgHouses");
	_cfgBuilding = (_cfgHouses >> "CfgBuild");
	_currentConfig = (_cfgBuilding >> typeOf _house);

	_lightPos = getArray(_currentConfig >> "lightPos");

	if (_lightPos isEqualTo []) exitWith {
		deleteVehicle _lightSource;
	};
	
	_lightSource lightAttachObject [_house, _lightPos];
	
	_lightSource setLightColor [250,150,50];
	_lightSource setLightAmbient [1,1,0.2];
	_lightSource setLightAttenuation [1,0,0,0];
	_lightSource setLightIntensity 10;
	_lightSource setLightUseFlare true;
	_lightSource setLightFlareSize 0.2;
	_lightSource setLightFlareMaxDistance 50;
	_house setVariable["lightSource",_lightSource];
} else {
	if(isNull (_house getVariable["lightSource",ObjNull])) exitWith {};
	deleteVehicle (_house getVariable["lightSource",ObjNull]);
};