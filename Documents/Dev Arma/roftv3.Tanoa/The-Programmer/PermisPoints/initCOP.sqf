/*
_null=this execVM "The-Programmer\PermisPoints\initCOP.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_COPS","Max_Settings_PermisPoints","PermisPoints_Localization"] call theprogrammer_core_fnc_localize),max_permisPoints_fnc_searchPlayersMenu,"",0,false,false,"",'playerSide isEqualTo west'];
