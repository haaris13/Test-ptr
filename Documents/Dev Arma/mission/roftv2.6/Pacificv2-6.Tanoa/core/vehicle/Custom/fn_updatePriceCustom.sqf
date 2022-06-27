#include "..\..\..\script_macros.hpp"
#include "script_macros_custom.hpp"
/*
	File:fn_updatePriceCustom.sqf


	Autor: IronBlade
*/

disableSerialization;

_cond = [_this,0,"",[""]] call BIS_fnc_param;

_className =  lbData [ListUpdgrade,(lbCurSel ListUpdgrade)];
_color =  lbData [ListUpdgrade,(lbCurSel ListUpdgrade)];

_priceTotal = 0;
_priceAnim = 0;
_priceUpgrade = 0;

if (count (crew life_vehicle_to_custom) != 0) then {
	{
		[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
	} forEach (crew life_vehicle_to_custom);
};

if (_className == life_custom_classVeh) then {

	// Color :
	_colorIndex = lbValue[ColorList,(lbCurSel ColorList)];
	diag_log format["fn_updatePriceCustom: Color: %1", _colorIndex];
	
	if (_colorIndex != -1) then {
		if (_colorIndex != life_custom_texturesIndex) then {_priceTotal = 500;};
	};


	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	{
		_anim = _x select 0;

		if ((count _x) > 2) then {
			_price = _x select 2;

			if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
				_priceAnim = _priceAnim + _price;
			};
		};		
	} forEach _anims;

} else {

	// Upgrade
	_priceCurrent = getNumber(missionConfigFile >> "CfgVehicleUpgrade" >> life_custom_actualGroup >> life_custom_classVeh >> "price" );
	_priceNew = getNumber(missionConfigFile >> "CfgVehicleUpgrade" >> life_custom_actualGroup >> _className >> "price" );

	_priceUpgrade = _priceNew - _priceCurrent;

	if (_priceUpgrade < 0) then {_priceUpgrade = 0};

	_priceTotal = _priceTotal + _priceUpgrade;

	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	
	{
		_anim = _x select 0;

		if ((count _x) > 2) then {
			_price = _x select 2;

			if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
				_priceAnim = _priceAnim + _price;
			};
		};		
	} forEach _anims;
};

_priceTotal = _priceTotal + _priceAnim;
_priceTotal = [_priceTotal] call life_fnc_priceRepCalc;

_AnimPriceText = ((findDisplay DisplayCustom) displayCtrl AnimPriceText);
_AnimPriceText ctrlSetStructuredText parseText format ["<t size='1'>Coût Custom: %1</t>",([(_priceAnim)] call life_fnc_numberText)];

_TotalPriceText = ((findDisplay DisplayCustom) displayCtrl TotalPriceText);
if (_priceTotal > life_atmbank) then {
	_TotalPriceText ctrlSetStructuredText parseText format ["<t size='0.9'>Total: <t color='#b70000'>$%1</t>",[(_priceTotal)] call life_fnc_numberText];
} else {
	_TotalPriceText ctrlSetStructuredText parseText format ["<t size='0.9'>Total: <t color='#b2ec00'>$%1</t>",[(_priceTotal)] call life_fnc_numberText];
};