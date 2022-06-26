/*
	File: fn_phoneOpenMenu.sqf
		
	Author: IronBlade 
*/
private ["_headerText"];
if(!alive player) exitWith {}; 
createDialog "dlg_phone_v2";
disableSerialization;

_display = (findDisplay 24000);
_buttonContacts = (_display displayCtrl 24003);
_buttonMessages = (_display displayCtrl 24004);
_buttonSettings = (_display displayCtrl 24005);

_selectedNumber = "Aucun";

if (count life_phone > 0) then {
	_selectedNumber = life_phone select 1;
};

_headerText = (_display displayCtrl 24002);
_headerText ctrlSetStructuredText parseText format ["
	<t align = 'left' size = '2.4' shadow='0'>
	Téléphone<br/></t>

	<t align = 'left' size = '0.8' shadow='0'>En cours: %1 <br/></t>",
	_selectedNumber
];

if (count life_phone == 0) then {
	_buttonContacts ctrlEnable false;
	_buttonMessages ctrlEnable false;
};
	
_buttonSettings ctrlEnable false;