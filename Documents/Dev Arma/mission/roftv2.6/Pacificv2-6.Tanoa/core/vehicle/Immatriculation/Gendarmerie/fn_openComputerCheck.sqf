/*
	File:fn_openComputerCheck.sqf

	Autor: IronBlade
*/

if (player getVariable ["restrained",false]) exitWith {};

_bad = true;

switch (true) do { 
	case ((typeOf(vehicle player)) != "Jonzie_Tow_Truck") : {_bad = false;}; 
	case (((vehicle player) getVariable ["side",civilian] isEqualTo civilian) && (player != vehicle player)) : {_bad = false;};
};

if (_bad) exitWith {};

if(!(createDialog "Life_Computer_Immatricule")) exitWith {["Error", "Une erreur est survenue !"] spawn life_fnc_showPredefinedNotification;};
ctrlSetText[2981,format["Ordinateur"]];