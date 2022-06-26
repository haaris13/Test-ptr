#include "..\..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
	    
	Description:
		- Filters the crafting menu for the given profession
	    
	Parameter(s):

	Usage: 
*/

private ["_displayName","_profession","_filter","_profCraftButton","_profInfo","_craftingRecipes","_filteredProfLevel","_profReq","_itemsReq","_configName","_item","_type","_itemClass"];
_control = SEL(_this,0);
_filter = SEL(_this,1);


switch (_filter) do {
							//Config class, prof class
	case 0 : {_profession = ["MacGyver","prof_craft"]};
	case 1 : {_profession = ["Narcos","prof_narcos"]};
	case 2 : {_profession = ["Mining","prof_mining"]};
	case 3 : {_profession = ["TreasureHunting","prof_treasure"]};
	case 4 : {_profession = ["Chimie","prof_chimie"]};
	case 5 : {_profession = ["Livreur","prof_livraison"]};

	default {_profession = ["",""]};
};

uiNamespace setVariable ["Filtered_Crafting_Menu",_profession];

//-- Get your level in the filtered profession
_filteredProfLevel = PROFESSION_VALUE(_profession select 1);

//Disable craft button,clear description text and deselect menu elements
_recipesList = CONTROL(12500,12501);
lbClear _recipesList;
_recipesList lbSetCurSel 0;
CONTROL(12500,12505) ctrlEnable false; //disable craft button
CONTROL(12500,12502) ctrlEnable false; //disable craft listbox
CONTROL(12500,12503) ctrlSetStructuredText parsetext format ["<br/><br/><t size='1.5' font='puristaMedium' align='center'>Sélectionnez un objet</t>"];

// -- Get all recipes for selected profession, and add to list
_recipes = "true" configClasses ( missionConfigFile >> _profession select 0 ); 

{	
	_profReq = getNumber ( _x >> "levelRequirement" );
	_type = getNumber ( _x >> "type" ); //1 virtual, 2 physical
	if (_type isEqualTo 1) then {
		//Virtual item 
		//Get the cfg name of item
		_itemClass = getText( _x >> "item" ); 
		_displayName = getText( _x >> "displayName" ); 

		//Have the ability to override display names/descriptions in the crafting menu if needed
		//mainly for physical items but left it here aswell
		if (_displayName == "") then {
			_displayName = M_CONFIG(getText,"VirtualItems",_itemClass,"displayName");
			_displayName = localize _displayName;
		}; 

		//Add to list box
		_recipesList lbAdd format["%1", _displayName];
		_recipesList lbSetData [(lbSize _recipesList)-1,(configName _x)]; //set the config rather than item class
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
} forEach _recipes;


