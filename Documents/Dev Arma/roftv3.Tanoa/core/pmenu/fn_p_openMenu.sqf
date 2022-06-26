#include "..\..\script_macros.hpp"
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens the players virtual inventory menu
*/
private ["_side"];
private ["_headerText","_xpText","_currentXP","_xpToNext","_xpLast","_playTimeFormat","_gang","_wantedList","_admin"];
if(!alive player || dialog) exitWith {}; 
createDialog "tabletHome";
disableSerialization;

// -- Buttons
_gang = 2011;
_wantedList = 2012;
_admin = 2013;
_skills = 2014;
_profs = 2015;

// -- Specific button stuff
switch(playerSide) do {
	case west: {
		ctrlShow[_gang,false]; 
		//ctrlEnable [_skills,false];
		ctrlEnable [_profs,false];
	};
	
	case civilian: {
		ctrlShow[_wantedList,false];
	};
	
	case independent: {
		ctrlShow[_gang,false];
		ctrlShow[_wantedList,false];
		ctrlEnable [_skills,false];
		ctrlEnable [_profs,false];
	};
	
};

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[_admin,false];
};

 
 // -- Display players stats
 // -- If xp shit isnt already set
if ((life_xpTowardsNext isEqualTo 0) OR (life_xpForNext isEqualTo 0)) then {
	[] call life_fnc_checkXP;
};
_xpText = format ["%1 (%2/%3)",PLAYERLEVEL,life_xpTowardsNext,life_xpForNext];

//_playTimeFormat = format["%1",[life_play_time,"HH:MM:SS"] call BIS_fnc_secondsToString];

_headerText = CONTROL(2001,2002);
_headerText ctrlSetStructuredText parseText format ["
	<t align = 'left' size = '2.4' shadow='0'>
	Bienvenue, %1<br/></t>

	<t align = 'left' size = '0.8' shadow='0'>
	CASH: $%2 <br/>
	BANK: $%3 <br/> 
	REPUTATION: %4 <br/>
	LEVEL:  %5 <br/></t>",
	player getVariable "realname",
	[CASH] call life_fnc_numberText,
	[BANK] call life_fnc_numberText,
	[REPUTATION] call life_fnc_numberText,
	_xpText
];