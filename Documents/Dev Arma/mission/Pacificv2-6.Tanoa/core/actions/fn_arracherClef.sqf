/*
	
	File:arracherClef.sqf
	
	Autor: IronBlade
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};
	
["Accepted", "Arracher les cléfs des véhicules de la personne !"] spawn life_fnc_showPredefinedNotification;
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {["Error", "Cette personne n'est plus à proximité"] spawn life_fnc_showPredefinedNotification;};
[player] remoteExec ["life_fnc_arracherClefClient",_unit];