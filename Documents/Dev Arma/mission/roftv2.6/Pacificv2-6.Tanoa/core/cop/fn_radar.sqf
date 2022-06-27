/*
	File: fn_radar.sqf
	Author: Silly Aussie kid named Jaydon
	
	Description:
	Looks like weird but radar?
*/
if(playerSide != west) exitWith {};
private ["_speed","_vehicle","_playerVehicle"];
_vehicle = cursorTarget;
_speed = round speed _vehicle;
_playerVehicle = vehicle player;

_owners = _vehicle getVariable ["immatriculation","Na"];

if (_owners isEqualTo "illegal") then {_owners = "Sans Plaque";};

if (isClass(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle))) then {
	if (getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeOf _vehicle) >> "isIllegal") isEqualTo 1) then {
		_owners = "Sans Plaque";
	};
} else {
	_owners = "Sans Plaque";
};

if (((_vehicle isKindOf "Car") && !(_playerVehicle isKindOf "man")) || ((_vehicle isKindOf "Car") && (_playerVehicle isKindOf "man") && (currentWeapon player == "Rangefinder"))) then
{
	switch (true) do 
	{
		case ((_speed > 20 && _speed <= 80)) : 
		{
			hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +
			(localize "STR_Cop_Radar") + 
			"<br/><t color='#33CC33'><t align='center'><t size='1'>" +
			(localize "STR_Cop_VehSpeed") +
			"<br/><t color='#ffffff'><t align='center'><t size='2'>" +
			"Plaque" +
			"<br/><t color='#ffffff'><t align='center'><t size='1'>" +
			"%2",
			round _speed, 
			_owners];
		};
		
		case ((_speed > 80)) : 
		{	
			hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +
			(localize "STR_Cop_Radar") + 
			"<br/><t color='#FF0000'><t align='center'><t size='1'>" +
			(localize "STR_Cop_VehSpeed") +
			"<br/><t color='#ffffff'><t align='center'><t size='2'>" +
			"Plaque" +
			"<br/><t color='#ffffff'><t align='center'><t size='1'>" +
			"%2",
			round _speed, 
			_owners];
		};
	};
};