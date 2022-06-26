#include "..\..\script_macros.hpp"
/*
	File: fn_virt_buy.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Buy a virtual item from the store.
*/
private["_type","_price","_amount","_diff","_name"];
if((lbCurSel 2401) == -1) exitWith {hint localize "STR_Shop_Virt_Nothing"};
_type = lbData[2401,(lbCurSel 2401)];
_price = lbValue[2401,(lbCurSel 2401)];
_amount = ctrlText 2404;
waitUntil{!isNil "life_server_code"};

if(!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
_diff = [_type,parseNumber(_amount),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
_amount = parseNumber(_amount);
if(_diff <= 0) exitWith {hint localize "STR_NOTF_NoSpace"};

if (life_debug == 1) then {
	diag_log format["Diff: %1",str _diff];
};

_amount = _diff;
if((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");
if (_type in ["redgull", "tbacon", "fuelFull", "toolKit", "disqueuse", "ACE_wirecutter", "spikeStrip", "blastingcharge", "lockpick", "pelle", "sacdesport", "nitro", "nitro2", "nitro3"]) then {
	if (["Malfrat"]call life_fnc_hasPerk) then {
		_price = round(_price* 0.9);
	};  
};
if(([true,_type,_amount] call life_fnc_handleInv)) then
{

		_total = (_price * _amount);

		_total = (["shop_civil", _total] call life_fnc_gouvTaxesPay);

		if(_total > CASH) exitWith {playSound "addItemFailed"; hint localize "STR_NOTF_NotEnoughMoney"; [false,_type,_amount] call life_fnc_handleInv;};
		hint format[localize "STR_Shop_Virt_BoughtItem",_amount,(localize _name),[_total] call life_fnc_numberText];

		if (life_debug == 1) then {
			diag_log format["Price: %1",str _total];
		};

		SUB(CASH,_total);

	[] call life_fnc_virt_update;

	if (getNumber(missionConfigFile >> "VirtualItems" >> _type >> "edible") != -1) then {
		["achatdenouriture"] spawn life_fnc_achievementLearn;
	};
};

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
