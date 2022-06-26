#include "..\..\script_macros.hpp"
/*
	File: fn_giveItem.sqf
		
	Author: Tonic,IronBlade
	    
	Description:
*/

private["_unit","_val","_type","_unit","_list","_header","_button","_infoEditBox"];
_type = SEL(_this,0);
_unit = SEL(_this,1);

switch (_type) do {

	case "load" : {

		if (!createDialog "interactionGiveItem") exitWith {};
		life_pInact_curTarget = _unit;


		_header = CONTROL(15500,15501);
		_button = CONTROL(15500,15502);
		_list = CONTROL(15500,15503);
		_infoEditBox = CONTROL(15500,15504); 

		//Setup window for giving items
		_button ctrlSetText "Donner";
		//_button ctrlAddEventHandler ["onButtonClick", {}];
		_header ctrlSetText "Donner Objet";

		//Refresh your inv
		lbClear _list;
		{
			_val = ITEM_VALUE(configName _x);
			
			if(_val > 0) then {
				_list lbAdd format["[%1] - %2",_val,localize (getText(_x >> "displayName"))];
				_list lbSetData [(lbSize _list)-1,configName _x];
				_icon = (getText(_x >> "icon"));
				if(!(EQUAL(_icon,""))) then {
					_list lbSetPicture [(lbSize _list)-1,_icon];
				};
			};
		} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));
	};

	case "give" : {
		_unit = life_pInact_curTarget;
		hint "Called";
		_header = CONTROL(15500,15501);
		_button = CONTROL(15500,15502);
		_list = CONTROL(15500,15503);
		_infoEditBox = CONTROL(15500,15504); 
		
		_val = ctrlText 15504;

		if((lbCurSel 15503) isEqualTo -1) exitWith {hint "You didn't select an item you wanted to give.";};
		_item = lbData [15503,(lbCurSel 15503)];

		if(isNil "_unit") exitWith {};
		if(_unit isEqualTo player) exitWith {};
		if(isNull _unit) exitWith {};


		if(!([_val] call TON_fnc_isnumber)) exitWith {hint "You didn't enter a number.";};
		if(parseNumber(_val) <= 0) exitWith {hint "You need to enter the amount you want to give.";};
		if(isNil "_unit") exitWith {hint "The selected player is not within range";};
		if(!([false,_item,(parseNumber _val)] call life_fnc_handleInv)) exitWith {hint "Couldn't give that much of that item, maybe you don't have that amount?";};

		[_unit,_val,_item,player] remoteExecCall ["life_fnc_receiveItem",_unit];
		_itemtype = M_CONFIG(getText,"VirtualItems",_item,"displayName");
		hint format["You gave %1 %2 %3",_unit getVariable["realname",name _unit],_val,(localize _itemtype)];
		["refresh"] call life_fnc_giveItem;

		[3] call SOCK_fnc_updatePartial;
	};


	case "refresh" : {
		if (isNull (findDisplay 15500)) exitWith {};
		_list = CONTROL(15500,15503);
		lbClear _list;
		{
			_val = ITEM_VALUE(configName _x);
				
			if(_val > 0) then {
				_list lbAdd format["[%1] - %2",_val,localize (getText(_x >> "displayName"))];
				_list lbSetData [(lbSize _list)-1,configName _x];
				_icon = (getText(_x >> "icon"));
				if(!(EQUAL(_icon,""))) then {
					_list lbSetPicture [(lbSize _list)-1,_icon];
				};
			};
		} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));
	};
};