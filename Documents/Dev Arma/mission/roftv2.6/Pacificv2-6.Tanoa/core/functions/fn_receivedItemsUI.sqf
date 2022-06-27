#include "..\..\script_macros.hpp"
/*
File: fn_receiveditemsui.sqf
	
Author: IronBlade

Usage: 
	- When traded items
	- When given items
	- When gather/mine/loot any items


	[[["salema_raw",1],["mackerel_raw",1],["ornate_raw",4],["mullet_raw",3],["catshark_raw",2]],false] spawn life_fnc_receivedItemsUI;
		OR 
	[["salema_raw","salema_raw","salema_raw","salema_raw","mackerel_raw""mackerel_raw""mackerel_raw""mackerel_raw"],true] spawn life_fnc_receivedItemsUI;
*/

private ["_array","_ctrlHeader","_ctrlList","_windowHeight","_text","_textList","_index"];
disableSerialization;
_itemArray = [_this,0,[],[[]]] call BIS_fnc_param;
_format = [_this,1,false,[false]] call BIS_fnc_param;

//Does the array need to be formatted?
if (_format) then {
	_itemArray = [_itemArray] call LB_CombineArrayElements;
};

_windowHeight = 0.04 * count _itemArray;
//No active controls? Reset IDC
if (count life_activeItemReceivedControls isEqualTo 0) then {life_itemControl = 40000};
//Delete any currently active windows
{ctrlDelete CONTROL(46,_x)}forEach life_activeItemReceivedControls;


// List: +++++++++++++++++++++:

//Create Header
_ctrlHeader = (findDisplay 46) ctrlCreate ["RscStructuredText", life_itemControl]; 
_ctrlHeader ctrlSetPosition [0.7, 0.54, 0.26, 0.04]; 
_text = parseText format["<t color ='#999999'>Items</t>"];
_ctrlHeader ctrlSetStructuredText _text;
_ctrlHeader ctrlSetBackgroundColor [0.1,0.1,0.1,1];

//Create List
//Have to use structured text because shitty ctrlSetFade doesnt work on listbox icons xd
_ctrlList = (findDisplay 46) ctrlCreate ["RscStructuredText", (life_itemControl + 1)]; 
_ctrlList ctrlSetPosition [0.7, 0.58, 0.26, _windowHeight]; 
_ctrlList ctrlSetBackgroundColor [0,0,0,0.7];
_textList = format[""];
{
	_itemClass = _x select 0;
	_itemAmount = _x select 1;
	if (_itemAmount > 0) then {

		//life_farms pushBack ["farm", _itemClass, _itemAmount];

		_itemDisplayName = M_CONFIG(getText,"VirtualItems",_itemClass,"displayName");
		_itemIcon = M_CONFIG(getText,"VirtualItems",_itemClass,"icon");

		if(!(EQUAL(_itemIcon,""))) then {
			_textList = _textList + format["<img image='%1' align='left' size='1'/><t size = '1'> %2 [x%3]</t><br/>",_itemIcon,localize _itemDisplayName,_itemAmount];
		} else {
			_textList = _textList + format["<t size = '1' align='left'>%1 [x%2]</t><br/>",localize _itemDisplayName,_itemAmount];
		};
	};
} forEach _itemArray;
_ctrlList ctrlSetStructuredText parsetext _textList;

//Manage the newly created ctrls
{
	[_x] spawn {
		_ctrl = _this select 0;
		_ctrl ctrlCommit 0;
		life_activeItemReceivedControls pushBack life_itemControl;
		life_itemControl = life_itemControl + 1;
		_ctrl ctrlSetFade 1; 
		_ctrl ctrlCommit 6;
	};
} forEach [_ctrlHeader,_ctrlList];


//Both the controls are deleted after 5 seconds
[life_itemControl,(life_itemControl - 1)] spawn {
	disableSerialization;
	_listidc = _this select 0;
	_headeridc = _this select 0;
	uiSleep 6.1;
	{ctrlDelete CONTROL(46,_x)}forEach [_listidc,_headeridc];
};