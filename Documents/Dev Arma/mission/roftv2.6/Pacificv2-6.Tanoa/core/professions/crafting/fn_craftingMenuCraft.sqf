#include "..\..\..\script_macros.hpp"
/*
	File: fn_craftingmenucraft.sqf
		
	Author: IronBlade

	Description:
		- Crafts the given item
	    
	Parameter(s):

	Usage: 
		
*/

private ["_itemClass","_itemToCraft","_filterString","_filterCfg","_itemComponentReq","_itemCfg","_displayName","_amountToCraft","_recipeList","_profLevelChance","_filterProfCfg","_crafted"];
_filter = uiNamespace getVariable ["Filtered_Crafting_Menu",[]];
_filterCraftClass = _filter select 0;
_filterProfCfg = _filter select 1;

if(vehicle player != player) exitWith {};
if((time - life_action_delay) < 5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;
if (life_action_inUse) exitWith {};
life_action_inUse = true;

CONTROL(12500,12505) ctrlEnable false; //insta disable craft button, safety thing
_type = lbValue[12501,(lbCurSel 12501)];
_itemCfg = lbData[12501,(lbCurSel 12501)];
_itemClass = M_CONFIG(getText,_filterCraftClass,_itemCfg,"item"); 
_componentsToRemove = M_CONFIG(getArray,_filterCraftClass,_itemCfg,"itemrequirement"); 
_amountToCraft = lbValue[12502,(lbCurSel 12502)];
lbClear 12502; //Clears the amount of items to craft box
_crafted = "";

_craft = false;

_bad = false;

if (!(["speedcraft"] call life_fnc_hasPerk)) then {
	
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui = GVAR_UINS "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_upp = format["Création en cours"];
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0;
	_cpRate = 0.01;


	while{true} do {
		
		sleep 0.27;
		_cP = _cP + _cpRate;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(!alive player) exitWith {_bad = true;};
	};
	5 cutText ["","PLAIN"];
	
};

life_action_inUse = false;

if (_bad) exitWith {};

//Virtual craft
if  (_type isEqualTo 1) then {

	_displayName = M_CONFIG(getText,_filterCraftClass,_itemCfg,"displayName"); 

	if (_displayName == "") then {
		_displayName = M_CONFIG(getText,"VirtualItems",_itemClass,"displayName");
		_displayName = localize _displayName;
	};

	if ([true,_itemClass,_amountToCraft] call life_fnc_handleInv) then {

		{
			_item  = _x select 0;
			_amount = _x select 1;
			_amount = _amount * _amountToCraft;

			if (["optimisation"] call life_fnc_hasPerk) then {
				_rand = floor random 100;
				_chance = 10;

				if (_rand <= _chance) then {
					_nameItem = localize (getText(missionConfigFile >> "VirtualItems" >> _item >> "displayName"));
					["OPTI",_nameItem] spawn life_fnc_eventFeed;

					_amount = _amount - 1;
				};
			};

			if (_amount > 0) then {
				[false,_item,_amount] call life_fnc_handleInv;
			};

		} forEach _componentsToRemove;

		lbSetCurSel[12501, 0]; //Needed so everything updates

		["CRAFTED",_displayName,_amountToCraft] spawn life_fnc_eventFeed;
		_crafted = "virtual";

		_craft = true;

	} else { 
		["Error", "Vous ne disposez pas de suffisamment d'espace d'inventaire."] spawn life_fnc_showPredefinedNotification;
		CONTROL(12500,12505) ctrlEnable true;
	};
} else {
	//Physical craft
	_displayName = M_CONFIG(getText,_filterCraftClass,_itemCfg,"displayName"); 

	if (_displayName == "") then {
		_tmp = [_itemClass] call life_fnc_fetchCfgDetails;
		_displayName = _tmp select 1;
	};

	[_itemClass,true] spawn life_fnc_handleItem;
	{
		_item  = _x select 0;
		_amount = _x select 1;
		_amount = _amount * _amountToCraft;	

		if (["optimisation"] call life_fnc_hasPerk) then {
			_rand = floor random 100;
			_chance = 10;

			if (_rand <= _chance) then {
				_nameItem = localize (getText(missionConfigFile >> "VirtualItems" >> _item >> "displayName"));
				["OPTI",_nameItem] spawn life_fnc_eventFeed;
				_amount = _amount - 1;
			};
		};

		if (_amount > 0) then {
			[false,_item,_amount] call life_fnc_handleInv;
		};
		
	} forEach _componentsToRemove;

	lbSetCurSel[12501, 0]; //Needed so everything updates

	_craft = true;

	["CRAFTED",_displayName ,_amountToCraft] spawn life_fnc_eventFeed;
	_crafted = "physical";
};

_noLevelItems = ["campfire"];	

if (!_craft) exitWith {};

if (!(_itemClass in _noLevelItems)) then {
	//Prof level ups?
	switch (_filterProfCfg) do {
		case "prof_narcos" : {
			_profLevelChance = round(4  * _amountToCraft);
			 [_filterProfCfg,1,_profLevelChance] call life_fnc_levelProfession;
		};
		case "prof_mining" : {
			[_filterProfCfg,1,20] call life_fnc_levelProfession;
		};
		case "prof_craft" : {
			[_filterProfCfg,2,100] call life_fnc_levelProfession;
		};
		case "prof_treasure" : {
			_profLevelChance = round(4  * _amountToCraft);
			[_filterProfCfg,1,_profLevelChance] call life_fnc_levelProfession;
		};
		case "prof_chimie" : {
			_val = ceil(_amountToCraft/2);
			[_filterProfCfg,_val,75] call life_fnc_levelProfession;
		};
		case "prof_livraison" : {
			_val = ceil(_amountToCraft/2);
			[_filterProfCfg,_val,75] call life_fnc_levelProfession;
		};
	};
};
