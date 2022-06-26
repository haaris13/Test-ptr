#include "..\..\script_macros.hpp"
/*
	File: fn_clothingFilter.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Functionality for filtering clothing types in the menu.
*/
disableSerialization;
private["_control","_selection","_list","_filter","_pic","_details"];


private["_listedItems","_playerInvList"];
_config = [];
_listedItems = [];
_playerInvList = ((findDisplay 3100) displayCtrl 3110);
lbClear _playerInvList;

_config pushBack uniform player;
_config pushBack vest player;
_config pushBack backpack player;
_config pushBack goggles player;
_config pushBack headgear player;


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

if(isNil {_this select 0}) then {_playerInvList lbSetCurSel 0;};