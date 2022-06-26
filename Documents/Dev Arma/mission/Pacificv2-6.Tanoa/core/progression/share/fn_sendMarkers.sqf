#include "..\..\..\script_macros.hpp"
/*
	File: fn_sendMarkers.sqf 
		
	Author: IronBlade
*/

_cfg = CONTROL_DATA(18101);
_price = CONTROL_VALUE(18101);

_requirement = getArray(missionConfigFile >> "CfgMarkers" >> _cfg >> "requirement");

_profRequired = _requirement select 0;
_profRequiredLevel = _requirement select 1;

_displayNameProf = getText(missionConfigFile >> "Professions" >> _profRequired >> "displayName");
_displayName = getText(missionConfigFile >> "CfgMarkers" >> _cfg >> "displayName"); 
_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

if (isNil "life_current_nb_share") then {
	life_current_nb_share = 0;
};

if (life_current_nb_share > 0) then {
	_price = _price * life_current_nb_share * 1.3;
};

if (side life_share_target == west) then {
	_price = round(_price * 2);
};

life_current_nb_share = life_current_nb_share + 1;

_text = format ["Vous avez partagé vos connaissances a propos de %1, vous avez perdu %2 Level de %3.", _displayName, _price, _displayNameProf];

if (_price isEqualTo 0) then {
	hint _text;

	if (side life_share_target == west) then {
		[_cfg, player] remoteExecCall ["life_fnc_copReceiveMarkers", life_share_target];
	} else {
		[_cfg, player] remoteExecCall ["life_fnc_receiveMarkers", life_share_target];
	};

	[10] call SOCK_fnc_updatePartial;
	[11] call SOCK_fnc_updatePartial;

} else {

	if ((_profCurrentLevel - _price) >= _profRequiredLevel) then {

		diag_log format["Send life_fnc_receiveMarkers %1",_cfg];

		[_profRequired, _price, 100, "sub"] call life_fnc_levelProfession;

		[10] call SOCK_fnc_updatePartial;
		[11] call SOCK_fnc_updatePartial;

		if (side life_share_target == west) then {
			[_cfg, player] remoteExecCall ["life_fnc_copReceiveMarkers", life_share_target];
		} else {
			[_cfg, player] remoteExecCall ["life_fnc_receiveMarkers", life_share_target];
		};

		hint _text;
	};
};

closeDialog 0;