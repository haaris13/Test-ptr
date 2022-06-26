#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File:fn_furnaceSystem.sqf

	Autor:IronBlade
*/
_config = [_this,0,[],[[]]] call BIS_fnc_param;
_cfgSystem = [_this,1,"",[""]] call BIS_fnc_param;
//_perk = 1;
disableSerialization;

if (life_furnace_on) exitWith {};
/*if (["fournaise"]call life_fnc_hasPerk) then {
		_perk = 0.5;
	};
*/
life_furnace_on = true;

// Init Config
_cfgFurnace = (missionConfigFile >> "CfgFurnace");
_cfgItems = (missionConfigFile >> "VirtualItems");

_itemRequiredArray = getArray(_cfgFurnace >> _cfgSystem >> "Required");
_itemRequiredCfg = (_itemRequiredArray select 0);
_itemRequiredQty = (_itemRequiredArray select 1);

_itemGivenArray = getArray(_cfgFurnace >> _cfgSystem >> "Given");
_itemGivenCfg = (_itemGivenArray select 0);
_itemGivenQty = (_itemGivenArray select 1);

_itemGivenBadArray = getArray(_cfgFurnace >> _cfgSystem >> "GivenBad");
_itemGivenBadCfg = (_itemGivenBadArray select 0);
_itemGivenBadQty = (_itemGivenBadArray select 1);

_itemRequiredTime = getNumber(_cfgFurnace >> _cfgSystem >> "Time");
if (["fournaise"]call life_fnc_hasPerk) then {
_itemRequiredTime = _itemRequiredTime * 0.75;
};
if (["fournaise1"]call life_fnc_hasPerk) then {
_itemRequiredTime = _itemRequiredTime * 0.75;
};

_itemRequiredTemp = getNumber(_cfgFurnace >> _cfgSystem >> "Temperature");
_text = format["CfgSystem: %1",_cfgSystem];

diag_log _text;

_needTime = (time + _itemRequiredTime);
_needTimeBad = (time + _itemRequiredTime + (round(_itemRequiredTime / 4)) + 5);

_give = false;
_giveBad = false;

_resultGood = [_itemGivenCfg, (life_furnace_config select 1) * _itemGivenQty];
_resultBad = [_itemGivenBadCfg, (life_furnace_config select 1) * _itemGivenBadQty];

_info = 0;

while {life_furnace_on && (!(life_furnace_config isEqualTo [])) && ((player distance life_furnacePnj) < 100)} do {
	uiSleep 0.1;

	// Setup Time for bad Temp
	if (_itemRequiredTemp > life_furnace_temp) then {
		_needTime = (time + _itemRequiredTime);
		_needTimeBad = (time + _itemRequiredTime + (round(_itemRequiredTime / 4)) + 5);

		_info = _info + 0.1;

		if (_info >= 30) then {
			_info = 0;
			hint "Le Minerais n'a pas l'air de fondre il semblerais que la température du four soit trop basse !";
		};
	};

	// Give Good :
	if (_needTime <= time && !_give && ((_itemRequiredTemp == life_furnace_temp)) && !_giveBad) then {
		_give = true; [_resultGood, life_furnace_temp] call life_fnc_furnaceSetDiag; ["process"] call life_fnc_addXP;
		diag_log format["Give Good %1",_resultGood];

		["traitementdeminerai"] spawn life_fnc_achievementLearn;
	};

	// Give Bad
	if ((_needTimeBad < time) && _give && !_giveBad) exitWith {
		_giveBad = true;
		diag_log format["Give Bad %1",_resultBad];
		[_resultBad, life_furnace_temp] call life_fnc_furnaceSetDiag;
	};

	// Bad Temp
	if (_needTime < time && !_give && !_giveBad && (_itemRequiredTemp < life_furnace_temp)) then {
		 _give = true;
		
		_good = [_itemRequiredTemp] call life_fnc_furnaceTransform;

		if (_good) then {
			[_resultGood, life_furnace_temp] call life_fnc_furnaceSetDiag;
			
			diag_log format["Bad Temp %1",_resultGood];
		} else {
			[_resultBad, life_furnace_temp] call life_fnc_furnaceSetDiag;
			_giveBad = true;
			diag_log format["Bad Temp %1",_resultBad];
		};
	};
};

life_furnace_on = false;