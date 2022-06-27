#include "..\..\script_macros.hpp"
/*
	File: fn_p_openPlayerData.sqf

	Autor: Iron
	Date: 16 Mar 2020 23:27:18
	Version: 0.1
*/
if(!alive player) exitWith {}; 
createDialog "dlg_player_data";
disableSerialization;

// -- Buttons
_atouts = 25005;
_gang = 25006;
_skills = 25003;
_profs = 25004;

//ctrlEnable [_atouts,false];

// -- Specific button stuff
switch(playerSide) do {
	case west: {
		ctrlShow[_gang,false];
		ctrlEnable [_skills,false];
		ctrlEnable [_profs,false];
	};
	
	case civilian: {

	};
	
	case independent: {
		ctrlShow[_gang,false];
		ctrlEnable [_skills,false];
		ctrlEnable [_profs,false];
	};
	
};

 // -- Display players stats
 // -- If xp shit isnt already set
if ((life_xpTowardsNext isEqualTo 0) OR (life_xpForNext isEqualTo 0)) then {
	[] call life_fnc_checkXP;
};
_xpText = format ["%1 (%2/%3)",PLAYERLEVEL,life_xpTowardsNext,life_xpForNext];

//_playTimeFormat = format["%1",[life_play_time,"HH:MM:SS"] call BIS_fnc_secondsToString];

_headerText = CONTROL(25000,25002);
_headerText ctrlSetStructuredText parseText format ["
	<t align = 'left' size = '2.4' shadow='0'>
	Mes Informations<br/></t>

	<t align = 'left' size = '0.8' shadow='0'>Espèces: $%2 <br/>
	Banque: $%3 <br/>
	Réputation: %4 <br/>
	Niveau:  %5 <br/></t>",
	(name player),
	[CASH] call life_fnc_numberText,
	[BANK] call life_fnc_numberText,
	[REPUTATION] call life_fnc_numberText,
	_xpText
];