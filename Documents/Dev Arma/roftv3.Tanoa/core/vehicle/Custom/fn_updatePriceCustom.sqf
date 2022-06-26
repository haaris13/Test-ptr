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
	
	if (_colorIndex != -1) then {
		if (_colorIndex != life_custom_texturesIndex) then {_priceTotal = 5000;};
	};


	_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> _className >> "addons");
	{
		_anim = _x select 0;
		_price = _x select 2;

		if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
			_priceAnim = _priceAnim + _price;
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
		_price = _x select 2;

		if (life_vehicle_to_custom animationphase _anim != (life_view_vehicle animationphase _anim)) then {
			_priceAnim = _priceAnim + _price;
		};
	} forEach _anims;
};

_priceTotal = _priceTotal + _priceAnim;

_priceTotal = [_priceTotal] call life_fnc_priceRepCalc;

_TotalPriceText = ((findDisplay DisplayCustom) displayCtrl TotalPriceText);
_TotalPriceText ctrlSetStructuredText parseText format ["<t size='1'>Total: $%1</t>",([(_priceTotal)] call life_fnc_numberText)];

_AnimPriceText = ((findDisplay DisplayCustom) displayCtrl AnimPriceText);
_AnimPriceText ctrlSetStructuredText parseText format ["<t size='1'>Coût Custom: %1</t>",([(_priceAnim)] call life_fnc_numberText)];