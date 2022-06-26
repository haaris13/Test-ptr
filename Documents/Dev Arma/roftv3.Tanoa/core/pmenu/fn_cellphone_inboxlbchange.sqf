#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
*/

private["_messages","_sender","_type","_msg","_gridpos"];
disableSerialization;
_index = CONTROL_VALUE(4904);
_selectedMessage = life_messages select _index;
_sender = _selectedMessage select 0;
_type = _selectedMessage select 1;
_msg = _selectedMessage select 2;
_gridpos = _selectedMessage select 3;

if(isNil "_gridpos") then {_gridpos = "Inconnue";} else {
	_gridpos = format ['%1   |   %2', _gridpos select 0, _gridpos select 1];
};

(CONTROL(4900,4906)) ctrlSetStructuredText parseText format ["De: %1",_sender];
(CONTROL(4900,4901)) ctrlSetStructuredText parseText format ["Position: %1",_gridpos];
//Add type box, for admin message, police dispatch etc?

(CONTROL(4900,4903)) ctrlSetStructuredText parseText format ["%1",_msg];
