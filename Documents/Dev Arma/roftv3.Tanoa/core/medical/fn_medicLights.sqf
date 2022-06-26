/*
	File: fn_copLights.sqf
	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
	
	Description:
	Adds the light effect to vehicles

*/


private [ "_vehicle", "_lightColors", "_lightLeft", "_lightRight" ];

_vehicle = _this select 0;
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "lights")) exitWith {};

//Light color
//Add a new one for mechanics
_lightColors =  [ [ 0.1, 0.1, 1 ], [ 1, 0.1, 0.1 ], 6 ];

//Create lights
_lightLeft = "#lightpoint" createVehicle getpos _vehicle;
_lightRight = "#lightpoint" createVehicle getpos _vehicle;

//Light settings
_lightLeft setLightBrightness 0;
_lightLeft setLightColor ( _lightColors select 0 );
_lightLeft setLightAmbient ( _lightColors select 0 );
_lightLeft setLightAttenuation [ 0.18, 0, 1000, 130 ];
_lightLeft setLightIntensity 10;
_lightLeft setLightFlareSize 0.38;
_lightLeft setLightFlareMaxDistance 150;
_lightLeft setLightUseFlare true;
_lightLeft setLightDayLight true;

_lightRight setLightBrightness 0;
_lightRight setLightColor ( _lightColors select 1 );
_lightRight setLightAmbient ( _lightColors select 1 );
_lightRight setLightAttenuation [ 0.18, 0, 1000, 130 ];
_lightRight setLightIntensity 10;
_lightRight setLightFlareSize 0.38;
_lightRight setLightFlareMaxDistance 150;
_lightRight setLightUseFlare true;
_lightRight setLightDayLight true;

//Add lights to vehicle
switch ( typeOf _vehicle ) do {

	case "B_G_Offroad_01_F";
	case "B_G_Offroad_01_armed_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.25, 2.45, -0.45 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.25, 2.45, -0.45 ] ];

	};

	case "C_Offroad_01_repair_F";
	case "C_Offroad_01_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.37, 0.0, 0.56 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.37, 0.0, 0.56 ] ];

	};

	case "C_Van_01_fuel_F";
	case "C_Van_01_box_F";
	case "C_Van_01_transport_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.6, 0, 0.77 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.6, 0, 0.77 ] ];

	};

	case "I_Truck_02_box_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.6, 1.3, 0.55 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.6, 1.3, 0.55 ] ];

	};

	case "B_MRAP_01_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.50, 1.5, -0.68 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.50, 1.5, -0.68 ] ];

	};

	case "C_SUV_01_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.37,-1.2,0.42 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.37,-1.2,0.42 ] ];

	};

	case "C_Hatchback_01_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.6, 2.0, -0.95 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.6, 2.0, -0.95 ] ];

	};

	case "C_Hatchback_01_sport_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.6, 2.0, -0.95 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.6, 2, -0.95 ] ];

	};

	case "I_MRAP_03_F": {

		_lightLeft lightAttachObject [ _vehicle, [ -0.9, 2.1, -0.8 ] ];
		_lightRight lightAttachObject [ _vehicle, [ 0.9, 2.1, -0.8 ] ];

	};

};

//Loop
while { alive _vehicle && { _vehicle getVariable "lights" } } do {

	_lightRight setLightBrightness 0;
	_lightLeft setLightBrightness ( _lightColors select 2 );
	sleep 0.22;
	_lightLeft setLightBrightness 0;
	_lightRight setLightBrightness ( _lightColors select 2 );
	sleep 0.22;

};

//Delete lights 
deleteVehicle _lightLeft;
deleteVehicle _lightRight;