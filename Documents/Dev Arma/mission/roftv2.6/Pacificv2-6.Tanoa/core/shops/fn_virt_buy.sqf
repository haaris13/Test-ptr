#include "..\..\script_macros.hpp"
/*
	File: fn_virt_buy.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Buy a virtual item from the store.
*/
private["_type","_price","_amount","_diff","_name"];
if((lbCurSel 2401) == -1) exitWith {["Error", localize "STR_Shop_Virt_Nothing"] spawn life_fnc_showPredefinedNotification;};
_type = lbData[2401,(lbCurSel 2401)];
_price = lbValue[2401,(lbCurSel 2401)];
_amount = ctrlText 2404;

waitUntil{!isNil "life_server_code"};

if(!([_amount] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_Shop_Virt_Nothing"] spawn life_fnc_showPredefinedNotification;};
_diff = [_type,parseNumber(_amount),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
_amount = parseNumber(_amount);
if(_diff <= 0) exitWith {["Error", localize "STR_NOTF_NoSpace"] spawn life_fnc_showPredefinedNotification;};

if (life_debug == 1) then {
	diag_log format["Diff: %1",str _diff];
};

_amount = _diff;
if((time - life_action_delay) < 0.3) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");
_legal = M_CONFIG(getNumber,"VirtualItems",_type,"legal");

if(([true,_type,_amount] call life_fnc_handleInv)) then
{
	_total = (_price * _amount);

	_testPrice = _total;
	if (_legal == 1) then {
		_testPrice = round((["shop_civil", _testPrice] call life_fnc_gouvTaxesCalc));
	};

	_canBuy  = true;
	if (life_shop_payment_type == "cash") then {
		if(_testPrice > life_cash) exitWith {
			["Error", "Vous n'avez pas assez d'argent sur vous !"] spawn life_fnc_showPredefinedNotification;
			[false, _type, _amount] call life_fnc_handleInv;
			_canBuy = false;
		};
	} else {
		if(_testPrice > life_atmbank) exitWith {
			["Error", "Vous n'avez pas assez d'argent sur votre compte !"] spawn life_fnc_showPredefinedNotification;
			[false, _type, _amount] call life_fnc_handleInv;
			_canBuy = false;
		};
	};

	if (!_canBuy) exitWith {};

	if (_legal == 1) then {
		_total = round((["shop_civil", _total] call life_fnc_gouvTaxesPay));
	};

	["Accepted", format[localize "STR_Shop_Virt_BoughtItem",_amount,(localize _name),[_total] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

	if (life_debug == 1) then {
		diag_log format["Price: %1",str _total];
	};

	if (life_shop_payment_type == "cash") then {
		life_cash = life_cash - _total;
		[0] call SOCK_fnc_updatePartial;
	} else {
		life_atmbank = life_atmbank - _total;
		[1] call SOCK_fnc_updatePartial;
	};

	[] call life_fnc_virt_update;

	if (getNumber(missionConfigFile >> "VirtualItems" >> _type >> "edible") != -1) then {
		["achatdenouriture"] spawn life_fnc_achievementLearn;
	};
};

[3] call SOCK_fnc_updatePartial;
