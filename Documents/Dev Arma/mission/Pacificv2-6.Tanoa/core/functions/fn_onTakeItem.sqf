#include "..\..\script_macros.hpp"
/*
	File: fn_onTakeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Blocks the unit from taking something they should not have.
*/
private ["_unit","_item"];
_unit = [_this,0, objNull, [objNull]] call BIS_fnc_param;
_container = [_this, 1, objNull, [objNull]] call BIS_fnc_param;
_item = [_this,2,"",[""]] call BIS_fnc_param;

if(isNull _unit OR _item == "") exitWith {}; //Bad thingies?

switch(playerSide) do
{
	case west: {

		if (typeOf _container == "B_Slingload_01_Cargo_F") then {
			_var = _container getVariable ["uidUse","0"];

			if (_var != getPlayerUID player) then {
				["Error", "En cours d'utilisation !"] spawn life_fnc_showPredefinedNotification;
			};
		};

		if(_item in ["U_Rangemaster"]) then {
			[] call life_fnc_playerSkins;
		};
	};
	case civilian: {
		//Currently stoping the civilians from taking the Rangemaster clothing from medics or cops.
		if(_item in ["U_Rangemaster"] && !license_civ_medic) then {
			[_item,false,false,false,false] call life_fnc_handleItem;
		};

		if (playerSide == independent && _item in ["U_Rangemaster"]) then {
			[] call life_fnc_playerSkins;
		};

		if(_item in ["U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite","U_C_Commoner1_1"]) then {
			[] call life_fnc_playerSkins;
		};
	};
	case independent: {
		if(_item in ["U_Rangemaster"]) then {
			[] call life_fnc_playerSkins;
		};
	};
};

[] call life_fnc_updateClothing;