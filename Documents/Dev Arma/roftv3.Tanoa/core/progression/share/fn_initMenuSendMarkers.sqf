#include "..\..\..\script_macros.hpp"
/*
	File: fn_initMenuSendMarkers.sqf 
		
	Author: IronBlade
*/

_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;

closeDialog 0;

disableSerialization;
createDialog 'SendMarkersDialog';

life_share_target = _target;

_side = side life_share_target;

_list = CONTROL(18100,18101);

{

	_markerCfg = getText( _x >> "marker" );
	_requirement = getArray( _x >> "requirement" ); 
	_displayName = getText( _x >> "displayName" );
	_price = getNumber( _x >> "sharePrice" );
	_icon = getText( _x >> "icon" );
	_isIllegal = getNumber( _x >> "illegal" );

	_cfg = configName(_x);

	_profRequired = _requirement select 0;
	_profRequiredLevel = _requirement select 1;

	_profCurrentLevel = missionNamespace getVariable [_profRequired,0];



	// Check if Have Level
	if ((_profCurrentLevel >= _profRequiredLevel && _profRequiredLevel > 0) && ((_side == civilian) || (_side == west && _isIllegal == 1))) then {

		_list lbAdd format["%1", _displayName];
		_list lbSetData[(lbSize _list)-1, _cfg];
		_list lbSetValue[(lbSize _list)-1, _price];

		if (_icon != "") then {
			_list lbSetPicture [(lbSize _list)-1,_icon];
		};
	};

} forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));

CONTROL(18100,18103) ctrlEnable false;