#include "..\..\script_macros.hpp"
/*
	File: 
		
	Author: IronBlade
	    
	Description:
		- Returns level(number) and tier(string) of given profession
*/

private ["_prof","_profLevel","_profTier","_profDisplayName","_side"];
_prof = [_this,0,"",[""]] call BIS_fnc_param; //"prof_fishing"
_profTier = "";
_profLevel = 0;
if (_prof isEqualTo "") then {hint format ["An error occured"]};

//_profLevel = PROFESSION_VALUE(_prof);
_profDisplayName = M_CONFIG(getText,"Professions",_prof,"displayName");
_profLevel = missionNamespace getVariable [_prof,0];


switch (true) do {
	case ((_profLevel >= 0) && (_profLevel < 100)): {_profTier = "Débutant"};
	case ((_profLevel >= 100) && (_profLevel < 200)): {_profTier = "Novice"};
	case ((_profLevel >= 200) && (_profLevel < 300)): {_profTier ="Apprenti"};
	case ((_profLevel >= 300) && (_profLevel < 400)): {_profTier ="Adepte"};
	case ((_profLevel >= 400) && (_profLevel < 600)): {_profTier = "Intermédiaire"};
	case ((_profLevel >= 600) && (_profLevel < 800)): {_profTier = "Expert"};
	case ((_profLevel >= 800) && (_profLevel < 950)): {_profTier = "Maître"};
	case ((_profLevel >= 950) && (_profLevel < 990)): {_profTier = "Légende"};
	case ((_profLevel >= 990) && (_profLevel < 999)): {_profTier = "Divinité"};
	case ((_profLevel >= 1000) && (_profLevel < 1001)): {_profTier = "God Eater"};
};

[_profLevel,_profTier,_profDisplayName];