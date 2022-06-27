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
_side = str(_side);

_list = CONTROL(18100,18101);

{

	_markerCfg = getText( _x >> "marker" );
	_requirement = getArray( _x >> "requirement" ); 
	_displayName = getText( _x >> "displayName" );
	_price = getNumber( _x >> "sharePrice" );
	_icon = getText( _x >> "icon" );
	_isIllegal = getNumber( _x >> "illegal" );
	_canShare = getArray( _x >> "canShare" );
	_needUnlock = getArray( _x >> "needUnlock" );

	_cfg = configName(_x);

	_profRequired = _requirement select 0;
	_profRequiredLevel = _requirement select 1;

	_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

	_canShareToOther = true;

	if (count _needUnlock > 0) then {
		_cfgUnlock = _needUnlock select 0;
		_mrkUnlock = _needUnlock select 1;
		_distUnlock = _needUnlock select 2;

		if (_cfgUnlock in life_player_unLocks) then {
			_canShareToOther = (player distance (getMarkerPos _mrkUnlock) < _distUnlock);
		} else {
			_canShareToOther = false;
		};
	};

	// Check if Have Level
	if ((_profCurrentLevel >= _profRequiredLevel) && (_side in _canShare) && _canShareToOther) then {

		_list lbAdd format["%1", _displayName];
		_list lbSetData[(lbSize _list)-1, _cfg];
		_list lbSetValue[(lbSize _list)-1, _price];

		if (_icon != "") then {
			_list lbSetPicture [(lbSize _list)-1,_icon];
		};
	};

} forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));

CONTROL(18100,18103) ctrlEnable false;