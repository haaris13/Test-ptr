#include "..\..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade

	Description:
		- Filters the current crafting menu by virtual or physical items
	    
	Parameter(s):

	Usage: 
*/

private ["_tmp","_displayName","_profession","_filter","_profCraftButton","_profInfo","_craftingRecipes","_filteredProfLevel","_profReq","_itemsReq","_configName","_item","_type","_itemClass"];
_control = SEL(_this,0);
_subfilter = SEL(_this,1);

_filter = uiNamespace getVariable ["Filtered_Crafting_Menu",[]];
_filterCraftClass = _filter select 0;
_filterProfCfg = _filter select 1;  

//-- Get your level in the filtered profession
_filteredProfLevel = PROFESSION_VALUE(_filterProfCfg);

//Disable craft button,clear description text and deselect menu elements
_recipesList = CONTROL(12500,12501);
lbClear _recipesList;
_recipesList lbSetCurSel 0;
CONTROL(12500,12505) ctrlEnable false; //disable craft button
CONTROL(12500,12502) ctrlEnable false; //disable craft listbox
CONTROL(12500,12503) ctrlSetStructuredText parsetext format ["<br/><br/><t size='1.5' font='puristaMedium' align='center'>Sélectionnez un élément.</t>"];

// -- Get all recipes for selected profession, and add to list
_recipes = "true" configClasses ( missionConfigFile >> _filterCraftClass ); 

{
	_profReq = getNumber ( _x >> "levelRequirement" );
	_type = getNumber ( _x >> "type" );

	//Virtual item 

	if ((_type isEqualTo 1) && (_subfilter == 1)) then {

		//Get the cfg name of item
		_itemClass = getText ( _x >> "item" ); 
		_displayName = getText ( _x >> "displayName" ); 

		//Have the ability to override display names/descriptions in the crafting menu if needed
		//mainly for physical items but left it here aswell
		if (_displayName == "") then {
			_displayName = M_CONFIG(getText,"VirtualItems",_itemClass,"displayName");
			_displayName = localize _displayName;
		}; 

		//Add to list box
		_recipesList lbAdd format["%1",_displayName];
		_recipesList lbSetData [(lbSize _recipesList)-1,(configName _x)];
		_recipesList lbSetValue [(lbSize _recipesList)-1,_type];

		//Make it red if you dont have the correct level
		if (_profReq > _filteredProfLevel) then {
			_recipesList lbSetColor [(lbSize _recipesList)-1,[1,0,0,1]];
		};

		//Add an icon if the item has it
		_icon = M_CONFIG(getText,"VirtualItems",_itemClass,"icon");
		if(!(EQUAL(_icon,""))) then {
			_recipesList lbSetPicture [(lbSize _recipesList)-1,_icon];
		};
	};

	//Physical item
	if ((_type isEqualTo 2) && (_subfilter == 2)) then {

		//Get the cfg name of item
		_itemClass = getText ( _x >> "item" ); 
		_displayName = getText ( _x >> "displayName" ); 
		_tmp = [_itemClass] call life_fnc_fetchCfgDetails;

		//Have the ability to override display names/descriptions in the crafting menu if needed
		if (_displayName isEqualTo "") then {
			_displayName = _tmp select 1;
		};

		_icon = _tmp select 2;

		//Add to list box
		_recipesList lbAdd format["%1",_displayName];
		_recipesList lbSetData [(lbSize _recipesList)-1,(configName _x)];
		_recipesList lbSetValue [(lbSize _recipesList)-1,_type];
		_recipesList lbSetPicture [(lbSize _recipesList)-1,_icon];

		//Make it red if you dont have the correct level
		if (_profReq > _filteredProfLevel) then {
			_recipesList lbSetColor [(lbSize _recipesList)-1,[1,0,0,1]];
		};			
	};
} forEach _recipes;


