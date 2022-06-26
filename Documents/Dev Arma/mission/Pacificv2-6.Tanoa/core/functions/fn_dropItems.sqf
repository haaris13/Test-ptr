#include "..\..\script_macros.hpp"
/*
	File: fn_dropItems.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called on death, player drops any 'virtual' items they may be carrying.
*/
private["_obj","_unit","_item","_value"];
_unit = SEL(_this,0);

waitUntil{!isNil "life_server_code"};

{
	if(typeName _x == typeName "") then {_item = _x;} else {_item = configName _x};
	_value = ITEM_VALUE(_item);
	_itemName = ITEM_VARNAME(_item);
	
	switch(_item) do {
		case "waterBottle": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				//_obj SVAR ["water",_value,true];
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "tbacon": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_TacticalBacon_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "bakedbeans": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BakedBeans_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "rice": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_RiceBox_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "cereals": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CerealsBox_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "redgull": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Can_V3_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "franta": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Can_V2_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "spirit": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Can_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "fuelEmpty": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterFuel_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "fuelFull": {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterFuel_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "coffee": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Can_V3_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "shovel": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Shovel_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "axe": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Axe_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "aluminium": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "AluminiumFoil_01_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "acetone": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "ammoniac": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_DisinfectantSpray_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		case "acide_hydrochloric": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterPlastic_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "lithium": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "phosphoreRouge": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "sodiumhydroxide": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterPlastic_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "acidesulfuric": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterPlastic_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "toluene": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterPlastic_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "pseudoephedrine": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "mercure": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_BottlePlastic_V1_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "javel": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_CanisterPlastic_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "azote": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_GasCanister_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "templeBones": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_HumanSkull_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "archeTOssements": {
			if (_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_HumanSkull_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
		
		
		case "life_cash": {
			if(CASH > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Money_F" createVehicle _pos;
				_obj SVAR ["item",["money",GVAR_MNS [_item,0]],true];
				_obj SVAR ["side", playerside, true];
				_obj SVAR ["uid", getPlayerUID player, true];

				_obj setPos _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				SVAR_MNS ["life_cash",0];
			};
		};
		
		default {
			if(_value > 0) then {
				_pos = _unit modelToWorld[0,3,0];
				_pos = [SEL(_pos,0), SEL(_pos,1), 0];
				_obj = "Land_Suitcase_F" createVehicle _pos;
				[_obj] remoteExecCall ["life_fnc_simDisable",RANY];
				_obj setPos _pos;
				_obj SVAR ["item",[_item,_value],true];
				SVAR_MNS [_itemName,0];
			};
		};
	};
} foreach (("true" configClasses (missionConfigFile >> "VirtualItems")) + ["life_cash"]);