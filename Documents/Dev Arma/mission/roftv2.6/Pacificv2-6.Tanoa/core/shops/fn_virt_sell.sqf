#include "..\..\script_macros.hpp"
/*
	File: fn_virt_sell.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sell a virtual item to the store / shop
*/
private["_type","_index","_price","_amount","_name"];
if(EQUAL(lbCurSel 2402,-1)) exitWith {};
_type = lbData[2402,(lbCurSel 2402)];
_price = 0;

if((time - life_action_delay) < 0.2) exitWith {["Error", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_cfgItems = (missionConfigFile >> "VirtualItems");

_good = getText(missionConfigFile >> "VirtualItems" >> _type >> "good");
_bad = "";

_price = 0;

if (_good != "") then {
	_bad = _type;

	_cfgFurnace = (missionConfigFile >> "CfgFurnace");

	_furnace = getText(_cfgItems >> _bad >> "furnace");
	_name = localize (getText(_cfgItems >> _good >> "displayName"));

	_temp = getNumber(_cfgFurnace >> _furnace >> "Temperature");

	_text = format["Etant donné que le lingot que vous m'avez vendu n'est pas bien raffiné je vous l'achète deux fois moins cher !<br/>Maintenant si vous voulez avoir des lingots correctement raffiné merci de suivre ce qui suit:<br/>Pour les %1 la température requise est de %2°C",_name,_temp];

	hint parsetext _text;

	_price = [_good] call life_fnc_DYNMARKET_getPrice;
	_price = round(_price / 2);

} else {
	_price = [_type] call life_fnc_DYNMARKET_getPrice;
};


//Not set by server, check normal prices
if ((EQUAL(_price,0)) || (EQUAL(_price,-1))) then {_price = M_CONFIG(getNumber,"VirtualItems",_type,"sellPrice");};

//Still no price found, error?
if((EQUAL(_price,0)) || (EQUAL(_price,-1))) exitWith {["Error", "Vous ne pouvez pas vendre cet objet !"] spawn life_fnc_showPredefinedNotification;};

_amount = ctrlText 2405;
if(!([_amount] call TON_fnc_isnumber)) exitWith {["Error", localize "STR_Shop_Virt_Nothing"] spawn life_fnc_showPredefinedNotification;};
_amount = parseNumber (_amount);
if(_amount > (ITEM_VALUE(_type))) exitWith {["Error", localize "STR_Shop_Virt_NotEnough"] spawn life_fnc_showPredefinedNotification;};

_illegal = M_CONFIG(getNumber,"VirtualItems",_type,"illegal");

if (_illegal == 1) then {
	if (life_cops_farms_factor && !([] call life_fnc_isCanad)) then {
		_price = _price * life_cops_farms_value;
	};
};

_price = (_price * _amount);
_price = round _price;

if (_illegal != 1) then {
	_price = (["legal_vente", _price] call life_fnc_gouvTaxesTake);
};

_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");
if(([false,_type,_amount] call life_fnc_handleInv)) then {

	if (_good == "") then {
		["Accepted", format[localize "STR_Shop_Virt_SellItem",_amount,(localize _name),[_price] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
	};

	_typeVitem = (getNumber(missionConfigFile >> "VirtualItems" >> _type >> "type"));
	_noReset = (getNumber(missionConfigFile >> "VirtualItems" >> _type >> "noReset"));

	if (_typeVitem == 1 && _noReset == 0) then {
		life_nb_supress = 0;
		profileNamespace setVariable ["pr_life_nb_supress", 0];
		saveProfileNamespace;
	};

	//_price = [_price, 0] call life_fnc_clanCheckTaxe;
	_price = round(_price);

	if (playerSide == civilian) then {
		[_type, _amount, _price] call life_fnc_invoiceSellVItem;
	};
	
	ADD(CASH,_price);
	[] call life_fnc_virt_update;	
	DYNAMICMARKET_boughtItems pushBack [_type,_amount];
	
	[player, _type, _amount, _price] remoteExec ["TON_fnc_insertSellLogs", 2];
};

if(EQUAL(life_shop_type,"drugdealer")) then {
	private["_array","_ind","_val"];
	_array = life_shop_npc getVariable["sellers",[]];
	_ind = [getPlayerUID player,_array] call TON_fnc_index;
	if(!(EQUAL(_ind,-1))) then {
		_val = SEL(SEL(_array,_ind),2);
		
		ADD(_val,_price);
		_array set[_ind,[getPlayerUID player,profileName,_val]];
		life_shop_npc setVariable["sellers",_array,true];
	} else {
		_array pushBack [getPlayerUID player,profileName,_price];
		life_shop_npc setVariable["sellers",_array,true];
	};
};

//["sell",_type, _amount] call life_fnc_insertFarmLog;

//life_farms pushBack ["sell", _type, _amount];

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;