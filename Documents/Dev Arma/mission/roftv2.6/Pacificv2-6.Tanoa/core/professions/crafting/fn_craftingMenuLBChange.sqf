#include "..\..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
*/

private ["_fireNearby","_requiresFire","_comboIndex","_yourComponentQuantity","_i","_maxCraftQuantity","_itemClass","_arr","_itemType","_profLevel","_itemCfg","_itemLevelReq","_filter","_icon","_displayName","_itemDescription","_itemComponentReq","_notHighEnough","_filteredProfLevel","_requiredItemList","_canCraft"];
_filter = uiNamespace getVariable ["Filtered_Crafting_Menu",[]];
_filterCraftClass = _filter select 0;
_filterProfCfg = _filter select 1; 

_control = _this select 0;
_index = _this select 1;
if(EQUAL((lbCurSel 12501),-1)) exitWith {};

_itemCfg = _control lbData _index;	//crafting config entry
_itemType =  _control lbValue _index; // 1 = virtual 2 = physical 
_canCraft = true;
_profLevel = PROFESSION_VALUE(_filterProfCfg);
_maxCraftQuantity = 99999;

//Get the classname of the item 
_itemClass = M_CONFIG(getText,_filterCraftClass,_itemCfg,"item");
_requiresFire = M_CONFIG(getNumber,_filterCraftClass,_itemCfg,"requiresCampfire");
_requiresWorkbench = M_CONFIG(getNumber,_filterCraftClass,_itemCfg,"requiresWorkbench");

if (_itemType isEqualTo 1) then {
	//VIRTUAL ITEMS
	//Various item info can be overrided in crafting config if required.
	_itemDescription = M_CONFIG(getText,_filterCraftClass,_itemCfg,"description"); 
	_displayName = M_CONFIG(getText,_filterCraftClass,_itemCfg,"displayName"); 

	if (_displayName == "") then {_displayName = M_CONFIG(getText,"VirtualItems",_itemClass,"displayName"); _displayName = localize _displayName;}; 
	if (_itemDescription == "") then {_itemDescription = M_CONFIG(getText,"VirtualItems",_itemClass,"description");}; 
	_icon = M_CONFIG(getText,"VirtualItems",_itemClass,"icon");

	} else {

	//PHYSICAL ITEMS
	_arr = [_itemClass] call life_fnc_fetchCfgDetails;
	_icon = _arr select 2;
	_itemDescription = M_CONFIG(getText,_filterCraftClass,_itemCfg,"description"); 
	_displayName = M_CONFIG(getText,_filterCraftClass,_itemCfg,"displayName"); 

	if (_displayName == "") then {
		_displayName = _arr select 1;
	};
};

//Get crafting related info
_itemComponentReq =  M_CONFIG(getArray,_filterCraftClass,_itemCfg,"itemRequirement");  
_itemLevelReq = M_CONFIG(getNumber,_filterCraftClass,_itemCfg,"levelRequirement");  

//Crafting text
_craftingDescription = format ["
<br/>
<img image = '%1' align='center' size='4.5' /> <br/>
<t align = 'center' size = '1.5'>%2</t><br/>
<br/>
<t align = 'left' size = '1'>%3 </t><br/>
<br/>
<t align = 'center' size = '1.5'>Exigences</t><br/><br/>",
_icon,
_displayName,
_itemDescription
];

//Add prof level requirement
_profName = M_CONFIG(getText,"Professions",_filterProfCfg,"displayName");
_craftingDescription = _craftingDescription + format["<t size='1' align='left'>Niveau de %1</t>",_profName]; 

if (_profLevel < _itemLevelReq) then {
	_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#ea0000", _profLevel, _itemLevelReq];
	_canCraft = false;
} else {
	_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#b2ec00", _profLevel, _itemLevelReq];
};

_craftingDescription = _craftingDescription + "<br/>";

//Check for nearby campfire
if (_requiresFire isEqualTo 1) then {

	_fireNearby = [6] call life_fnc_requiresCampfire;
	if (_fireNearby) then {
	
		_craftingDescription = _craftingDescription + format["<t size='1' align='left'>Flame à proximité</t>"];
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>Oui</t>", "#b2ec00"];
		} else {
		_craftingDescription = _craftingDescription + format["<t size='1' align='left'>Flame à proximité</t>"];
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>Non</t>", "#ea0000"];
		_canCraft = false;
	};
	_craftingDescription = _craftingDescription + "<br/>";
};

if (_requiresWorkbench isEqualTo 1) then {

	_Workbench = [4] call life_fnc_requiresWorkBench;
	if (_Workbench) then {
	
		_craftingDescription = _craftingDescription + format["<t size='1' align='left'>Table de travail à proximité</t>"];
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>Oui</t>", "#b2ec00"];
		} else {
		_craftingDescription = _craftingDescription + format["<t size='1' align='left'>Table de travail à proximité</t>"];
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>Non</t>", "#ea0000"];
		_canCraft = false;
	};
	_craftingDescription = _craftingDescription + "<br/>";
};




//Check through required components and add them to breakdown
{	
	_item = _x select 0;
	_requiredComponentAmount = _x select 1;
	_componentDisplayName = M_CONFIG(getText,"VirtualItems",_item,"displayName");
	_yourComponentQuantity = ITEM_VALUE(_item);

	_maxCraftQuantity = 1;

	_craftingDescription = _craftingDescription + format ["<t size='1' align='left'>%1</t>", localize _componentDisplayName];

	if (_yourComponentQuantity < _requiredComponentAmount) then {
		_canCraft = false;
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#ea0000", _yourComponentQuantity, _requiredComponentAmount];
		} else {
		_craftingDescription = _craftingDescription + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#b2ec00", _yourComponentQuantity, _requiredComponentAmount];
	};
 _craftingDescription = _craftingDescription + "<br/>";
} forEach _itemComponentReq;

//Should crafting be enabled?
if (_canCraft) then { 

	CONTROL(12500,12505) ctrlEnable true;//Button
	CONTROL(12500,12502) ctrlEnable true; //Listbox
	lbClear 12502;

	for "_i" from 1 to _maxCraftQuantity do {
			_comboIndex = lbAdd [12502,str(_i)];
			lbSetValue [12502,_comboIndex,_i];
	};

	lbSetCurSel[12502, 0];

	switch (_maxCraftQuantity) do {

		case 1 : {
				_craftingDescription = _craftingDescription + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>Vous pouvez crée cet élément une fois.</t>", "#b2ec00"];
		};
		case 99999: {
				_craftingDescription = _craftingDescription + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>Vous pouvez crée cet élément autant de fois que vous voulez.</t>", "#b2ec00"];
				_maxCraftQuantity = 10; //cap at 10, for listbox
		};
		default {
				_craftingDescription = _craftingDescription + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>Vous pouvez crée cet élément %2 fois.</t>", "#b2ec00" , _maxCraftQuantity];
			//if (_maxCraftQuantity > 10) then {_maxCraftQuantity = 10};
		};
	};

} else {

	_craftingDescription = _craftingDescription + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>Vous ne pouvez pas crée cet élément.</t>", "#ea0000"];
	CONTROL(12500,12505) ctrlEnable false;
	CONTROL(12500,12502) ctrlEnable false; 
	
};

//Write in text box
CONTROL(12500,12503) ctrlSetStructuredText parsetext _craftingDescription;

