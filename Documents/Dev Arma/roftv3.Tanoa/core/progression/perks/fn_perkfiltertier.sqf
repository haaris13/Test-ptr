#include "..\..\..\script_macros.hpp"

/*
	File: fn_perkfiltertier.sqf
		
	Author: IronBlade
	    
	Description:
		- 
*/

private ["_filteredTier","_availablePerkList","_playerSide","_activePerk","_removeCost","_activePerkLB"];
disableSerialization;
_filteredTier = [_this,0,0,[0]] call BIS_fnc_param;
uiNamespace setVariable ["tier_filter",_filteredTier];
if (_filteredTier isEqualTo 0) exitWith {hint "An error occured"};
_playerSide = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};
_activePerk = false;

//-- Available Tier thing
CONTROL(17000,17025) ctrlSetText format ["Compétences Disponibles - Tier %1",_filteredTier];

//--Controls to edit
_availablePerkList = CONTROL(17000,17024);
_activePerkLB = CONTROL(17000,17021);
//--Clear list / textbox
lbClear _availablePerkList;
_activePerkLB ctrlSetText format [""];

//--Add available perks, and check for currently active perk
{
	_cfg = _x;
	_tier = getNumber (_x >> "tier");
	_side = getText (_x >> "side");

	if ((_side isEqualTo _playerSide) && (_tier isEqualTo _filteredTier)) then {

		_displayName = getText (_x >> "name");
		_description = getText (_x >> "description");
		_icon = getText (_x >> "icon");

		_availablePerkList lbAdd format ["%1",_displayName];
		_availablePerkList lbSetData [(lbSize _availablePerkList)-1,(configName _x)];
		if !(_icon isEqualTo "") then {
			_availablePerkList lbSetPicture [(lbSize _availablePerkList)-1,_icon];
		};

		//-- Check if this perk is currently active
		if (((configName _x) in life_activePerks) && (!_activePerk)) then {
			_activePerk = true; 
			uiNamespace setVariable ["tier_active_perk",(configName _x)];
			//-- Set active description
			CONTROL(17000,17022) ctrlSetStructuredText parseText format ["%1",_description];
			//-- Add to active box
			//_activePerkLB lbAdd format ["%1",_displayName];
			_activePerkLB ctrlSetText format ["%1",_displayName];
			//if !(_icon isEqualTo "") then {
			//	_activePerkLB lbSetPicture [(lbSize _activePerkLB)-1,_icon];
			//};
		};
	};
} forEach ("true" configClasses (missionConfigFile >> "CfgPerks"));
_availablePerkList lbSetCurSel -1;

//-- Select a perk text
CONTROL(17000,170110) ctrlSetText format ["Selection"];
CONTROL(17000,170120) ctrlSetStructuredText parseText format["Sélectionnez une compétence dans la liste sur la gauche pour afficher ses bonus."];

//-- Other stuff related to a perk being active

_levelTier = _filteredTier * 5;

_price = life_xpForNext * 2;

if (_activePerk) then {
	CONTROL(17000,17030) ctrlEnable false; 
	CONTROL(17000,17031) ctrlEnable true;
	CONTROL(17000,17024) ctrlSetStructuredText parseText format ["<t color ='#ea0000' size = '0.8'>AVIS: Vous avez déjà une compétence sur ce palier.</t>"];
	CONTROL(17000,17023) ctrlSetStructuredText parseText format ["<t size = '0.8'>Coût: %1XP</t>",[(_price)] call life_fnc_numberText];

	} else {

	CONTROL(17000,17030) ctrlEnable true; 
	CONTROL(17000,17031) ctrlEnable false;
	CONTROL(17000,17022) ctrlSetStructuredText parseText format [""];
	CONTROL(17000,17024) ctrlSetStructuredText parseText format [""];
	CONTROL(17000,17023) ctrlSetStructuredText parseText format [""];
};