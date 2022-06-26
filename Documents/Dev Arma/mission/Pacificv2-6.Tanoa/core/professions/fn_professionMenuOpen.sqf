#include "..\..\script_macros.hpp"
/*
	File: fn_levelSkill.sqf
		
	Author: IronBlade
	    
	Description:
		- Open menu, update tiles
*/

createDialog "professionDialog";
disableSerialization;
private ["_profCraftButton","_profInfo","_startIDC"];

["Prof","Global",false] spawn life_fnc_showHelp;

{CONTROL(12000,_x) progressSetPosition (1 / (1000 / 1));}forEach [12004,12009,120014,120019,120024,120029];


_startIDC = 12001;
{
	_profInfo = [_x] call life_fnc_fetchProfessionInfo;

	[format["%1_%2", _x, (_profInfo select 0)]] spawn life_fnc_achievementLearn;
 
	CONTROL(12000,_startIDC) ctrlSetStructuredText parseText format ["%1",(_profInfo select 2)];
	CONTROL(12000,_startIDC + 1) ctrlSetStructuredText parseText format ["%1/1000",(_profInfo select 0)];
	CONTROL(12000,_startIDC + 2) ctrlSetStructuredText parseText format ["%1",(_profInfo select 1)];
	if ((_profInfo select 0) > 0) then {
		CONTROL(12000,_startIDC + 3) progressSetPosition (1 / (1000 / (_profInfo select 0)));
	} else {
		CONTROL(12000,_startIDC + 3) progressSetPosition 0
	};

	_profCraftButton = CONTROL(12000,_startIDC + 4);

	_startIDC = _startIDC + 5;

//Has to be in this specific order because I fucked up the idc's and am too lazy to go back and fix it
} forEach ["prof_craft","prof_mining","prof_narcos","prof_treasure","prof_contrebande","prof_livraison"];

CONTROL(12000,120030) ctrlEnable false;