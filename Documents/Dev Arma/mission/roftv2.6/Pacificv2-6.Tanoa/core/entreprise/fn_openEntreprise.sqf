/*
	File:fn_openEntreprise.sqf

	Autor:IronBlade
*/

_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_entID = (_this select 3) select 0;

_owners = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "owners");


if (!((getPlayerUID player) in _owners)) exitWith {
	["Error", "Vous ne faites pas partie de l'entreprise !"] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
};

_markConfVar = getText(missionconfigFile >> "CfgEntreprise" >> _entID >> "mapMarkVar");
_markConfText = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "mapMarkText");
_etat = 0;

if (_markConfVar == "") exitWith {};


if (markerText _markConfVar == (_markConfText select 0)) then {
	_markConfVar setMarkerText (_markConfText select 1);
	_etat = 0;
} else {
	_markConfVar setMarkerText (_markConfText select 0);
	_etat = 1;
};

_etatText = switch (_etat) do { 
	case 0 : {"Fermée"}; 
	case 1 : {"Ouverte"};
};


[format["L'Entreprise est désormais %1", _etatText]] call life_fnc_dynamicText;