/*
	
	File:arracherClef.sqf
	
	Autor: IronBlade
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};
if (playerSide == west) exitWith {hint "Flic"};
hint "Arracher les clefs des véhicules !";
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint ""};
[player] remoteExec ["life_fnc_arracherClefClient",_unit];