/*
	File: fn_bankEnd.sqf

	Autor: Iron
	Date: 03 Apr 2020 21:09:42
	Version: 0.1
*/

deleteMarker "bank_simple_mrk_alert";
deleteMarker "bank_simple_mrk_zone";

uiSleep (random 2);

if (life_bank_doors == 0) exitWith {};

life_bank_doors = 0;
publicVariable "life_bank_doors";