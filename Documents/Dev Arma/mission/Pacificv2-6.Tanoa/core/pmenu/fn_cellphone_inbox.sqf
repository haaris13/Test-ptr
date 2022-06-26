#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
*/

private ["_messages"];
disableSerialization;
createDialog "life_cell_inbox";
_messageListbox = CONTROL(4900,4904);
_messages = life_messages;
reverse _messages;

{
	_from = _x select 0;
	_type = _x select 1;
	_msg = _x select 2;
	_gridpos = _x select 3;


	_messageListbox lbAdd format["%2 | %1",_type,_from];
	//_messageListbox lbSetData [(lbSize _messageListbox)-1,];
	_messageListbox lbSetValue [(lbSize _messageListbox)-1,	_forEachIndex];
	//_messageListbox lbSetPicture[(lbSize _messageListbox)-1,xd];

}forEach _messages;

(CONTROL(4900,4906)) ctrlSetStructuredText parseText format [""];
(CONTROL(4900,4901)) ctrlSetStructuredText parseText format [""];

(CONTROL(4900,4903)) ctrlSetStructuredText parseText format ["<t align='center'>S'il vous plaît sélectionnez un message dans la liste !</t>"];
