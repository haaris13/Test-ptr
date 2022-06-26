#include "..\..\script_macros.hpp"
/*
	File: fn_getNearLocation.sqf

	Autor: IronBlade

	Return: 
		String -> Display name of Zone
*/
_pos = [_this,0,[],[[]]] call BIS_fnc_param;
_withPronom = [_this,1,false,[false]] call BIS_fnc_param;
_checkSucess = [_this,2,false,[false]] call BIS_fnc_param;

if (count _pos != 3) exitWith {};

_CfgPathZone = "";
_distance = 999999;

{
	_config = (configName _x);
		
	{
		_markerVarName = getText (_x >> "markerVarName");
		_zoneSize = getNumber (_x >> "zoneSize");

		if (_pos distance2D (getMarkerPos _markerVarName) < _distance) then {
			_distance = _pos distance2D (getMarkerPos _markerVarName);
			_CfgPathZone = _x;
		};
	} forEach ("true" configClasses (missionConfigFile >> "CfgLocations" >> _config));

} forEach ("true" configClasses (missionConfigFile >> "CfgLocations"));


if (_CfgPathZone isEqualTo "") exitWith {};

_textReturn = "";
_infoPos = "";

// Get Info
_markerVarName = getText (_CfgPathZone >> "markerVarName");
_zoneSize = getNumber (_CfgPathZone >> "zoneSize");
_displayName = getText (_CfgPathZone >> "displayName");
_displayPronom = getText (_CfgPathZone >> "displayPronom");
_posMarker = (getMarkerPos _markerVarName);


switch (true) do {

	case (_pos distance2D _posMarker <= _zoneSize) : {
		_textReturn = format["%1", _displayName];

		_atl = _pos select 2;

		if (_atl <= 50 && _checkSucess) then {
			[configName(_CfgPathZone)] spawn life_fnc_achievementLearn;
			["exploration"] spawn life_fnc_achievementLearn;
		};
	};

	case (surfaceIsWater _pos) : {
		_textReturn = format["Au large %2 %1", _displayName, _displayPronom];
	};

	case (_pos distance2D _posMarker < (_zoneSize + 50)) : {
		_textReturn = format["A proximité %2 %1", _displayName, _displayPronom];
	};

	case (_pos distance2D _posMarker > (_zoneSize + 100)) : {

		_xMark = (_posMarker select 0);
		_yMark = (_posMarker select 1);

		_xPos = (_pos select 0);
		_yPos = (_pos select 1);

		_difx = abs (_xMark - _xPos);
		_dify = abs (_yMark - _yPos);

		// Position Nord, Sud, Est, Ouest
		switch (true) do {
			case (_yPos < _yMark && _difx <= 200) : {_infoPos = "Au Sud";};
			case (_yPos > _yMark && _difx <= 200) : {_infoPos = "Au Nord";};

			case (_dify <= 200 && _xPos > _xMark) : {_infoPos = "A l'Est";};
			case (_dify <= 200 && _xPos < _xMark) : {_infoPos = "A l'Ouest";};

			case (_yPos > _yMark && _xPos > _xMark) : {_infoPos = "Au Nord Est";};
			case (_yPos > _yMark && _xPos < _xMark) : {_infoPos = "Au Nord Ouest";};

			case (_yPos < _yMark && _xPos > _xMark) : {_infoPos = "Au Sud Est";};
			case (_yPos < _yMark && _xPos < _xMark) : {_infoPos = "Au Sud Ouest";};

			default {}; 
		};

		_textReturn = format["%3 %2 %1", _displayName, _displayPronom, _infoPos];
	};
};

_textReturn;