#include "..\..\..\script_macros.hpp"
/*
File: fn_levelSkill.sqf
	
Author: IronBlade
    
Description:
	- 
*/
private ["_firstTierLevel","_firstTierButtonIDC"];

if (life_playerlevel < 5) exitWith {["Error", "Vous déverrouillez votre première compétence au niveau 5."] spawn life_fnc_showPredefinedNotification;};

["Action","Perks",false] spawn life_fnc_showHelp;

disableSerialization;
createDialog "PerkDialog";
//-- Enable tier buttons based on level
_firstTierLevel = 5;
_firstTierButtonIDC = 17001;
for "_i" from 0 to 10 do {
	if (life_playerlevel >= _firstTierLevel) then {
		CONTROL(17000,_firstTierButtonIDC) ctrlEnable true;
		[format["level%1", _firstTierLevel]] spawn life_fnc_achievementLearn;
	} else {CONTROL(17000,_firstTierButtonIDC) ctrlEnable false};

	_firstTierButtonIDC = _firstTierButtonIDC +1;
	_firstTierLevel = _firstTierLevel + 5;
};

//-- Disable overview button for now
//CONTROL(17000,17008) ctrlEnable false;

[1] call life_fnc_perkFilterTier;

