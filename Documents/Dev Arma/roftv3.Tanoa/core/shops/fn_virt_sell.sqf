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

if((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
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
if((EQUAL(_price,0)) || (EQUAL(_price,-1))) exitWith {hint "You cannot sell this item!"; playSound "addItemFailed";};

_amount = ctrlText 2405;
if(!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum"; playSound "addItemFailed";};
_amount = parseNumber (_amount);
if(_amount > (ITEM_VALUE(_type))) exitWith {hint localize "STR_Shop_Virt_NotEnough"; playSound "addItemFailed";};

_illegal = M_CONFIG(getNumber,"VirtualItems",_type,"illegal");
_textPour = '30';

if (_illegal == 1) then {
	_nbCop = (west countSide playableUnits);
	if (_nbCop <= 2) then {
		if (_nbCop <= 1) then {
			_price = _price * 0.7;
			_textPour = '30';
		}else{
			_price = _price * 0.85;
			_textPour = '15';
		}
	}else {
		_price = _price;
	};
	if(_nbCop >= 5) then {
		_price = _price * 1.05;
	};
	if(_nbCop >= 7) then {
		_price = _price * 1.05;
	};
	if(_nbCop >= 9) then {
		_price = _price * 1.05;
	};

};

_price = (_price * _amount);
_price = round _price;

if (_illegal == 1) then {
	//_price = (["illegal_vente", _price] call life_fnc_gouvTaxesTake);
} else {
	_price = (["legal_vente", _price] call life_fnc_gouvTaxesTake);
};

_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");
if(([false,_type,_amount] call life_fnc_handleInv)) then {
	if (_illegal == 1) then {
		_nbCop = (west countSide playableUnits);
		if (["dealer"]call life_fnc_hasPerk) then {
			_price = round(_price* 1.05);
		}; 
		if (_nbCop <= 2) then {
        	hint format ["Vous avez vendu %1 de %2 la valeur de la marchandise a perdu %3 pour cent par manque de risque.", _amount,(localize _name),_textPour];
			_price = [_price, 0] call life_fnc_clanCheckTaxe;
			ArgentSal =round(ArgentSal + _price);
		}else {
			hint format[localize "STR_Shop_Virt_SellItem",_amount,(localize _name),[_price] call life_fnc_numberText];
			_price = [_price, 0] call life_fnc_clanCheckTaxe;
			ArgentSal = round(ArgentSal + _price);
		};
	} else {
	
		if (_good == "") then {
			hint format[localize "STR_Shop_Virt_SellItem",_amount,(localize _name),[_price] call life_fnc_numberText];
		};

		if ((getNumber(missionConfigFile >> "VirtualItems" >> _type >> "type")) == 1) then {
			life_nb_supress = 0;
			[11] call SOCK_fnc_updatePartial;
		};

		_price = [_price, 0] call life_fnc_clanCheckTaxe;
		if (["legal"]call life_fnc_hasPerk) then {
		_price = round(_price* 1.10);
		}; 
		_price = round(_price);

		ADD(CASH,_price);
	};
		[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
		player setVariable ["ArgentSal",ArgentSal,true];
		[] call life_fnc_virt_update;
		DYNAMICMARKET_boughtItems pushBack [_type,_amount];
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

["sell",_type, _amount] call life_fnc_insertFarmLog;

//life_farms pushBack ["sell", _type, _amount];

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
