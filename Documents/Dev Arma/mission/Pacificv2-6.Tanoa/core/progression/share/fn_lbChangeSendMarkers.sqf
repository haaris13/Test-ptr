#include "..\..\..\script_macros.hpp"
/*
	File: fn_lbChangeSendMarkers.sqf 
		
	Author: IronBlade
*/

_cfg = CONTROL_DATA(18101);
_price = CONTROL_VALUE(18101);

_requirement = getArray(missionConfigFile >> "CfgMarkers" >> _cfg >> "requirement");

_profRequired = _requirement select 0;
_profRequiredLevel = _requirement select 1;

_displayName = getText(missionConfigFile >> "Professions" >> _profRequired >> "displayName");
_profCurrentLevel = missionNamespace getVariable [_profRequired,0];

if (life_current_nb_share > 1) then {
	_price = _price * life_current_nb_share * 1.3;
};

if (side life_share_target == west) then {
	_price = round(_price * 2);
};

if (_price isEqualTo 0) then {
	(CONTROL(18100,18102)) ctrlSetStructuredText parseText format ["<t size='1' color='#b2ec00'>Gratuit</t>"];

	CONTROL(18100,18103) ctrlEnable true;
} else {

	if ((_profCurrentLevel - _price) < _profRequiredLevel) then {
		(CONTROL(18100,18102)) ctrlSetStructuredText parseText format ["<t size='1'>Coût(%2): <t color='#b70000'>%1 Niveau</t></t>", _price, _displayName];
		CONTROL(18100,18103) ctrlEnable false;
	} else {
		(CONTROL(18100,18102)) ctrlSetStructuredText parseText format ["<t size='1'>Coût(%2): <t color='#b2ec00'>%1 Niveau</t></t>", _price, _displayName];
		CONTROL(18100,18103) ctrlEnable true;
	};
};