#include "..\..\script_macros.hpp"
/*
	File: fn_weaponshoprefreshinventory.sqf
		
	Author: IronBlade
	    
	Description:
		- Update player inventory window in equipment shop
*/

private["_playerInvList","_index","_type","_config","_priceTag"];
disableSerialization;
((findDisplay 38400) displayCtrl 38406) ctrlSetText localize "STR_Global_Sell";
_playerInvList = ((findDisplay 38400) displayCtrl 38420);
lbClear _playerInvList;

// -- Add items to player inv list
private["_listedItems"];
_config = [];
_listedItems = [];

//Go through weapons
if(primaryWeapon player != "") then {_config pushBack primaryWeapon player;};
if(secondaryWeapon player != "") then {_config pushBack secondaryWeapon player;};
if(handgunWeapon player != "") then {_config pushBack handgunWeapon player;};

//Go through items
_config = _config + primaryWeaponItems player;
_config = _config + (backPackItems player);
_config = _config + (uniformItems player);
_config = _config + (vestItems player);
_config = _config + (assignedItems player);	

life_playerEquipment = _config;

{
	if(!(_x in _listedItems) && _x != "") then {
		_itemInfo = [_x] call life_fnc_fetchCfgDetails;
		_listedItems pushBack _x;
		
		_itemCount = {_x == (_itemInfo select 0)} count _config;
		if(_itemCount > 1) then {
			_playerInvList lbAdd format["[%2] %1",_itemInfo select 1,_itemCount];
		} else {
			_playerInvList lbAdd format["%1",_itemInfo select 1];
		};
		_playerInvList lbSetData[(lbSize _playerInvList)-1,_itemInfo select 0];
		_playerInvList lbSetPicture[(lbSize _playerInvList)-1,_itemInfo select 2];
	};
} foreach _config;

