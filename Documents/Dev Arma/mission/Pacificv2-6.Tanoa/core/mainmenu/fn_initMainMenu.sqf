#include "..\..\script_macros.hpp"
/*
	File: fn_initmainmenu.sqf
	
	Author: IronBlade
*/
 private ["_playTimeFormat"];
disableSerialization;

waitUntil {isNull findDisplay 101};
cutText ["","BLACK IN"];

player switchMove "";
player setBehaviour "CARELESS";

//cam setup
spawn_cam = "CAMERA" camCreate getPos player;
showCinemaBorder false;
spawn_cam cameraEffect ["Internal", "Back"];
spawn_cam camSetTarget (player modelToWorld [-0.5,0,1]);
spawn_cam camSetPos (player modelToWorld [1,4,2]);
spawn_cam camSetFOV .33;
spawn_cam camSetFocus [50, 0];
spawn_cam camCommit 0;

//createDialog "mainMenu";
if(!(createDialog "mainMenu")) exitWith {[] call life_fnc_initMainMenu;};
(findDisplay 5000) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];

(CONTROL(5000,5001)) ctrlSetText format ["Bienvenue, %1",(name player)];

//Show the players data
_playTimeFormat = format["%1",[life_play_time,"HH:MM:SS"] call BIS_fnc_secondsToString];
(CONTROL(5000,5002)) ctrlSetStructuredText parseText format ["
<t align = 'right' size = '1.2'>Espèces: $%1 <br/>
Banque: $%2 <br/>
Réputation: %3  <br/>
Niveau: %4 <br/>
Temps de jeux: %5 <br/>
</t>",
[life_cash]call life_fnc_numberText,
[life_atmbank]call life_fnc_numberText,
life_reputation,
life_playerlevel,
_playTimeFormat];


//Skin player
[] call life_fnc_playerSkins;

//check for display being closed, hide every other player until then
while {true} do {
	//this is reversed - hides you when other players join
	if (isNull (findDisplay 5000)) exitWith {};
	{
		 if (_x != player) then {_x hideObject true;};
	}forEach playableUnits;
};

//waitUntil {isNull (findDisplay 5000)};

spawn_cam cameraEffect ["TERMINATE","BACK"];
camDestroy spawn_cam;
{if (_x != player) then {_x hideObject false;};} forEach playableUnits;

[] call life_fnc_hudSetup;
[] call life_fnc_hudUpdate;
